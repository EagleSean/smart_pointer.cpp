#include "counter.h"

template <class T>
class SmartPointer
{
public:
	SmartPointer(T * data)
	{
		pt = data;
		pc = new counter(1);
	}

	SmartPointer(SmartPointer & s)
	{
		pt=s.GetT();
		pc=s.GetCounter();
		(*pc)++;
	}

	~SmartPointer()
	{
		if(!pc->Cut())
		{
			cout<<"delete T * pt..."<<endl;
			delete pc;
			cout<<"delete counter * pc"<<endl;
			delete pt;
		}
	}

	T * GetT()
	{
		return pt;
	}

	counter * GetCounter()
	{
		return pc;
	}

private:
	T * pt;
	counter * pc;
};
