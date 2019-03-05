#include<iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	if(a < 1200) {
		cout << "ABC";
		return 0;
	}else if(a < 2800) {
		cout << "ARC";
		return 0;
	}else{
		cout << "AGC";
		return 0;
	}
}
