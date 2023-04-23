#include <iostream>
#include <ctime>
using namespace std;

int main() {
    system("chcp 65001");
    srand(time(nullptr));

    /*int SIZE = 5;
    int a[SIZE];

    int a1[]{1, 2, 3, 4, 5};

    for (size_t i = 0; i != SIZE; ++i) {
        cout << a1[i] << endl;
    }*/

    int SIZE_X = 5;
    int SIZE_Y = 5;

    int b[SIZE_X][SIZE_Y];

    for (size_t i = 0; i != SIZE_X; ++i) {
        for (size_t j = 0; j != SIZE_Y; ++j) {
            b[i][j] = rand() % 10;
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }

    int sum_main = 0;
    for (int i = 0; i < SIZE_X; i++) {
        sum_main += b[i][i];
    }
    cout << sum_main << endl;


    cout << "==============================" << endl;


    int x = 5;
    cout << "x: " << x << endl;
    cout << "адрес(x): " << &x << endl;

    int *px = &x;
    cout << "px: " << px << endl;
    cout << "px разыменованный: " << *px << endl;

    *px = 10;
    cout << "x: " << x << endl;
    cout << "адрес(x): " << &x << endl;


    cout << "==============================" << endl;


    int newArr[4] = {1, 2, 3, 4};
    cout << "МОЙ МАССИВ: " << newArr << endl;

    for (int i = 0; i != 4; i++) {
        cout << newArr[i] << "\t" << &newArr[i] << endl;
    }


    cout << "==============================" << endl;


    for (int i = 0; i != 4; ++i) {
        cout << newArr + i << "\t" << *(newArr + i) << endl;
    }


    cout << "==============================" << endl;


    int SIZE_D;

    cout << "Введите количество элементов в массиве: ";
    cin >> SIZE_D;
    int *arr = new int[SIZE_D];

    for (int i = 0; i != SIZE_D; i++) {
        *(arr + i) = rand() % 10;
        //cout << "Адрес: " << arr + i << "\tДанные: " << *(arr + i) << endl;
    }

    delete [] arr;

    return 0;
}

