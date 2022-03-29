//! NOTES
// 1. Some time we have to specilize template for a particular data type.
// 2. we can specialize both "function" and "class" template.

// Problem: Add all the elements of a vector to a list

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

template <typename T>
T addAll(std::vector<T> v)
{
    T sum = 0;
    for (auto i : v)
    {
        sum += i;
    }
    return sum;
}

template <>
string addAll(std::vector<string> v)
{
    int count = 0;
    for (auto &&elem : v)
    {
        for (auto &&chr : elem)
        {
            count += chr;
        }
    }

    ostringstream Ostr;
    Ostr << count;
    string strCount = Ostr.str();
    return strCount;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    cout << addAll(v) << endl;

    vector<string> v1 = {"abc", "def", "ghi"};
    cout << addAll(v1) << endl;
}