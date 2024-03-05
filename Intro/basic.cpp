// Header Files
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // std::cout << "Hello, World" << std::endl;

    // Case-sensitive, can contain digits, no whitespace and special characters,
    float simpleInterest;
    int time, speed;

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

    // string name;
    // cout << "Please input your name: " << endl;
    // cin >> name;

    // cout << "Hello, " << name << endl;

    // string firstname, lastname;
    // cout << "Please input your First Name and Last Name: " << endl;
    // cin >> firstname >> lastname;

    // cout << "Hello, " << firstname << " " << lastname << endl;

    string fullname;

    cout << "Please input your Full Name: " << endl;
    getline(cin, fullname);

    cout
        << "Hello, " << fullname << endl;

    return 0;
}