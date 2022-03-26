#include<iostream>
using namespace std;
int main()
{
    int size;
    int *ptr;

    cout << "Enter size of an array";
    cin >> size;

    ptr = new int [size];   //int ptr [size]
    cout << "Enter the value";
    for (int i = 0 ; i < size ; i++ )
    {
        cin >> ptr[i];
    
    }
    return 0;
}