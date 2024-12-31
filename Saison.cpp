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

#include <filesystem> // C++17 standard header file name

int wmain(int argc, wchar_t* argv[])
{
	const std::vector<std::wstring> keyColor{ L"\x1b[94;1m", L"\x1b[38;2;0;255;0m", L"\x1b[38;2;255;0;0m", L"\x1b[38;2;255;255;0m", L"\x1b[38;2;200;200;0m"}; // Bleu, Vert, Rouge, Jaune
	const std::wstring valuesColor{ L"\x1b[38;2;255;255;255m" }; // Blanc

	std::wcout << keyColor[4] << L"Ok !!!" << valuesColor << std::endl;

	return EXIT_SUCCESS;
}