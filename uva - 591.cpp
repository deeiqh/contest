#include <iostream>

using namespace std;

int main()
{
	unsigned short n,h, suma, res, set;
	unsigned short arr[50];
	cin>>n;
	set = 0;
	while(n != 0){
		set++;
		suma = 0;
		res = 0;
		for(unsigned short i=0; i != n; i++){
			cin >> h;
			arr[i]=h;
			suma += h;
		}
		unsigned short int prom;
		int x;
		prom  = suma/n;
		for(unsigned short i=0; i != n; i++){
			x = arr[i]- prom;
			if(x < 0)
				res += x*-1;
		}
		cout << "Set #" << set << 
		"\nThe minimum number of moves is "
		<< res <<".\n\n";
		cin >> n;
	}

	return 0;
}