#1
#include <iostream>

int main() {
    int a;
    std::cout << "����� �����: ";
    std::cin >> a;

    int sum = 0; 
    for (int i = a; i <= 500; i++) {
        sum = sum + i; 
    }

    std::cout << "����� �� " << a << " �� 500 = " << sum << std::endl;
    return 0;
}

#2
#include <iostream>

int main() {
    int x, y;
    std::cout << "����� ����� x: ";
    std::cin >> x;
    std::cout << "����� ����� y: ";
    std::cin >> y;

    int result = 1; 
    for (int i = 0; i < y; i++) {
        result = result * x; 
    }

    std::cout << x << " � ������� " << y << " = " << result << std::endl;
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

    std::cout << "������� �����=" << sr << std::endl;
    return 0;
}

#4
#include <iostream>

int main() {
    int a;
    std::cout << "����� ����� �� 1 �� 20: ";
    std::cin >> a;

    int proizv = 1; 
    for (int i = a; i <= 20; i++) {
        proizv = proizv * i;
    }

    std::cout << "������������=" << proizv << std::endl;
    return 0;
}