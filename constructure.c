#include <iostream>

using namespace std;

class A
{
	public:
	A(const class A&){cout << "construct A 1\n" << endl;};
	A(const float f, const int g = 0){cout << "construct A 3\n" << endl;};
	A(){cout << "construct A 2" << "\n" << endl;};
	~A(){};

	int a = 2;
};

class B
{
	public:
		B(const class B&){cout << "construct B 1\n" << endl;}
		B(){cout << "construct B 2\n" << endl;};
		~B(){};
		class A b;
		int c = 3;
};


int main(int argc, char **argv)
{
	class A d = 4;
	class A f = d;
	class B e;
	//f = d;
	cout << "a=" << d.a << "c=" << e.c << endl;
	return 0;
}
