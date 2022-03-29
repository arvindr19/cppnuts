//! NOTES:
//1. There are two places where we can apply templates.
//      a. function template
//      b. class template
//2. Templates are the way to write generic code.
//3. The main point is we pass data type as template parameter to the function or class.

//Example: getMax function
#include <iostream>
using namespace std;

// template <class T> //VALID
template <typename T>
T getMax(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    cout << getMax(10, 20) << endl;
    cout << getMax(10.5, 20.5) << endl;
    cout << getMax('a', 'b') << endl;
    cout << getMax("Hello", "World") << endl;
}
