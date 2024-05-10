#include <iostream>
using namespace std;
class complex{
    public:
    float r,i;
    complex(float tr=0,float ti=0)
    {
        r=tr;
        i=ti;
    }
    complex add(complex c1,complex c2)
    {
        complex tp;
        tp.r=c1.r+c2.r;
        tp.i=c1.i+c2.i;
        return tp;
    }
};

int main()
{
    complex c1(5,6);
    cout<<"Complex No. 1 is :"<<c1.r<<"+"<<c1.i<<"i"<<endl;
    complex c2(7,1);
    cout<<"Complex No. 2 is :"<<c2.r<<"+"<<c2.i<<"i"<<endl;
    complex c;
    c=c.add(c1,c2);
    cout<<"Addition of Complex Numbers  is :"<<c.r<<"+"<<c.i<<"i"<<endl;
}
