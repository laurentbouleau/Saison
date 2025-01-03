// C :
#include <io.h>
#include <fcntl.h>
#include <stdio.h>
// C++
#include <windows.h>
#include <cassert>
//#include <cstddef>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
//#include <stdio.h>
#include <locale>
#include <algorithm>
#include <codecvt>
#//include <tuple>
#include <optional>
#include <list>

#include <filesystem> // C++17 standard header file name

using namespace std;
//namespace fs = std::filesystem;

HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
DWORD dwMode = 0;
CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
int X;


void init()
{
	dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
	GetConsoleScreenBufferInfo(hOut, &csbiInfo);
	_wsetlocale(LC_ALL, L"fr");
	//std::locale("fr_FR.utf8");
	X = csbiInfo.srWindow.Right + 1;
	//
}

int wmain(int argc, wchar_t* argv[])
{
	const std::vector<std::wstring> keyColor{ L"\x1b[94;1m", L"\x1b[38;2;0;255;0m", L"\x1b[38;2;255;0;0m", L"\x1b[38;2;255;255;0m", L"\x1b[38;2;200;200;0m"}; // Bleu, Vert, Rouge, Jaune
	const std::wstring valuesColor{ L"\x1b[38;2;255;255;255m" }; // Blanc

	init();
	//hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hOut == INVALID_HANDLE_VALUE)
	{
		return GetLastError();
	}
	//    DWORD dwMode = 0;
	if (!GetConsoleMode(hOut, &dwMode))
	{
		return GetLastError();
	}
	dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
	if (!SetConsoleMode(hOut, dwMode))
	{
		return GetLastError();
	}

	//    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
	GetConsoleScreenBufferInfo(hOut, &csbiInfo);

	//std::wstring t;
	std::list<std::wstring> racines = { L"e:\\Séries.[]\\+++++\\" };

	//std::filesystem::path filePath(p);

	//int i = 0;
	while (racines.size() < 0)
	{
		//racine = racines[0];
		//for()
		std::wcout << L"===> ok !!!" << std::endl;
	    //i++;

	}

	std::wcout << keyColor[4] << L"Ok !!!" << valuesColor << std::endl;

	return EXIT_SUCCESS;
}