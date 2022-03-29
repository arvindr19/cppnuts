#include<iostream>
using namespace std;

//1.
//deduce return type, first paratmeter is template
/* template <class RT, class T1, class T2>
RT getMax(T1 a, T2 b)
{
    return a > b ? a : b;
}

int main()
{
    cout << getMax<double>(10, 20) << endl;
    cout << getMax<double>(10.5, 20.5) << endl;
} */

//2.Using auto to deduce return type

/* template <class T1, class T2>
auto getMax(T1 a, T2 b)
{
    return a > b ? a : b;
}

int main()
{
    cout << getMax(10, 20) << endl;
    cout << getMax(10.5, 20.5) << endl;
} */

//C++ standard check
/* #include<iostream>

int main() {
    if (__cplusplus == 201703L) std::cout << "C++17\n";
    else if (__cplusplus == 201402L) std::cout << "C++14\n";
    else if (__cplusplus == 201103L) std::cout << "C++11\n";
    else if (__cplusplus == 199711L) std::cout << "C++98\n";
    else std::cout << "pre-standard C++\n";
} */

 //Overloading function template 
#include<iostream>
using namespace std;

int const& max(int const& a, int const& b)
{   
    cout << "max(int , int)\n";
    return a > b ? a : b;
}

template <class T>
T const& max(T const& a, T const &b)
{
    cout << "max(T ,T )\n";
    return a > b ? a : b;
}

template<class T>
T const& max(T const& a, T const& b, T const& c)
{
    cout << "max(T ,T , T )\n";
    return max(max(a, b), c);
}

int main()
{
    ::max(10.0, 20.0);
    ::max(10, 20);
    ::max('a', 'b');
    ::max<>(10, 20);
    ::max<double>(10, 20);
    ::max(10, 20, 30);
}
    