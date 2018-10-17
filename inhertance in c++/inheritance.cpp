#include<iostream>
using namespace std;
class student
{
private:
	int roll_no;
protected:
	char subject;
public:
	void get_roll_no()
	{
		cin>>roll_no;
	}
	void show_roll_no()
	{
		cout<<roll_no;
	}
};
class result:public student
{
private:
	int marks[3];
public:
	void get_data;
	int total();
	void display()
	{
		show_roll_no();
		cout<<"subject"<<sub;
		cout<<"total marks"<<total;
	}

};
void result::get_data()
{
	get_roll_no();
	cin.getline(sub,10);
	for(int i=0;i<3;i++)
	{
		cin>>marks[i];
	}
	int result::total()
	{
		int t=0;
		for(int i=0;i<3;i++)
		{
			t+=marks[3];
		}
		return t;
	}
}
int main()
{
	result r;
	r.getdata();
	r.display();
	r.get_roll_no();
	r.roll_no=99;
	return 0;
}