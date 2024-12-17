#include "func.h"
using namespace System;
using namespace System::Windows;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::Drawing::Imaging;

void MarshalString(String^ s, string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}
string get_current_time_and_date() {
	std::time_t now = std::time(nullptr);
	char buffer[100];
	struct tm timeInfo;
	if (localtime_s(&timeInfo, &now) == 0) {
		if (std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &timeInfo)) {
			return std::string(buffer);
		}
	}
	return "";
}
void openWebcam(int sec) {
	cv::Mat myImage;//Declaring a matrix to load the frames//
	cv::namedWindow("Video Player");//Declaring the video to show the video//
	cv::VideoCapture cap(0);//Declaring an object to capture stream of frames from default camera//
	if (!cap.isOpened()) { //This section prompt an error message if no video stream is found//
		//cout << "No video stream detected" << endl;
		system("pause");
		return;
	}
	int total = 0;
	while (true) {
		//Taking an everlasting loop to show the video//
		cap >> myImage;
		if (myImage.empty()) { //Breaking the loop if no video frame is detected//
			break;
		}
		imshow("Video Player", myImage);//Showing the video//
		//
		char c = (char)cv::waitKey(25);//Allowing 25 milliseconds frame processing time and initiating break condition//
		if (c == 27) { //If 'Esc' is entered break the loop//
			screenshot();
			break;
		}
		total += 25;
		if (total >= sec * 1000) {
			screenshot();
			break;
		}
	}
	cap.release();//Releasing the buffer memory//
	return;
}
void ShutDown() {
	const char* command = "powershell -Command \"Stop-Computer -Force\"";
	int result = system(command);
}
void ListApp() {
	const char* command = "powershell -Command \"Get-ItemProperty HKLM:\\Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\* | Select-Object DisplayName, DisplayVersion, Publisher, InstallDate | Format-Table –AutoSize > D:\\ListApp.txt\"";
	int result = system(command);
}
void screenshot() {
	Screen^ r = System::Windows::Forms::Screen::PrimaryScreen;
	int width = r->Bounds.Width;
	int height = r->Bounds.Height;

	Bitmap^ bmp = gcnew Bitmap(width, height, PixelFormat::Format32bppArgb);
	Graphics^ screen = Graphics::FromImage(bmp);
	screen->CopyFromScreen(0, 0, 0, 0, Size(width, height), CopyPixelOperation::SourceCopy);
	bmp->Save("screenshot.bmp");
}
//void InitGDIPlus() {
//	Gdiplus::GdiplusStartupInput gdiplusStartupInput;
//	ULONG_PTR gdiplusToken;
//	Gdiplus::GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);
//}
//bool SaveBitmapAsPNG(HBITMAP hBitmap, const WCHAR* filePath) {
//	Gdiplus::Bitmap bmp(hBitmap, NULL);
//	CLSID pngClsid;
//	Gdiplus::Status status = Gdiplus::Ok;
//	CLSIDFromString(L"{557CF406-1A04-11D3-9A73-0000F81EF32E}", &pngClsid);
//	status = bmp.Save(filePath, &pngClsid, NULL);
//	return status == Gdiplus::Ok;
//}
//HBITMAP CaptureScreen() {
//	HDC hdcScreen = GetDC(NULL);
//	int screenWidth = GetSystemMetrics(SM_CXSCREEN);
//	int screenHeight = GetSystemMetrics(SM_CYSCREEN);
//	HDC hdcMemory = CreateCompatibleDC(hdcScreen);
//	HBITMAP hBitmap = CreateCompatibleBitmap(hdcScreen, screenWidth, screenHeight);
//	SelectObject(hdcMemory, hBitmap);
//	BitBlt(hdcMemory, 0, 0, screenWidth, screenHeight, hdcScreen, 0, 0, SRCCOPY);
//	DeleteDC(hdcMemory);
//	ReleaseDC(NULL, hdcScreen);
//	return hBitmap;
//}
//void Screenshot() {
//	InitGDIPlus();
//	HBITMAP hBitmap = CaptureScreen();
//	if (SaveBitmapAsPNG(hBitmap, L"D:\\chaymanhinh2.png")) {
//		//cout << "Screenshot saved successfully!" << endl;
//	}
//	else {
//		//cout << "Failed to save screenshot." << endl;
//	}
//	DeleteObject(hBitmap);
//}
void add_to_start(const std::string& path, const std::string& s) {
	// Open the file in read mode to load its content
	std::ifstream inputFile(path);
	if (!inputFile.is_open()) {
		std::cerr << "Error: Unable to open file " << path << std::endl;
		return;
	}

	// Read the entire content of the file
	std::stringstream buffer;
	buffer << inputFile.rdbuf();
	std::string fileContent = buffer.str();

	inputFile.close();

	// Open the file in write mode to overwrite its content
	std::ofstream outputFile(path);
	if (!outputFile.is_open()) {
		std::cerr << "Error: Unable to open file " << path << std::endl;
		return;
	}

	// Write the new line followed by the original content
	outputFile << s << std::endl;
	outputFile << fileContent;

	outputFile.close();
}
void ListService() {
	string command = "powershell -Command \"Get-Service | Out-File -FilePath D:/ListService2.txt\"";
	int result = system(command.c_str());
}
void Sleep() {
	string command = "powershell -command \"Start-Sleep 1; Add-Type -AssemblyName System.Windows.Forms; [System.Windows.Forms.Application]::SetSuspendState('Suspend', $false, $false)\"";
	int result = system(command.c_str());
}
void StartApp(const string& app) {
	string command = "powershell -command \"Start-Process '" + app + "'\"";
	int result = system(command.c_str());
}
vector<string> tokenize(string s, string del) {
	vector<string> alo;
	int start, end = -1 * del.size();
	do {
		start = end + del.size();
		end = s.find(del, start);
		alo.push_back(s.substr(start, end - start));
	} while (end != -1);
	return alo;
}
void MoveFilez(char sBuff[], int length) {
	string app = "";
	for (int i = 0; i < length - 3; i++)
		app += sBuff[i];
	vector<string> moveF = tokenize(app, "__");
	int res = rename(moveF[0].c_str(), moveF[1].c_str());
}
void CopyFileZ(char sBuff[], int length) {
	string app = "";
	for (int i = 0; i < length - 2; i++)
		app += sBuff[i];
	vector<string> CopyF = tokenize(app, "__");
	int res = CopyFileA(CopyF[0].c_str(), CopyF[1].c_str(), 0);
}
void StopApp(const string& app, const string& file) {
	ofstream output(file);
	string command = "taskkill /IM " + app + ".exe /F> nul 2>&1";
	int result = system(command.c_str());
	if (result != 0) {
		output << "Failed to start the application,check the application opened" << endl;
	}
	else {
		output << "The application has been stopped";
	}
	output.close();
}
vector<std::string> readFileToVector(const string& filename) {
	vector<string> lines;
	ifstream file(filename);
	string line;
	if (file.is_open()) {
		while (getline(file, line)) {
			lines.push_back(line);
		}
		file.close();
	}
	else {
		//cout << "Error: Could not open the file." << std::endl;
	}
	return lines;
}
void deleteFile(const std::string& filePath) {
	struct stat buffer;

	// Check if the file exists
	if (stat(filePath.c_str(), &buffer) == 0) {
		// File exists, attempt to delete it
		if (remove(filePath.c_str()) == 0) {
			cout << "File deleted successfully." << endl;
		}
		else {
			cout << "Cannot delete the file." << endl;
		}
	}
	else {
		cout << "File doesn't exist." << endl;
	}
}
void startService(const wstring& serviceName) {
	// Open a handle to the service control manager
	SC_HANDLE hSCManager = OpenSCManager(nullptr, nullptr, SC_MANAGER_CONNECT);
	if (!hSCManager) {
		cerr << "OpenSCManager failed with error: " << GetLastError() << endl;
		return;
	}

	// Open a handle to the service
	SC_HANDLE hService = OpenService(hSCManager, serviceName.c_str(), SERVICE_START);
	if (!hService) {
		cerr << "OpenService failed with error: " << GetLastError() << endl;
		CloseServiceHandle(hSCManager);
		return;
	}
	// Start the service
	if (!StartService(hService, 0, nullptr)) {
		cerr << "StartService failed with error: " << GetLastError() << endl;
	}
	else {
		wcout << L"Service " << serviceName << L" started successfully." << endl;
	}

	CloseServiceHandle(hService);
	CloseServiceHandle(hSCManager);
}
void stopService(const wstring& serviceName) {
	// Open a handle to the service control manager
	SC_HANDLE hSCManager = OpenSCManager(nullptr, nullptr, SC_MANAGER_CONNECT);
	if (!hSCManager) {
		cerr << "OpenSCManager failed with error: " << GetLastError() << endl;
		return;
	}

	// Open a handle to the service
	SC_HANDLE hService = OpenService(hSCManager, serviceName.c_str(), SERVICE_STOP);
	if (!hService) {
		cerr << "OpenService failed with error: " << GetLastError() << endl;
		CloseServiceHandle(hSCManager);
		return;
	}

	// Stop the service
	SERVICE_STATUS status;
	if (!ControlService(hService, SERVICE_CONTROL_STOP, &status)) {
		cerr << "ControlService failed with error: " << GetLastError() << endl;
	}
	else {
		wcout << L"Service " << serviceName << L" stopped successfully." << endl;
	}

	CloseServiceHandle(hService);
	CloseServiceHandle(hSCManager);
}
void recordVideo(int duration, const std::string& filename) {
	using namespace cv;
	// Open the default camera (Camera ID 0)
	cv::VideoCapture cap(0);
	if (!cap.isOpened()) {
		cerr << "Error: Cannot access the camera." << endl;
		return;
	}

	// Get the camera frame width and height
	int frameWidth = static_cast<int>(cap.get(cv::CAP_PROP_FRAME_WIDTH));
	int frameHeight = static_cast<int>(cap.get(cv::CAP_PROP_FRAME_HEIGHT));

	// Define the codec and create VideoWriter object
	// Use 'mp4v' codec for .mp4 files
	cv::VideoWriter writer(
		filename,
		cv::VideoWriter::fourcc('m', 'p', '4', 'v'), // Codec
		30.0,                                    // FPS
		cv::Size(frameWidth, frameHeight)            // Frame size
	);

	if (!writer.isOpened()) {
		cerr << "Error: Cannot create video writer." << endl;
		return;
	}

	cout << "Recording for " << duration << " seconds..." << endl;

	// Record for the given duration
	auto startTime = chrono::steady_clock::now();
	while (true) {
		cv::Mat frame;
		cap >> frame; // Capture a frame

		if (frame.empty()) {
			cerr << "Error: Blank frame grabbed!" << endl;
			break;
		}

		writer.write(frame); // Write the frame to the file

		// Break after the specified duration
		auto elapsed = chrono::steady_clock::now() - startTime;
		if (chrono::duration_cast<chrono::seconds>(elapsed).count() >= duration) {
			break;
		}

		//Display the frame
		imshow("Recording", frame);
		if (cv::waitKey(1) == 27) break; // Stop recording if Esc is pressed
	}

	cout << "Recording complete. Video saved to " << filename << endl;

	cap.release();
	writer.release();
}

string getDateTime() {
	// Get the current time
	time_t now = time(nullptr);
	tm* localTime = localtime(&now);

	ostringstream oss;
	oss << "Camera_record_" << put_time(localTime, "%Y-%m-%d_%H%M%S") << ".mp4";
	return oss.str();
}
