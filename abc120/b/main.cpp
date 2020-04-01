#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999

int main() {
    int a,b,c;
    vector<int> array;
    cin >> a >> b >> c;
    int d;
    if (a < b)d = a;
    else d = b;
    for(int i = 1; i < d+1;i++)
    {
        if(a%i == 0 && b%i==0) array.push_back(i);
    }
    cout << array[array.size() - c] << endl;
}
