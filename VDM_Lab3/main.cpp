#include <cstdlib>
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string>

using namespace std;

int main() {
    int j;
    int array[5][5] = {//объявление двух мерного массива и его инициализация 
        {2, 1, 5, 4, 2},
        {5, 6, 4, 7, 5},
        {6, 2, 3, 4, 8},
        {2, 1, 1, 6, 4},
        {5, 6, 9, 7, 1}
    };
    std::printf("Исходный массив \n");
    /////////////////////////////////////
    for (int i = 0; i < 5; ++i) {//выводим исходный массив
        for (j = 0; j < 5; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << endl;
    }
    std::cout << endl;
    ///////////////////////////////////////
    int min = array[0][0]; //ищем минимальное число в массиве
    for (int i = 0; i < 5; ++i) {
        for (j = 0; j < 5; j++) {
            if (array[i][j] < min) {
                min = array[i][j];
            }
        }
    }
    ////////////////////////////////////////
    int position_i; //храним позицию минимального элемента
    for (int i = 0; i < 5; ++i) {//есть ли в первой строке минимальный элемент
        if (array[0][i] == min) {//если есть заменить на нули кроме минимального элемента
            std::cout << "В первой строке есть минимальный элемент \n";
            position_i = i;
        }

    }
    for (int i = position_i; i < 5; ++i) {//заменяем число на 0 кроме минимального
        if (array[0][i] != min) {
            array[0][i] = 0;
        }
    }
    //////////////////////////////////////////
    for (int i = 0; i < 5; ++i) {//выводим измененный массив
        for (j = 0; j < 5; ++j) {
            std::cout << array[i][j] << " ";
        }
        std::cout << endl;
    }
    return 0;
}

