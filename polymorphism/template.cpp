#include<iostream>
using namespace std;

template <typename A>
A myMax(A x , A y)
{
    return (x > y) ? x : y;

}
int main()
{
    cout << max<int>(3,7) << endl;
    cout << max<float>(3.0,7.0) << endl;
    cout << max<char>('g','s') << endl;

    return 0;

}