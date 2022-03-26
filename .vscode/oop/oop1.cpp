#include<iostream>
using namespace std;
#include<string>

class myclass{
       private :
       string name;
       double price;

       public :
       void setdata (string n,double p)
       {
           name = n;
           price = p;
       }
       void showdata()
       {
          cout << "name = " << name << endl;
          cout << "Price = " << price << endl;
       }
};
int main()
{
    myclass b1;
    b1.setdata("Let us C",297.00);
    b1.showdata();
    return 0;
}