#include <iostream>
#include "myclasses.h"

using namespace std;

int main() {
    // Создаем переменную myClass типа класса MyClass, 
    // она будет автоматически удалена при завершении программы
    // И так лучше не создавать объекты !!!
    MyClass myClass; 
    
    cout << myClass.get_time() << endl;
    cout << myClass.getLastTime() << endl;
    cout << myClass.sum(12, 12) << endl;
    cout << myClass.sum(12.5, 12.5) << endl;
    //delete &myClass; // Нельзя так удалить автоматически созданный объект

    // Создаем переменную myClass2 через конструктор с параметром
    MyClass *myClass2 = new MyClass("TSN"); 
    cout << myClass2 -> getLastTime() << endl; // Теперь вместо точки нужно использовать ->
    delete myClass2; // Удаляем сами созданный нами объект
    
    MyClass2 myClass3; 
    cout << myClass.get_time() << endl; // Вызов метода предка
    myClass3.myPrint(); // Вызов собственного метода класса
    
    return 0;
}

