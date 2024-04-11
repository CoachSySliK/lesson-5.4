#include <iostream>

using namespace std;

int main()
{
    int weight1, weight2, weight3, weight4;

    cout << "Весовой контроль!\n";
    cout << "Введите массу автомобилей:\n";
    cin >> weight1 >> weight2 >> weight3 >> weight4;

    if (weight1 > 1200 || weight2 > 1200 || weight3 > 1200 || weight4 > 1200) {
        cout << endl << "Один из автомобилей перегружен!\n";
    }
    else {
        cout << "Счастливого пути!";
    }

    return 0;
}
