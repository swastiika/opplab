//WAP to illustrate function overriding and its resolution.
#include<iostream>
#include<conio.h>
using namespace std;
class one 
{
    protected:
    int a;
    public:
    void input()
    {
        cout<<"enter the value of a"<<endl;
        cin>>a;
    }
};
class two:public one
{
private:
int b,s;
public:
void input()
{
    one::input();//overding resolving
    cout<<"enter the value of b"<<endl;
    cin>>b;

}
void add()
{
    s=a+b;

}
void display()
{
    cout<<"the sum is "<<s;
}
};
int main()
{
    two t1;
    t1.input();
    t1.add();
    t1.display();
    return 0;
    }