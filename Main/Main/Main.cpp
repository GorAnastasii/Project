#include <iostream>
#include <Windows.h>
#include "Snake.h"
#include "Ceaser_code.h"
#include "Turtle.h"

using namespace std;
HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleTextAttribute(H, 2);

	bool loop = true;
	while (loop) {
		system("cls");
		int project;
		cout << "1 SNAKE\n2 CEASER CODE\n3 TURTLE\n4 EXIT" << endl;;
		cout << "Num: "; cin >> project;
		system("cls");
		switch (project) {
			case 1: snake();break;
			case 2: ceaser_code(); break;
			case 3: turtle(); break;
			case 4: loop = false; break;
		}
		system("pause");
	}


	return 0;
}