//Program to show how templates are used.

#include <iostream>
#include <conio.h>
using namespace std;

template <class X>
X big(X a, X b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << big(4.15f, 5.45f) << endl;
    cout << big(6, 9) << endl;
}
