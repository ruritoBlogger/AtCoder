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
    
    if( (B-1)%(A-1)==0 ) cout << (B-1)/(A-1) << endl;
    else cout << (B-1)/(A-1) + 1<< endl;
}
