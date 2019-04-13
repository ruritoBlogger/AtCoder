#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll ANS = 5;
    vector<ll> a;
    ll most = 0;
    ll tmp;
    bool flag = true;
    cin >> tmp;
    a.push_back(tmp);
    rep(i,5)
    {
        cin >> tmp;
        a.push_back(tmp);
        if(tmp>a[0])continue;
        flag = false;
        if(a[0]%tmp == 0 && most < a[0]/tmp) most = a[0]/tmp;
        else if(a[0]%tmp != 0 && most < a[0]/tmp+1) most = a[0]/tmp+1;
    }
    if(flag) cout << ANS << endl;
    else
    {
        most--;
        ANS += most;
        cout << ANS << endl;
    }

}
