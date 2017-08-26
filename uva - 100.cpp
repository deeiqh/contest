#include <iostream>
#include <map>

using namespace std;

int main()
{
	map <unsigned int,unsigned int> arr;
	unsigned int temp[1000];
	unsigned int i, j, n, ind, max, w;
	bool change = false;

	while(cin >> i >> j){
		if(i>j){
			w = j;
			j = i;
			i = w;
			change = true;
		}

		max = 0;
		for(unsigned int k=i; k != j+1; k++){
			if(arr.find(k) != arr.end()){
				if(arr[k] > max)
					max = arr[k];				
			}
			else{
				n=k;
				ind = 1;
				while(n!=1 && (arr.find(k) == arr.end())){
					temp[ind] = n;
					if(n%2 != 0)
						n = 3*n+1;
					else
						n >>= 1;
					ind++;
				}
				temp[ind] = 1;

				if(n == 1)
					for(int q=ind; q != 0; q--){
						arr[temp[ind-q+1]] = q;
					}
				else
					if(arr.find(k) != arr.end())
						for(int q=ind-1; q != 0; q--){
							arr[temp[q]] = arr[n] + ind-q;
						}
				
				if(arr[k] > max)
					max = arr[k];
			}			
		}

		if(change){
			w = j;
			j = i;
			i = w;
			change = false;
		}
		cout << i << ' ' << j << ' '<< max << '\n';

	}

	/*
	unsigned int arr[10100] = {0};
	unsigned int temp[30100] = {0};
	unsigned int i, j, n, ind, max;

	while(cin >> i >> j){
		max = 0;
		for(unsigned int k=i; k != j+1; k++){
			if(arr[k] != 0){
				if(arr[k] > max)
					max = arr[k];				
			}
			else{
				n=k;
				ind = 1;
				while(n!=1 && arr[n] == 0){
					temp[ind] = n;
					if(n%2 != 0)
						n = 3*n+1;
					else
						n /= 2;
					ind++;
				}
				temp[ind] = 1;

				if(n == 1)
					for(int q=ind; q != 0; q--){
						arr[temp[ind-q+1]] = q;
					}
				else
					if(arr[n] != 0)
						for(int q=ind-1; q != 0; q--){
							arr[temp[q]] = arr[n] + ind-q;
						}
				
				if(arr[k] > max)
					max = arr[k];
			}			
		}

		cout << i << ' ' << j << ' '<< max << '\n';
	}
	*/

	return 0;
}