#include <iostream>

using namespace std;

// consteval int get_value()
// {
//     return 3;
// }

/*

    1. Sequential, therefore, each subfunction should be above a certain function if needed to be used.

    (1)int (2)addNumbers((3)int first, int second) {
        int sum = first + second;

        return sum;
    }

    (1) return type
    (2) function name
    (3) parameters

*/

int addNumbers(int x, int y)
{
    int sum = x + y;

    return sum;
}

int main()
{
    // constexpr int value = get_value()

    int sum = addNumbers(5, 6);

    // Data goes from right to left, basically cout is the .exe file that runs on the cli
    cout << "Function Sum: " << sum << endl;
    cout << "Function Call Sum: " << addNumbers(30, 20) << endl;

    return 0;
}