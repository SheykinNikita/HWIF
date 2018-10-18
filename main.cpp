#include <iostream>

float bar1 (float a, char b, float c) {
    return a + b;
}
float bar2 (float a, char b, float c) {
    return a - b;
}
float bar3 (float a, char b, float c) {
    return a * b;
}
float bar4 (float a, char b, float c) {
    return a / b;
}
int main() {
float a;
float c;
char b;
std::cout << "First number";
std::cin >> a;
std::cout << "Second number";
std::cin >> c;
std::cout << "(+,-,*,/)";
std::cin >> b;
    if (b == '+') {
        std::cout << bar1(a, b, c) << '\n';
    }
    else
    if (b == '-') {
        std::cout << bar2(a, b, c) << '\n';
    }
    else
        if (b == '*') {
        std::cout << bar3(a, b, c) << '\n';
    }
    else
        if (b == '/') {
            std::cout << bar4(a, b, c) << '\n';
        }
    return 0;
}