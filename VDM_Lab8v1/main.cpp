#include <iostream>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class MyClass {
public:
    //получение текущего времени
    std::string get_time() {
        time_t seconds = time(NULL);
        tm* timeinfo = localtime(&seconds);
        return asctime(timeinfo);
    }

    //пример метода с перезагрузкой
    double sum(double x, double y) {
        double d;
        d = x + y;
        return d;
    }

    //пример метода с перезагрузкой
    int sum(int x, int y) {
        int d;
        d = x + y;
        return d;
    }
};

int main() {
    MyClass myClass;
    cout << myClass.get_time() << endl;
    cout << myClass.sum(12, 12) << endl;
    cout << myClass.sum(12.5, 12.5) << endl;
    return 0;
}

