#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i=0; i!=t;i++){
		string url;
		int a;
		int ind = 0;
		int max = 0;
		string arr[10];
		for(int j=0; j != 10; j++){
			cin >> url;
			cin >> a;
			if(a > max){
				max = a;
				ind = 0;
				arr[ind] = url;
			}
			else
				if(a == max){
					arr[ind+1] = url;
					ind++;
				}

		}
		
		cout << "Case #" << i+1 <<":\n";
		for(int j=0; j != ind+1;j++){
			cout << arr[j] << '\n';
		}
	}
	return 0;
}