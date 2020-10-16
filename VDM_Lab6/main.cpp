#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct costume {
    char firm[30];
    int size;
    int cons;
    int price;
};

char firm[30];
int size;
int cons;
int price;

const int n = 3;

costume mas[n]; 

int main() {

    // Запись данных в файл
    ofstream f_out("costume.txt");
    for (int i = 0; i < n; i++) {//в цикле заполняем файл 
        cout << i + 1 << " фирма: "; cin >> firm; f_out << firm << endl;
        cout << "Размер:"; cin >> size; f_out << size << endl;
        cout << "Расход: ";  cin >> cons; f_out << cons << endl;
        cout << "Цена: ";  cin >> price; f_out << price << endl;
        cout << "\n";
    }
    f_out.close();

    // Чтение данных из файла
    ifstream f_in("costume.txt");
    for (int i = 0; i < n; i++) {//в цикле заполняем файл 
        f_in >> mas[i].firm; f_in >> mas[i].size;
        f_in >> mas[i].cons; f_in >> mas[i].price;
    }
    f_in.close();

    // Поиск фирмы с заданным названием
    cout << "\nВведите фирму: ";
    char a[100];
    scanf("%s", &a);
    for (int i = 0; i < n; i++) {
        if (strcmp(mas[i].firm, a) == 0) {
            cout << "Фирма: " << mas[i].firm << " Размер:"
                    << mas[i].size << " Расход:"
                    << mas[i].cons << " Цена: " << mas[i].price << endl;
        }
    }
}
