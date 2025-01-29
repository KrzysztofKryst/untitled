#include <iostream>

int add_numbers(int a,int b) {
    int result;
    result = a + b;
    return result;
}

int main()
{
    std::cout << "Hello, World!" << std::endl;
    std::cout << "W 01 branch 2+3=" << add_numbers(2,3) << std::endl;
    return 0;
}
