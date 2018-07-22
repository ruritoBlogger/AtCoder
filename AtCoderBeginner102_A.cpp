#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	if(n == 1) {
		cout << 2 << endl;
		return 0;
	}else if(n%2 ==0) {
		cout << n << endl;
		return 0;
	}

	for(int line = 3;line < n*(1/2);line++) {
		if(n%line == 0) {
			cout << 2*line << endl;
			return 0;
		}
	}
	cout << 2*n << endl;
}
