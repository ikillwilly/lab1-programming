#include <iostream>
#include <string>
using namespace std;

auto square(int x) -> int { return x * x; }

unsigned long long factorial(int n) {
    if (n < 0) return 0;
    if (n == 0 || n == 1) return 1;
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
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

    int num = 5;
    auto fact = factorial(num);
    cout << "Факториал " << num << "! = " << fact << endl;
}