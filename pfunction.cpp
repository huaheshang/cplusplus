#include<iostream>
using namespace std;

class A
{
	public:
		virtual void f()const=0;
};
class B:public A
{
	public:
		void f()const
		{
			cout<<"B"<<endl;
		}
	protected:
		int b;
};
class C:public B
{
	void f()const
	{
		cout<<"C"<<endl;
	}
};
int main(void)
{
	A *pa;
	B bb;
	C cc;
	pa=&bb;
	pa->f();

	pa=&cc;
	pa->f();
	return 0;
}
