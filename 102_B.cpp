#include<iostream>
#include<vector>
using namespace std;
vector<int>array;

int main() {
	int N;
	cin >> N;
	cout << endl;
	array = vector<int>(N);
	int large = 0,small;
	for(int n = 0;n < N;n++) {
		cin >> array[n];
		if(large < array[n]) {
			large = array[n];
		}
		if(n == 0) {
			small = array[n];
			continue;
		}else if(small > array[n]) {
			small = array[n];
		}
	}
	cout << large-small << endl;

	
	
	

		

	

}
