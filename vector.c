#include <vector>
#include <iostream>

using namespace std;
struct demo
{
	int a;
	int b;
	int c;
};

int main(int argc, char **argv)
{
	vector<int> a(10);
	vector<struct demo> b(10);
	int i = 0;
	int k = 0;
	
	cout << a.size() << endl;
	cout << b.size() << endl;

	vector<int>::iterator c = c.begin();

	for(int &d : b)
	{
		d = i++;
	}

	while (k < b.size())
	{
		cout << *c++ << endl;
	}
	return 0;
}
