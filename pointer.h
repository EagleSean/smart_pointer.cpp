template <class T>
class SmartPointer
{
public:
	SmartPointer(T * t):pt(t){}
	T & operator *(){return *pt;}
	T * operator ->(){returnpt;}
private:
	T * pt;
}
