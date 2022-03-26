#include<iostream>
using namespace std;
int main()
{
   //datatype  *pointer_name;
   int *ptr;
   int a = 5;
   ptr = &a;
   cout << "value of variable a :" << a << endl;
   cout << "value of pointer :" << ptr << endl;
   cout << " value of address store in pointer:" << *ptr << endl;
   return 0;
}