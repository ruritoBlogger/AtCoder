#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll N;
    cin >> N;
    vector<int> table;
    rep(i,6) table.push_back(i+1);

    N = N%30;

    rep(i,N)
    {
        int tmp = table[(i+5)%5];
        table[(i+5)%5] = table[(i+5)%5+1];
        table[(i+5)%5+1] = tmp;
    }
    rep(i,6)
    {
        cout << table[i];
    }
    cout << endl;



}
