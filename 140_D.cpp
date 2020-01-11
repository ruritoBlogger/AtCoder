#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N,K;
    string s;
    string scopy;
    cin >> N >> K >> s;
    /*
    rep(i,s.size()-1)
    {
        if( s[i] == s[i+1]) s.erase(s.begin() + i);
    }
    */
    scopy = s;
    int l = 0;
    int r = 0;
    vector<pair<int, int> >L;
    vector<pair<int, int> >R;
    rep(i,s.size())
    {
        if(s[i] == 'L')
        {
            l++;
            if(r != 0) R.push_back(make_pair(r, i-r));
            r = 0;
        }
        else
        {
            r++;
            if(l != 0) L.push_back(make_pair(l, i-l));
            l = 0;
        }
    }
    sort(all(R),greater<pair<int, int> >());
    sort(all(L),greater<pair<int, int> >());
    while(K < 2)
    {


    if(r > l)
    {

}
