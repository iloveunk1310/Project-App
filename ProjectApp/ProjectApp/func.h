#pragma once
#ifndef _func_H_
#define _func_H_
#define _CRT_SECURE_NO_WARNINGS
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <windows.h>
#include <sys/stat.h>
#include <cstdio>
#include <tchar.h>
#include <iomanip>
//#include <gdiplus.h>
#include <string>
#include <vector>
#include <ctime>
#include <thread>
#include <chrono>
using namespace std;
using namespace System;
//#pragma comment (lib,"Gdiplus.lib")
#define PORT 9909
#define BUFFER_SIZE 1024
#pragma comment(lib, "Ws2_32.lib")
#pragma comment(lib, "Advapi32.lib")
//#pragma comment(lib, "C:\\Users\\Admin\\Documents\\librabries\\opencv\\build\\x64\\vc15\\lib\\opencv_world455.lib")
void ShutDown();
void ListApp();
//void InitGDIPlus();
//bool SaveBitmapAsPNG(HBITMAP hBitmap, const WCHAR* filePath);
//HBITMAP CaptureScreen();
void screenshot();
void ListService();
void StartApp(const string& app);
void Sleep();
vector<string> tokenize(string s, string del = " ");
void MoveFilez(char sBuff[], int length);
void CopyFileZ(char sBuff[], int length);
void StopApp(const string& app, const string& file);
int connet_and_send_file(sockaddr_in srv, int &lenh);
vector<std::string> readFileToVector(const string& filename);
void MarshalString(String^ s, string& os);
void deleteFile(const string& filePath);
void startService(const wstring& serviceName);
void stopService(const wstring& serviceName);
void openWebcam(int secs = 3);
void add_to_start(const std::string& path, const std::string& s);
string get_current_time_and_date();
void recordVideo(int duration, const std::string& filename);
string getDateTime();

#endif