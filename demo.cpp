#include "pointer.h"

int ff(SmartPointer<int> s)
{
	SmartPointer<int> num(s);
}
int f()
{
	int * a = new int;
	*a = 22;
	SmartPointer<int> num(a);
	ff(num);
}

int main()
{
	f();

	cout<<"done. exit"<<endl;

	return 0;
}
