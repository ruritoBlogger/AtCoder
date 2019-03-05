#include<iostream>
#include<vector>
#include<cstdlib>
#include<math.h>
#include <algorithm>
using namespace std;
vector<int>array;
	     
int main() {
	long long dis;
	cin >> dis;
	for(long long n = 1;n <= dis;n++) {
		long long a;
		cin >> a;
		array.push_back(a - n);
	}
	sort(array.begin(),array.end());
	long long ave;
	if(dis%2 == 0) {
		ave = round((array[array.size()/2 -1 ]+array[array.size()/2])/2);
	}else{
		ave = array[array.size()/2];
	}
	long long ans;
	for(long long n = 0;n < dis;n++) {
		ans += abs(array[n]-ave);
	}
	cout << ans << endl;
}
