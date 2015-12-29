#include <iostream>

using namespace std;

class counter
{
public:
	counter(int c)
	{
		Count=c;
		cout<<Count<<endl;
	}
	counter()
	{
		Count=1;
		cout<<Count<<endl;
	}
	counter operator++ (int)
	{
		counter tmp(*this);
		this->Count++;
		cout<<Count<<endl;
		return tmp;
	}
	bool Cut()
	{
		this->Count--;
		cout<<Count<<endl;
		return Check();
	}

private:
	int Count;

	bool Check()
	{
		if(Count>0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
