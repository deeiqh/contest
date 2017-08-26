#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int abso(int a){
	if(a<0)
		return a*-1;
	return a;
}

int main()
{	
	int n, a, b, i, x;
	string s;
	bool arr[3100]  = {0};
	
	while(cin >> n){
		cin >> a;
		for(i=0; i != n-1; i++){
			cin >> b;
			x = abso(a-b);
			if(x > 0 && x < n && !arr[x]){
				arr[x] = 1;
				a = b;
			}
			else{
				cout << "Not jolly" << '\n';
				getline(cin, s);
				fill(arr, arr+3100, 0);
				break;
			}		
		}
		if (i == n-1){
			cout << "Jolly" << '\n';
			fill(arr, arr+3100, 0);
		}
	}

	return 0;

}
