#include <iostream>
#include <string>
using namespace std;
class complex
{
    friend complex operator+(const complex &a,const complex &b);
    friend complex operator-(const complex &a,const complex &b);
    friend complex operator*(const complex &a,const complex &b);
    friend complex operator/(const complex &a,const complex &b);
    friend istream& operator>>(istream &in,complex &a);
    friend ostream& operator<<(ostream &out,complex &a);
    private:
    int t;
    int f;
};
complex operator+(const complex &a,const complex &b)
{
    complex c;
    c.f = a.f + b.f;
    c.t = a.t + b.t;
    return c;
};
complex operator-(const complex &a,const complex &b)
{
    complex c;
    c.f = a.f - b.f;
    c.t = a.t - b.t;
    return c;
};
complex operator*(const complex &a,const complex &b)
{
    complex c;
    c.t = a.t * b.t - a.f * b.f;
    c.f = a.t * b.f + b.t * a.f;
    return c;
};
complex operator/(const complex &a,const complex &b)
{
    complex c;
    c.t = (a.t * b.t + a.f * b.f)/(b.t * b.t + b.f *b.f);
    c.f = (a.t * b.f - b.t * a.f)/(b.t * b.t + b.f *b.f);
    return c;
};
istream& operator>>(istream &in,complex &a)
{
    char sign = ' ';
    char i;
    a.f = 0;
    in>>a.t>>sign>>a.f>>i;
    if(a.f == 0 && sign != ' ')
    a.f = 1; 
    if(a.f != 0 && sign == '-')
    a.f = -a.f;
    return in;
};
ostream& operator<<(ostream &out,complex &a)
{
    if(a.t != 0)
    {
        out<<a.t;
        if(a.f == 1)
        out<<"+i"<<endl;
        else if(a.f > 0)
        out<<"+"<<a.f<<"i"<<endl;
        else if(a.f == 0);
        else
        out<<a.f<<"i"<<endl;
    }
    else 
    {
        if(a.f == 1)
        out<<"i"<<endl;
        else if(a.f == -1)
        out<<"-i"<<endl;
        else if(a.f == 0)
        out<<"0"<<endl;
        else
        out<<a.f<<"i"<<endl;
    }
    return out;
};
int main()
{
    complex c1,c2,c3;
    cout<<"c1: "<<endl;;
    cin>>c1;
    cout<<"c2: "<<endl;
    cin>>c2;
    cout<<"c1="<<c1<<endl;
    cout<<"c2="<<c2<<endl;
    c3=c1+c2;
    cout<<"c1+c2="<<c3<<endl;
    c3=c1-c2;
    cout<<"c1-c2="<<c3<<endl;
    c3=c1*c2;
    cout<<"c1*c2="<<c3<<endl;
    c3=c1/c2;
    cout<<"c1/c2="<<c3<<endl;
    return 0;  
}
