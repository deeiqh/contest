#include <iostream>

using namespace std;

short mayor(short a, short b){
	if(a>=b)
		return a;
	return b;
}

short menor(short a, short b){
	if(a>b)
		return b;
	return a;
}

int main()
{	
	short cases;
	cin >> cases;

	short a, b, c;
	for(short i = 0; i != cases; i++){
		cin >> a;
		cin >> b;
		cin >> c;

		cout << "Case " << i+1 << ": ";
		
		if(mayor(a,b) >= c)
			cout << mayor(menor(a,b),c);
		else
			cout << mayor(a,b);

		cout <<'\n';
	}

	return 0;
}