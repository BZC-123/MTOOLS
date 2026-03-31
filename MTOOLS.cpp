#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
void con(WORD textcolor, WORD bgcolor) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hConsole == INVALID_HANDLE_VALUE) {
		std::cerr << "Error:" << GetLastError() << std::endl;
		return;
	}
	WORD colorAttr = static_cast<WORD>((bgcolor << 4) | textcolor);
	SetConsoleTextAttribute(hConsole, colorAttr);
}
int main() {
	char key;
	system("title MathTools");
	system("cls");
	system("color 17");
	std::cout << "\n\n\n\n\n\n";
	std::cout << "                 Math Tools\n                  Please switch to English mode..." << std::endl;
	std::cout << "                [Help] [Start]" << std::endl;
	while (true) {
		if (_kbhit()) {
			key = _getch();
			if (key == 115) {
				system("cls");
				con(0, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
				std::cout << "\n                ";
				con(FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN, FOREGROUND_BLUE);
				std::cout << "                    [";
				con(FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN, FOREGROUND_RED | FOREGROUND_INTENSITY);
				std::cout << "Esc";
				con(FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN, FOREGROUND_BLUE);
				std::cout << "]   Exit Menu" << std::endl;
				con(0, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
				std::cout << "      MENU      ██\n                ██" << std::endl;
				con(0, FOREGROUND_BLUE);
				std::cout << "  ████████████████" << std::endl;
				con(FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN, FOREGROUND_BLUE);
				std::cout << "\n  MathShell  [";
				con(FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN, FOREGROUND_RED | FOREGROUND_INTENSITY);
				std::cout << "T";
				con(FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN, FOREGROUND_BLUE);
				std::cout << "]" << std::endl;
				key = 0;
				while (true) {
					if (_kbhit()) {
						key = _getch();
						if (key == 116) {
							system("cls");
							key = 0;
							system("color 0A");
							std::string Input = "";
							std::cout << "MathShell 1.00 2026(c)" << std::endl;
							while (!(Input == "exit")) {
								std::cout << "C:\\";
								std::cin >> Input;
								if (Input == "exit") {
									Sleep(1000);
									std::cout << "MathShell is exit" << std::endl;
									system("color 17");
									system("cls");
									con(0, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
									std::cout << "\n                ";
									con(FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN, FOREGROUND_BLUE);
									std::cout << "                    [";
									con(FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN, FOREGROUND_RED | FOREGROUND_INTENSITY);
									std::cout << "Esc";
									con(FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN, FOREGROUND_BLUE);
									std::cout << "]   Exit Menu" << std::endl;
									con(0, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
									std::cout << "      MENU      ██\n                ██" << std::endl;
									con(0, FOREGROUND_BLUE);
									std::cout << "  ████████████████" << std::endl;
									con(FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN, FOREGROUND_BLUE);
									std::cout << "\n  MathShell  [";
									con(FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN, FOREGROUND_RED | FOREGROUND_INTENSITY);
									std::cout << "T";
									con(FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN, FOREGROUND_BLUE);
									std::cout << "]" << std::endl;
									Sleep(1000);
									break;
								}
								else if (Input == "cls") {
									int cs = 0;
									while (!(cs == 10)) {
										std::cout << "#";
										Sleep(1);
										cs++;
									}
									Sleep(1000);
									system("cls");
								}
								else if (Input == "help") {
									std::cout << "cls     Clear screen\nexit    Close the MathShell\nhelp    help message\nver     View version" << std::endl;
								}
								else if (Input == "ver") {
									std::cout << "MathShell 1.00 2026(c)  Alpha Shell 1.0 2026.3.14" << std::endl;
								}
								else {
									std::cout << "No command or file:" + Input << std::endl;
								}
							}
						}
						else if (key == 27) {
							system("cls");
							std::cout << "\n\n\n\n\n\n";
							std::cout << "                 Math Tools\n                  Please switch to English mode..." << std::endl;
							std::cout << "                [Help] [Start]" << std::endl;
							break;
						}
					}
				}
			}
		}
		Sleep(10);
	}
	return 0;
}
