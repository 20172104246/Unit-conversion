// Unit conversion.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CLength
{
private:
	double inches;
	int feet;
public:
	CLength()
	{
		inches = 0;
		feet = 0;
	}
	void setlength(int a, int b)
	{
		inches = a;
		feet = b;
	}
	void display()
	{
		cout << "feet=" << feet << "    inches=" << inches << endl;
	}
	CLength(CLength& t)
	{
		feet = t.feet;
		inches = t.inches;
		cout << feet << "  " << inches << endl;
	}
	void func(double meter)
	{
		feet = (meter / 0.3048);
		inches = ((meter / 0.3048) - feet) * 12;
		cout << "feet=" << feet << "  inches=" << inches << endl;
	}
	void unplay(int o, double p)
	{
		feet = feet + o;
		if (inches + p > 12)
		{
			feet = feet + 1;
			inches = (inches + p) - 12;
		}
		else
		{
			feet = feet + o;
			inches = inches + p;
		}
		cout << "feet=" << feet << "  inches=" << inches << endl;
	}
};
int main()
{
	CLength kobe;
	kobe.display();
	int d;
	/*cin >> d;*/
	int q, w;
	cin >> q >> w;
	kobe.setlength(10, 10);
	/*kobe.display();*/
	/*kobe.func(d);*/
	kobe.unplay(q, w);
	CLength tulas(kobe);
	/*tulas.display();
	/*tulas.func(d);*/
	tulas.unplay(q, w);
	return 0;
}
