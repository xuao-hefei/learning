#include <algorithm>
#include <numeric>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
	vector<int> vec = {1,2,3,4,5,6,7,8,9};

	auto it = find(vec.begin(), vec.end(), 4);

	cout << "find 4 at" << "*vec = " << *it << endl;

	replace(vec.begin()+3, vec.end(), 4, 40);

	cout << "find 4 at" << "*vec = " << *it << endl;
	return 0;
}
