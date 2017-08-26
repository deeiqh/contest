#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	/*
	unsigned int n, k, t, n_;
	while(cin >> n >> k){
		t = 0;
		n_= n;		
		while(n_ >= k){
			n_ = n_- k+1;
			t += k;
		}
		t += n_;
		cout << t << '\n';
	}
	*/
	unsigned long long int n, k, t, div;
	while(cin >> n >> k){	
		if(n < k)
			cout << n << '\n';
		else{
			div = n/(k-1);
			if(n == (k-1) * (div))
				cout << n - (div-1)*(k-1) + (div-1)*(k)	<< '\n';
			else
				cout << n - (div)*(k-1) + (div)*(k)	<< '\n';
		}
	}

	return 0;
}