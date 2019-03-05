#include<iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	if(a%4 == 0 || a%7==0) {
		cout << "Yes";
		return 0;
	}
	for(int n = 1;n < 25;n++) {
		for(int j = 1;j < 15;j++) {
			if(a%(4*n+7*j)==0){
				cout << "Yes";
				return 0;
			}
		}
	}
	cout << "No";
	return 0;


		
}
