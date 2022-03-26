#include<iostream>
using namespace std;

inline void myfun(int a)
{
    if(a % 2 == 0)
         cout << a << " is a even number";
    else 
         cout << a << " is not a even number";
}

int main ()
{
    int x ;
    cout << " Enter a number: ";
    cin >> x;
    myfun(x);
    return 0;
}