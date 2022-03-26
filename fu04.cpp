#include<iostream>
using namespace std;

int add(int a , int b , int c = 0, int d = 0)
{
    return(a+b+c+d);
}

int main ()
{
    cout << "addition of 1 & 2 in " << add(1,2) << endl;
    cout << "addition of 1,2 & 3 in "<< add(1,2,3) << endl;
    cout << "addition of 1, 2,3 & 4 in "<< add(1,2,3,4)<<endl;
    return 0;
}