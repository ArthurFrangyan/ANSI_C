#include <iostream>

using namespace std;

class c1
{
protected:
	int a[20][20];
	int n;
public:
	void xin();
};
void c1::xin()
{
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin>>a[i][j];
		}
	}
}
class derived:public c1
{
public:
	void f1();
};
void derived::f1()
{
	int x[20];
	for (int i = 0; i < n; ++i)
	{
		x[i] = 1;
		for (int j = 0; j < n; ++j)
		{
			if(a[i][j] % 2 == 0)
				x[i] *= a[i][j];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<x[i]<<", ";
	}
}
int main()
{
	derived ob;
	ob.xin();
	ob.f1();
}