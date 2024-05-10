#include<iostream>
using namespace std;
class clock
{
    int h,m,s;
    public:
           void get()
           {
            cout<<"\n Enter hour part::";
            cin>>h;
            cout<<"\n Enter minute part::";
            cin>>m;
            cout<<"\n Enter second part::";
            cin>>s;
           }
           void disp()
           {
            cout<<h<<":"<<m<<":"<<s<<"\n";
           }
           void sum(clock,clock);
};
void clock::sum(clock c1,clock c2)
{
    h=c1.h+c2.h;
    m=c1.m+c2.m;
    s=c1.s+c2.s;
}
int main()
{
    clock c1,c2,c3;
    cout<<"Enter 1st time: \n";
    c1.get();
    cout<<"Enter 2nd time: \n";
    c2.get();
    cout<<"\n First time is::";
    c1.disp();
    cout<<"\n Second time is::";
    c2.disp();
    c3.sum(c1,c2);
    cout<<"\n The sum of two time is::";
    c3.disp();
    return 0;
}