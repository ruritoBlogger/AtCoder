#include<iostream>
#include <string>

using namespace std;

int main() {
        string boxA,boxB;

	cin >> boxA >> boxB;

	for(int n = 0;n < boxA.size();n++) {
		if(boxA == boxB) {
		cout << "Yes" << "\n";
		return 0;
		}
		boxA = boxA[boxA.size()-1] + boxA.substr(0,boxA.size()-1);
	}
		cout << "No" << "\n";
	return 0;
}
