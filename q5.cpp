// WAP to illustrate the invocation of constructor and destructor in multiple inheritance.
#include<iostream>
#include<conio.h>
using namespace std;
class two;
class one{
    public:
    one()
    {
        cout<<"constructor of base class one is callled"<<endl;
    }
    ~one()
    {
        cout<<"destructor of base class one is called"<<endl;
    }
};
class two{
    public:
    two()
    {
    cout<<"constructor of base class two is called"<<endl;
    }
    ~two()
    {
        cout<<"destructor of base class two is called"<<endl;
    }
};
class three: public one, public two
{
    public:
    three()
    {
        cout<<"constructor of derived class is called"<<endl;
    }
      ~three()
    {
        cout<<"destructor of derived class  is called"<<endl;
    }
};
int main()
{
    three t;
    return 0;
}