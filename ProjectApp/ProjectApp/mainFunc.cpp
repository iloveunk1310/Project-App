#include "func.h"


bool sendfile(SOCKET sock, const char* filename)
{
	std::ifstream file(filename, std::ios::binary | std::ios::ate);
	if (!file.is_open()) {
		//cout << "Failed to open file.\n";
	}

	// Get file size
	std::streamsize fileSize = file.tellg();
	file.seekg(0, std::ios::beg);

	// Send file in chunks
	char buffer[BUFFER_SIZE];
	while (file.read(buffer, BUFFER_SIZE) || file.gcount() > 0) {
		int bytesSent = send(sock, buffer, file.gcount(), 0);
		if (bytesSent == SOCKET_ERROR) {
			//std::cerr << "Send failed: " << WSAGetLastError() << "\n";
			return false;
		}
	}

	// Close the file
	file.close();
	return true;
}
//send file
int connet_and_send_file(sockaddr_in srv, int &lenh) {
	int nSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (nSocket < 0) {
		//cout << "not open";
	}
	else {
		//cout << "the socket open success" << nSocket << endl;
	}
	//ini evnvironment
	srv.sin_family = AF_INET;
	srv.sin_port = htons(PORT);
	srv.sin_addr.s_addr = INADDR_ANY;
	memset(&(srv.sin_zero), 0, 8);
	//bind
	int nRET = ::bind(nSocket, (sockaddr*)&srv, sizeof(sockaddr));
	if (nRET < 0) {
		//cout << "fail to bind to local port" << endl;
		exit(EXIT_FAILURE);
		return -1;
	}
	else //cout << "success to bind to local port" << endl;
	nRET = listen(nSocket, 5);
	if (nRET < 0) {
		//cout << "fail to listen to client" << endl;
		exit(EXIT_FAILURE);
		return -1;
	}
	else {}
	int nClient = 0;
	int addrlen = sizeof(srv);
	nClient = accept(nSocket, (struct sockaddr*)&srv, &addrlen);
	if (nClient < 0) {
		//cout << "Cannot accept client at port" << errno;
		exit(EXIT_FAILURE);
		return -1;
	}
	else {}//cout << "Accept client at port" << nClient << endl;
	char sBuff[1024] = { 0, };
	string fileSend = "";
	memset(sBuff, '\0', sizeof(sBuff));
	recv(nClient, sBuff, 1024, 0);
	//if (nRET < 0) {
	//	//cout << "No  new message";
	//	return 0;
	//}
	//cout << "\nRecv from client:\n" << sBuff << endl;
	string save_his = "";
	int length = strlen(sBuff);
	lenh = (sBuff[length - 1] - 48);
	if (sBuff[length - 2] == sBuff[length - 1])
		lenh = 10 * lenh + lenh;
	//thong so lenh
	if (sBuff[length - 1] == '1') {
		save_his += "List App";
		ListApp();
		fileSend = "D:\\ListApp.txt";
	}
	else if (sBuff[length - 1] == '5') {
		save_his += "Screenshot";
		screenshot();
		fileSend = "screenshot.bmp";
	}
	else if (sBuff[length - 1] == '7') {
		if (sBuff[length - 2] == '7') {
			save_his += "Sleep";
			Sleep();
		}
		else {
			save_his += "Shutdown";
			ShutDown();
		}
		fileSend = "shutdown.txt";
	}
	else if (sBuff[length - 1] == '3') {
		save_his += "List Service";
		ListService();
		fileSend = "D:\\ListService2.txt";
	}
	else if (sBuff[length - 1] == '4') {
		if (sBuff[length - 1] == '4') {
			save_his += "Stop Service";
			std::string str = "";
			for (int i = 0; i < length - 3; i++)
				str += sBuff[i];
			std::wstring str2(str.length(), L' '); 
			std::copy(str.begin(), str.end(), str2.begin());
			stopService(str2);
			fileSend = "D:\\ListService2.txt";
		}
		else {
			save_his += "Start Service";
			std::string str = "";
			for (int i = 0; i < length - 2; i++)
				str += sBuff[i];
			std::wstring str2(str.length(), L' ');
			std::copy(str.begin(), str.end(), str2.begin());
			startService(str2);
			ListService();
			fileSend = "D:\\ListService2.txt";
		}
	}
	else if (sBuff[length - 1] == '2') {
		if (sBuff[length - 2] != '2') {
			save_his += "Start App";
			string app = "";
			for (int i = 0; i < length - 2; i++)
				app += sBuff[i];
			app += ".exe";
			StartApp((const string)app);
			Sleep(1000);
			screenshot();
			fileSend = "screenshot.bmp";
		}
		else {
			save_his += "Stop App";
			string app = "";
			for (int i = 0; i < length - 3; i++)
				app += sBuff[i];
			StopApp(app, "resFile\\StopApp.txt");
			fileSend = "resFile\\StopApp.txt";
		}
	}
	else if (sBuff[length - 1] == '6') {
		if (sBuff[length - 2] != '6') {
			save_his += "Start/Stop Webcam";
			int time = stoi((string)sBuff);
			string recordName = getDateTime();
			recordVideo(time, recordName);
			fileSend = recordName;
		}
	}
	else if (sBuff[length - 1] == '8') {
		if (sBuff[length - 2] == '8') {
			save_his += "Delete File";
			string path = "";
			for (int i = 0; i < length - 3; i++)
				path += sBuff[i];
			deleteFile(path);
			fileSend = "resFile\\DeleteFile.txt";
		}
		else {
			save_his += "Take file";
			string path = "";
			for (int i = 0; i < length - 2; i++)
				path += sBuff[i];
			fileSend = path;
		}
	}

	else if (sBuff[length - 1] == '9') {
		if (sBuff[length - 2] == '9') {
			save_his += "Move File";
			MoveFilez(sBuff, length);
			fileSend = "resFile\\MoveFile.txt";
		}
		else {
			save_his += "Copy File";
			CopyFileZ(sBuff, length);
			fileSend = "resFile\\CopyFile.txt";
		}
	}
	save_his += ";" + (string)sBuff + ";" + get_current_time_and_date();
	add_to_start("history.txt", save_his);
	int nSend = send(nClient, fileSend.c_str(), strlen(sBuff), 0);
	if (nSend < 0) {
		//cout << "cant respone" << endl;
	}
	//dieu chinh file gui
	const char* filehandle = fileSend.c_str();
	sendfile(nClient, filehandle);
	closesocket(nClient);
	return 0;
}