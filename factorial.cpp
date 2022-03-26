#include<iostream>
using namespace std;

int fact(int num);

    int i = 1, fact = 1;
    for (i = 1 ; i<=num ;)
    {
        fact = fact * i;
        i++;
    }
    int main ()
    {
        int num ;
        cout << " Enter a number :";
        cin >> num;
        cout << "The factorial value of number : " << fact(num);
        return 0;
    }
