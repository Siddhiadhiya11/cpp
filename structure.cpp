#include<iostream>
using namespace std;

struct person 
{
    char name[100];
    int age;
    float salary;
};

int main()
{
    person p1;
    cout <<" Enter person details " << endl;
    cout << " Enter person name : " << endl;
    cin >> p1.name ;
    cout << " enter age :"<< endl;
    cin >> p1.age;
    cout << " enter salary : "<<endl;
    cin >> p1.salary;
    return 0;
}