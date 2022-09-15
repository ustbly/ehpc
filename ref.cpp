#include <iostream>
using namespace std;

int main()
{
	int i;
	double d;

	int& r = i;
	double& s = d;

	i = 5;
	cout << "Value of i : " << i << endl;
	cout << "Value of i ref : " << r << endl;

	d = 11.5;
	cout << "Value of d : " << d << endl;
	cout << "Value of d ref : " << s <<  endl;
	
	return 0;
}
