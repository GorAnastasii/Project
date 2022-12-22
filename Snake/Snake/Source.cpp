#include <iostream>
#include <random>
#include <conio.h>

using namespace std;

void printField(char** field, int fieldHeight, int fieldWidth) {
	for (int i = 0; i < fieldHeight; i++) {
		for (int j = 0; j < fieldWidth; j++) {
			cout << field[i][j];
		}
		cout << "|\n";
	}
	for (int j = 0; j < fieldWidth; j++) {
		cout << "-";
	}
}

void clearField(char **field, int fieldHeight, int fieldWidth) {
	for (int i = 0; i < fieldHeight; i++) {
		for (int j = 0; j < fieldWidth; j++) {
			field[i][j] = ' ';
		}
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	
	int fieldWidth, fieldHeight;

	do {
		system("cls");
		cout << "Введите ширину поля: ";
		cin >> fieldWidth;
		cout << "Введите высоту поля: ";
		cin >> fieldHeight;

	} while ((fieldWidth <= 2) or (fieldHeight <= 2));


	// create field
	char** field = new char* [fieldHeight];
	for (int i = 0; i < fieldHeight; i++) {
		field[i] = new char[fieldWidth];
	}

	clearField(field, fieldHeight, fieldWidth);

	system("cls");

	for (int i = 0; i < fieldHeight; i++) {
		for (int j = 0; j < fieldWidth; j++) {
			cout << field[i][j];
		}
		cout << endl;
	}
	
	return 0;
}
