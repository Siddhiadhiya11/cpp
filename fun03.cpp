#include<iostream>
using namespace std;

int great(int a , int b)
{
    if (a>b)
        return a; // cout << a << "is greater";
    else 
        return b; // cout << b << " is greater ";
}

int main ()
{
    int x , y ;
    cout << " Enter two different numbers : ";
    cin >> x >> y;
    
    int c = great(56, 78);
    cout << c << " is greater ";
    return 0;
}