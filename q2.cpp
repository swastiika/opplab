//WAP to convert meter to feet using class to class conversi
#include<iostream>
#include<conio.h>
using namespace std;
class meter;
class feet{
    private:
    float f;
    public:
    feet()
    {
        f=0.0;
    }
    feet(float f1)
    {
        f=f1;
    }
    void display()
    {
        cout<<"the equivalent feet is"<<f;

    }
};
class meter
{
    private:
    float m;
    public:
    void input()
    {
        cout<<"enter the value of meter"<<endl;
cin>>m;
    }
    operator feet()
    {
        float f1;
        f1=3.28*m;
        return f1;


    }

};
int main()
{
    meter m1;
    feet f1;
    m1.input();
    f1=m1;
    f1.display();
    return 0;
}
