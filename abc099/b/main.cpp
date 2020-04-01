#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
 
int main()
{
    ll a,b;
    cin >> a >> b;
    
    int tmp = 0;
    for(int i = 1;i < b-a;i++)
    {
        tmp += i;
    }
    cout << tmp - a << endl;
}
