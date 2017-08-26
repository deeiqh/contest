#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	int arr[100];
	cin >> t;
	for(int i=0; i != t; i++){
		int n;
		cin >> n;
		int arr[n];
		int pos = 0;
		for(int j=0; j != n; j++){
			string s;
			cin >> s;
			if(s=="LEFT"){
					arr[j] = -1;
					pos--;
			}else
				if(s=="RIGHT"){
					arr[j] = +1;
					pos++;
				}
				else{
					int a;
					cin >> s;
					cin >> a;  
					arr[j] = arr[a-1];
					pos += arr[a-1];
				}
		}
		cout << pos << '\n';		
	}

	return 0;
}