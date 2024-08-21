#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		string s;
		cin >> s;
		int sz = s.size();
		if(sz%2!=0){
			cout << "NO";
		}
		else{
			int lim = sz/2;
			string str1, str2;
			str1 = s.substr(0,lim);
			str2 = s.substr(lim);

			if(str1==str2){
				cout << "YES";
			}
			else{
				cout << "NO";
			}
		}
		cout << endl;
	}

	return 0;
}