#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int A,B;
    cin >> A >> B;

    if(B%A==0) cout << A+B << endl;
    else cout << B-A << endl;
}
