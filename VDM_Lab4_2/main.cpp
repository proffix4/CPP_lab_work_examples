#include <cstdlib>
#include<iostream>
#include <string.h>

using namespace std;

struct anceta {//объявление структуры
    char FIO[30];
    char streat[20];
    int number_home;
    int age; //переменные структуры 
};

struct anceta vtip_99[10]; //инициализация структуры в квадратных скобочках мы передаем 
//сколько будет экземпляров структуры 

int main() {
    int n;
    int search_number;
    printf("Введите количество людей: ");
    scanf("%d", &n);
    printf("Введите людей: \n");
    for (int i = 0; i < n; ++i) {//циклом по очереди заполняем структуру 
        printf("Введите ФИО%d: ", i+1);
        scanf("%s", &vtip_99[i].FIO);
        printf("Введите улицу%d: ", i+1);
        scanf("%s", &vtip_99[i].streat);
        printf("Введите номер дома%d:", i+1);
        scanf("%d", &vtip_99[i].number_home);
        printf("Введите возраст%d: ", i+1);
        scanf("%d", &vtip_99[i].age);
    }
    int count = 0; //счетчик 
    printf("Введите дом, который вы хотите искать: ");
    scanf("%d", &search_number);

    cout << endl;
    for (int j = 0; j <= n; ++j) {//в цикле перебираем все записи структуры и проверяем условие 
        if (vtip_99[j].age < 12 && vtip_99[j].number_home == search_number) {//условие поиска 
            count += 1;
        }
    }
    cout << "Количество детей на одной улице младше 12 лет: " << count;

//    struct anceta anna;
//    strcpy(anna.FIO, "Anna");
//    anna.age = 20;
//    cout << anna.FIO << endl;
//    cout << anna.age;

    return 0;
}

