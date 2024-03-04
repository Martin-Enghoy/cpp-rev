// Header Files
#include <iostream>
using namespace std;

int main()
{
    // std::cout << "Hello, World" << std::endl;

    // Case-sensitive, can contain digits, no whitespace and special characters,
    float simpleInterest;
    int time, speed;
    char name;

    // Constant, immutable
    const float gravity = 9.8;

    // this is declaration of variable a
    int a;

    // this is initialisation of a
    a = 10;

    // this is definition = declaration + initialisation
    int b = 20;

    cout << "Hello World!" << endl;

    cout << "Number1" << endl;
    cout << "Number2" << endl;

    printf("This is the value of gravity %.2f\n", gravity);

    // Statements
    int num1{10};
    int num2{11};

    cout
        << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;

    return 0;
}