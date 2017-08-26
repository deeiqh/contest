#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	unsigned int n, r;
	cin>>n;
	while( n != 0){
		r = sqrt(n);
		if(n == r*r)
			cout << "yes\n";
		else
			cout << "no\n";
		cin >> n;
	}

	return 0;
}