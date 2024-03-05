#include <iostream>

using namespace std;

int main()
{

    int num1 = 15;         // Decimal
    int num2 = 017;        // Octal
    int num3 = 0x0f;       // Hexadecimal
    int num4 = 0b00001111; // Binary

    cout << "Hello World !" << endl;

    // All the same output
    cout << "Number 1 is " << num1 << endl;
    cout << "Number 2 is " << num2 << endl;
    cout << "Number 3 is " << num3 << endl;
    cout << "Number 4 is " << num4 << endl;

    signed int val1{10};
    signed int val2{-300};
    cout << "Val 1 is " << val1 << endl;
    cout << "Val 2 is " << val2 << endl;

    float frac1{1.12345678901234567890f};
    double frac2{1.12345678901234567890};
    long double frac3{1.12345678901234567890L};

    cout << "Float is " << frac1 << endl;
    cout << "Size of Float is " << sizeof(frac1) << endl;
    cout << "Double is " << frac2 << endl;
    cout << "Size of Double is " << sizeof(frac2) << endl;
    cout << "Long Double is " << frac3 << endl;
    cout << "Size of Long Double is " << sizeof(frac3) << endl;

    return 0;
}