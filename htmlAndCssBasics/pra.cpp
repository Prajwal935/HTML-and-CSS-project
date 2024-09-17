#include <iostream>
using namespace std;
int main()
{
    int a = 20;
    int b = 10;
    cout << a << " " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " " << b << endl;

    return 0;
}