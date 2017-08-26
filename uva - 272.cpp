#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	bool abierto = false;	
	bool loop = false;

	while(!getline(cin, s).eof()){
		for(auto i = s.begin(); i  != s.end(); i++){
			if((*i) == '"'){
				if(!abierto){
					abierto = true;
					cout << "``";
				}
				else{
					abierto = false;
					cout << "''";
				}
			}
			else
				cout << *i;
		}
		
		cout << '\n';
		
	};

	for(auto i = s.begin(); i  != s.end(); i++){
			if((*i) == '"'){
				if(!abierto){
					abierto = true;
					cout << "``";
				}
				else{
					abierto = false;
					cout << "''";
				}
			}
			else
				cout << *i;
	}

	return 0;
}