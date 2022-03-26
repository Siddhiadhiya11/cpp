#include <iostream>
using namespace std;
#include ‹string>
~ class myBooks
f
brivate:
// data members
string name;
string author;
int nop;
double price;
public:
// default constructor
myBooks()
cout << "Default constructor called" << endl;
// parameterized constructor
myBooks (string n, string a, int pn, double p)
{
cout <<
"parameterized constructor called" << endl;
name
= n;
author
= a;
nop = pn;
price = p;
// copy constructor
myBooks (myBooks &obj)
cout <<
"Copy constructor called" << endl:
name = obj.name;
author = obj.author;
nop = obj.nop;
price = obj.price;