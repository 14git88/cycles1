#1
#include <iostream>

int main() {
    int a;
    std::cout << "Введи число: ";
    std::cin >> a;

    int sum = 0; 
    for (int i = a; i <= 500; i++) {
        sum = sum + i; 
    }

    std::cout << "Сумма от " << a << " до 500 = " << sum << std::endl;
    return 0;
}

#2
#include <iostream>

int main() {
    int x, y;
    std::cout << "Введи число x: ";
    std::cin >> x;
    std::cout << "Введи число y: ";
    std::cin >> y;

    int result = 1; 
    for (int i = 0; i < y; i++) {
        result = result * x; 
    }

    std::cout << x << " в степени " << y << " = " << result << std::endl;
    return 0;
}

#3
#include <iostream>

int main() {
    int sum = 0;
    for (int i = 1; i <= 1000; i++) {
        sum = sum + i; 
    }

    double sr = (double)sum / 1000; 

    std::cout << "Среднее арифм=" << sr << std::endl;
    return 0;
}

#4
#include <iostream>

int main() {
    int a;
    std::cout << "Введи число от 1 до 20: ";
    std::cin >> a;

    int proizv = 1; 
    for (int i = a; i <= 20; i++) {
        proizv = proizv * i;
    }

    std::cout << "Произведение=" << proizv << std::endl;
    return 0;
}