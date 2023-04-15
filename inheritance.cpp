#include <iostream> 
#include <string>
using namespace std;
class teacher
{
	public:
	string name;
	int age;
	string gender;//性别
	string address;
	string phone;
	string title;
	void display();
}; 
void teacher::display() 
{
	cout<<"姓名："<<teacher::name<<endl;
	cout<<"年龄："<<teacher::age<<endl;
	cout<<"性别："<<teacher::gender<<endl;
	cout<<"职称："<<teacher::title<<endl;
	cout<<"地址："<<teacher::address<<endl;
	cout<<"电话："<<teacher::phone<<endl;
};
class cadre
{
	public:
	string name;
	int age;
	string gender;//性别
	string address;
	string phone;
	string post;//职务
};
class teacher_cadre:public teacher,public cadre
{
	public:
	int wages;
	void show(); 
};
void teacher_cadre::show()
{
	teacher::display();
	cout<<"职务"<<cadre::post<<endl;
	cout<<"工资"<<wages<<endl;
};
int main()
{
	teacher_cadre t;
	cin>>t.teacher::name>>t.teacher::age>>t.teacher::gender>>t.teacher::title;
	cin>>t.cadre::post;
	getchar();
	getline(cin,t.teacher::address);
	cin>>t.teacher::phone>>t.wages;
	while(t.teacher::age < 0)
	{
		cout<<"年龄输入错误，请重新输入"<<endl;
		cin>>t.teacher::age; 
	}
	while(t.teacher::gender != "man" && t.teacher::gender != "woman")
	{
		cout<<"性别输入错误，请重新输入"<<endl;
		cin>>t.teacher::gender; 
	}
	t.show();
	return 0;
}
