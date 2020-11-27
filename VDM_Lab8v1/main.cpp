#include <iostream>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class MyClass {
// Секция скрытых полей и методов
private:
    string lastTime; // Это поле класса

// Секция открытых полей и методов
public:

    // Конструктор по-умолчанию
    MyClass() {
    }

    // Деструктор по-умолчанию
    ~MyClass() {
        cout << "Прощай!" << endl;
    }    

    // Конструктор с параметром
    MyClass(string lastTime) {
        this->lastTime = lastTime;
    }

    // Публичный метод класса
    string getLastTime() {
        return ("LastTime: " + lastTime + "\n");
    }

    // Получение текущего времени
    string get_time() {
        time_t seconds = time(NULL);
        tm* timeinfo = localtime(&seconds);
        lastTime = asctime(timeinfo);
        return lastTime;
    }

    // Пример метода с перезагрузкой
    double sum(double x, double y) {
        double d;
        d = x + y;
        return d;
    }

    //Пример метода с перезагрузкой
    int sum(int x, int y) {
        int d;
        d = x + y;
        return d;
    }
};

// Сделаем новый класс на основе существующего
class MyClass2: public MyClass {
public:    
    // Добавим новый метод, к тем что есть у предка MyClass
    void myPrint() {
        cout << "Hello !" << endl;
    }
};

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

