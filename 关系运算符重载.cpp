#include <iostream> 
#include <string>
using namespace std;
class circle;//先声明
class point
{
    friend int locate(const point &p,const circle &c);
    friend ostream& operator<<(ostream& out,const point &c);
    protected:
    int x,y;
    public:
    point(int a,int b)
    {
        x = a;
        y = b;
    };
};
class circle:public point
{
    friend int locate(const point &p,const circle &c);
    friend ostream& operator<<(ostream& out,const circle &c);
    public:
    int r;
    circle(int a,int b,int c):point(a,b)
    {
        r = c;
    };
};
int locate(const point &p,const circle &c)//判断点与圆位置关系
{
    int d = -c.r*c.r+p.x*p.x-2*p.x*c.x+c.x*c.x+p.y*p.y-2*p.y*c.y+c.y*c.y;
    return d;
};
ostream& operator<<(ostream& out,const circle &c)//<<运算符重载函数
{
    out<<"圆心为("<<c.x<<","<<c.y<<"),"<<"半径为"<<c.r<<"的圆"<<endl;
    return out;
};
ostream& operator<<(ostream& out,const point &c)
{
    out<<"("<<c.x<<","<<c.y<<")"<<endl;
    return out;
};
int operator>(const circle &a,const circle &b)//六个运算符重载函数
{
    if(a.r>b.r) return 1;
    else return 0;
};
int operator<(const circle &a,const circle &b)
{
    if(a.r<b.r) return 1;
    else return 0;
};
int operator>=(const circle &a,const circle &b)
{
    if(a.r>=b.r) return 1;
    else return 0;
};
int operator<=(const circle &a,const circle &b)
{
    if(a.r<=b.r) return 1;
    else return 0;
};
int operator==(const circle &a,const circle &b)
{
    if(a.r==b.r) return 1;
    else return 0;
};
int operator!=(const circle &a,const circle &b)
{
    if(a.r!=b.r) return 1;
    else return 0;
};
int main()
{
    circle c1(3,2,4),c2(4,5,5); 
    point p1(1,1),p2(3,-2),p3(7,3); 
    cout<<"圆 c1: "<<c1;
    cout<<"点 p1: "<<p1; 
    cout<<"点 p1 在圆c1之"<<((locate(p1, c1)>0)?"外":((locate(p1, c1)<0)?" 内":"上"))<<endl;
    cout<<"点 p2: "<<p2;
    cout<<"点 p2 在圆c1之"<<((locate(p2, c1)>0)?"外":((locate(p2, c1)<0)?" 内":"上"))<<endl;
    cout<<"点 p3: "<<p3;
    cout<<"点 p3 在圆c1之"<<((locate(p3, c1)>0)?"外":((locate(p3, c1)<0)?" 内":"上"))<<endl;
    cout<<endl;
    cout<<"圆 c1: "<<c1;
    if(c1>c2) cout<<"大于"<<endl;
    if(c1<c2) cout<<"小于"<<endl;
    if(c1>=c2) cout<<"大于等于"<<endl;
    if(c1<=c2) cout<<"小于等于"<<endl;
    if(c1==c2) cout<<"等于"<<endl;
    if(c1!=c2) cout<<"不等于"<<endl;
    cout<<"圆 c2: "<<c1;
    cout<<endl;
    return 0;
}
