#include<iostream>
using namespace std;
class base {
    public:
     int x;
    protected:
     int y ;
    private:
     int z;
};
class publicderived : public base{
    //x is public 
    // y is protected
    // z is private & not accessible in public derived class
};
class protected_derived : protected base {
    // x is public 
    // y is protected 
    // z is private and is not accessible
};
class private_derived:private base{
    // x is public 
    // y is protected
    // z is private
};
