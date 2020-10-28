#include <iostream>

using namespace std;

class A
{
	public:
	A(int i){a = 1;}
	A& test(int&& t){this->a=t;}
	void operator<<(ostream& o){o << "a=" << a << endl;}

	int a;
};
int main(int argc, char ** argv)
{

	A b(1);
	cout << b.a << endl;
	b.test(2);
	cout << b.a << endl;
	b << cout;
	return 0;
}
