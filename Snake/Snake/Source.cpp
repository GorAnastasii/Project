#include <iostream>
#include <random>
#include <conio.h>

using namespace std;

struct snakePart {
  int x, y;
  snakePart* next;
  snakePart* prev;
};

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
	
	// init snake
	  snakePart snake;
	  snakePart* snakeHead = &snake;

	  snake.x = rand() % fieldWidth;
	  snake.y = rand() % fieldHeight;
	  snake.next = NULL;
	  snake.prev = NULL;

	  bool alive = true;
	  char symbol; 
	  int currentLength = 0;
	
	while (alive) {
	    snakeXprev = snake.x;
	    snakeYprev = snake.y;

	    symbol = _getch();
	    if ((symbol == 'w') or (symbol == 'W')) {
	      snake.y -= 1;
	      if (snake.y < 0) snake.y = fieldHeight - 1;
	    }
	    if ((symbol == 's') or (symbol == 'S')) {
	      snake.y = (snake.y + 1) % fieldHeight;
	    }
	    if ((symbol == 'a') or (symbol == 'A')) {
	      snake.x -= 1;
	      if (snake.x < 0) snake.x = fieldWidth - 1;
	    }
	    if ((symbol == 'd') or (symbol == 'D')) {
	      snake.x = (snake.x + 1) % fieldWidth;
	    }
	}

	return 0;
}
