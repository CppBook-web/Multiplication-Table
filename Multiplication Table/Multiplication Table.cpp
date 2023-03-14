//Таблица умножения
#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");

    std::cout << "\n\t\t\tТАБЛИЦА УМНОЖЕНИЯ\n";

    int row = 10; //ряды
    int col = 10; //столбцы

    for (int i = 1; i <= row; i++) {
        std::cout << "\n\n\t";
        for (int j = 1; j <= col; j++) {
            int mul = i * j;
            std::cout << mul << "\t";
        }
    }

    std::cout << std::endl;

    return 0;
}