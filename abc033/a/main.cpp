#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int n;
    cin >> n;
    //cout << n/1000 << " "  << n%1000/100 << " " << n%1000%100/10 << " " << n%1000%100%10 << endl;
    if(n/1000 == n%1000/100 && n%1000/100 == n%1000%100/10 && n%1000%100/10 == n%1000%100%10)cout << "SAME\n" << endl;
    else cout << "DIFFERENT\n" << endl;
}
