#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int n,m;
    cin >> n >> m;
    int tmp,tmp2;
    vector<pair<int, int> >s;
    vector<pair<int, int> > count(m);
    int high = 0;
    rep(i,m)
    {
        cin >> tmp;
        rep(j,tmp)
        {
            cin >> tmp2;
            s.push_back(make_pair(i,tmp2));
            count[i].first++;
            if(high < count[i].first) high = count[i].first;
            count[i].second = i;
        }
    }
    vector<int> p(m);
    rep(i,m) cin >> p[i];
    sort(all(count));
    
    vector<bool> right(10);
    rep(i,2**high)
    {
        //i番目の電気を付けない時
        if(i%2==0)
        {



}
