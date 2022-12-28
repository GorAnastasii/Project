#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int x = 0, y = 0, turn = 0, pen = 1;

void printFloor(int[][20], int);
void turtleStep(int[][20], int);

void turtle()
{
    setlocale(LC_ALL, "Russian");
    const int n = 20, m = 20;
    int floor[n][m] = { 0 };
    char command;

    cout << "************************************************************************" << endl;
    cout << "               Игра - Черепашья Графика" << endl;
    cout << "  Команды (только с английской раскладкой!!!!)" << endl;
    cout << "z - Поднять перо(по умолчанию)" << endl << "x - Опустить перо" << endl;
    cout << "d - Шаг направо" << endl << "a - Шаг налево" << endl;
    cout << "w - Шаг вверх" << endl;
    cout << "s - Шаг вниз" << endl;
    cout << "q - Завершить игру" << endl;
    cout << "************************************************************************" << endl << endl;
    do
    {
        command = _getch();
        switch (command)
        {
        case 'z':
        {
            pen = 1;
            break;
        }
        case 'x':
        {
            pen = 2;
            break;
        }
        case 'd':
        {
            turn = 0;
            turtleStep(floor, n);
            system("cls");
            printFloor(floor, n);
            break;
        }
        case 'a':
        {
            turn = 2;
            turtleStep(floor, n);
            system("cls");
            printFloor(floor, n);
            break;
        }
        case 'w':
        {
            turn = 3;
            turtleStep(floor, n);
            system("cls");
            printFloor(floor, n);
            break;
        }
        case 's':
        {
            turn = 1;
            turtleStep(floor, n);
            system("cls");
            printFloor(floor, n);
            break;
        }
        case 'q':
        {
            break;
        }
        default:
        {
            cout << "Черепаха вас не понимает :(" << endl;
            break;
        }
        }
    } while (command != 'q');
    system("pause");
}


void turtleStep(int ground[][20], int a)
{
    switch (turn)
    {
    case 0:
        if (pen == 1)
            y++;
        else
        {
            ground[x][y]++;
            y++;
        }
        if (y > 19)
        {
            y--;
        }
        break;

    case 1:
        if (pen == 1)
            x = x + 1;
        else
        {
            ground[x][y]++;
            x++;
        }
        if (x > 19)
        {
            x--;
        }
        break;
    case 2:
        if (pen == 1)
            y--;
        else
        {
            ground[x][y]++;
            y--;
        }
        if (y < 0)
        {
            y++;
        }
        break;
    case 3:
        if (pen == 1)
            x--;
        else
        {
            ground[x][y]++;
            x--;
        }
        if (x < 0)
        {
            x++;
        }
        break;

    }
}


void printFloor(int arr[][20], int size)
{
    cout << "//////////////////////" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "/";
        for (int j = 0; j < size; j++)
        {
            if (x == i && y == j)
            {
                cout << "Ч";
                continue;
            }
            if (arr[i][j] > 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "/" << endl;
    }
    cout << "//////////////////////" << endl;

}