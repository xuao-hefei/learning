#include <fstream>
#include <string>

using namespace std;
int main(int argc, char **argv)
{
	string filename("./1.S");

	ofstream out("./1.S", ofstream::app);
	out.close();
	return 0;
}
