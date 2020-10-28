#include <vector>
#include <iostream>

using namespace std;
struct demo
{
	int a;
	int b;
};

int main(int argc, char **argv)
{
	vector<int> a(10);
	vector<struct demo> b(10);
	int i = 0;
	int k = 0;
	
	cout << a.size() << endl;
	cout << b.size() << endl;

	decltype(a.begin()) c = a.begin();
	decltype(b.begin()) f = b.begin();

	for(auto &d : a)
	{
		d = i++;
	}

	while (k < a.size())
	{
		k++;
		cout << *c++ << endl;
	}

	k = 0;
	for(auto &e : b)
	{
		e.a = i++;
	}

	b[10].a = i++;
	b[11].a = i++;
	while (k < b.size()+2)
	{
		k++;
		cout << (*f++).a << endl;
	}
	return 0;
}
