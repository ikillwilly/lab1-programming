#include <iostream>
#include <string>
using namespace std;

auto square(int x) -> int {
    return x * x;
}

int main() {
    cout << "Hello, World!" << endl;
    string name = "Илья Полушин";
    cout << "Студент: " << name << endl;
    cout << "Дата: 25.10.2026" << endl;

    auto number{7};
    auto result = square(number);
    cout << "Число: " << number << endl;
    cout << "Квадрат: " << result << endl;
}