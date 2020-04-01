#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(a < b && c < b) cout << a + c << endl;
    else if(b < a && c < a)cout << b+c << endl;
    else cout << b+a << endl;
}
