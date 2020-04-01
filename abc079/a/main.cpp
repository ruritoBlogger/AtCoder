#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    vector<int> a;
    int n;
    cin >> n;
    a.push_back(n/1000);
    n %= 1000;
    a.push_back(n/100);
    n %= 100;
    a.push_back(n/10);
    n %= 10;
    a.push_back(n);
    if(a[1] != a[2])
    {
        cout << "No" << endl;
        return 0;
    }
    size_t c = count(a.begin(),a.end(),a[1]);
    if(c < 3) cout << "No" << endl;
    else cout << "Yes" << endl;

    
}
