#include <iostream> 
#include <string>
using namespace std;
class CSolid
{
    public:
    virtual void s(){};
    virtual void v(){};
};
class CCube:public CSolid//正方体
{
    public:
    int a;
    void s()
    {
        int s2 = 6*a*a;
        cout<<"面积："<<s2<<",";
    };
    void v()
    {
        int v2 = a*a*a;
        cout<<"体积："<<v2<<","<<endl;
    };
};
class CBall:public CSolid//球体
{
    public:
    int r;
    int pai = 3.14;
    void s()
    {
        int s2 = 4*pai*r*r;
        cout<<"面积："<<s2<<",";
    };
    void v()
    {
        int v2 = (4*pai*r*r*r)/3;
        cout<<"体积："<<v2<<","<<endl;
    };
};
class CCylinder:public CSolid//圆柱体
{
    public:
    int r,h;
    int pai = 3.14;
    void s()
    {
        int s2 = 2*pai*r*r + 2*pai*r*h;
        cout<<"面积："<<s2<<",";
    };
    void v()
    {
        int v2 = pai*r*r*h;
        cout<<"体积："<<v2<<","<<endl;
    };
};
int main()
{
    CSolid x;
    CSolid* p;
    CCube cube;
    cube.a = 1;
    p =  &cube;
    cout<<"正方体";
    p->s();
    p->v();
    CBall ball;
    ball.r = 1;
    p = &ball;
    cout<<"球体";
    p->s();
    p->v();
    CCylinder cylinder;
    cylinder.r = 1;
    cylinder.h = 1;
    p = &cylinder;
    cout<<"圆柱体";
    p->s();
    p->v();
    return 0;
}
