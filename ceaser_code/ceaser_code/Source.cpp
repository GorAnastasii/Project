#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int i = 0, j = 0, k, size = 0;
    char ABC[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    char msg[1000];
    cout << "������� ���������, ������� ����� ������������: " << endl;
    cin.ignore(cin.rdbuf()->in_avail());
    gets_s(msg);
    for (i = 0;; i++) {
        if (msg[i] == '\0')
            break;
        size++;
    }
    cout << "\n������� �����:" << endl;
    cin >> k;
    cout << endl;
    for (i = 0; i < size; i++)
    {
        if (i == ' ') msg[i] = ' ';
        else {
            for (j = 0; j <= 25; j++)
            {
                if (msg[i] == ABC[j])
                {
                    if (j + k > 25)
                        msg[i] = ABC[(j + k) - 25 - 1];
                    else
                        msg[i] = ABC[j + k];
                    break;
                }
            }
        }

    }
    cout << "���������� �������������� ���������: " << endl;
    cout << msg << endl;
    return 0;
}
