#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

void task1() {
    string a;
    char b;
    int s;
    s = 0;

    cout << "Введите строку: ";
    getline(cin, a);
    cout << "Введите символ для поиска: ";
    cin >> b;

    for (char ch : a) {
        if (ch == b) {
            s++;
        }
    }
    cout << s;
}

void task2() {
    srand(time(0));
    string seed = "abcdefghijklmnopqrstuvwxyz";
    string lList;
    int rd;
    for (int i = 0; i < 12; i++) {
        rd = rand() % 26;
        lList = lList + seed[rd];
    }
    cout << lList;
}


int main() {
    SetConsoleOutputCP(CP_UTF8);

    task2();

	return 0;
}