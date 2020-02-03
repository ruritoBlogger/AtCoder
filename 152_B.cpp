#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int a,b;
    cin >> a >> b;

    if(a>b) rep(i,a) cout << b;
    else if(a<b) rep(i,b) cout << a;
    else rep(i,min(a,b)) cout << a;
    cout << endl;
    


}
