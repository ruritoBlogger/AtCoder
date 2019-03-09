#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> d (b);
    for(int i = 0;i < b;i++) cin >> d[i];
    vector<vector<int> > e (a,vector<int>(b));
    for(int i = 0; i < a;i ++)
    {
        for(int j = 0;j < b;j++)
        {
            cin >> e[i][j];
        }
    }
    int tmp = 0;
    int ans = 0;
    for(int i = 0;i < a;i ++)
    {
        tmp = 0;
        for(int j = 0;j < b;j++)
        {
            tmp += d[j] * e[i][j];
            //cout << tmp << endl;
        }
        tmp += c;
        if(tmp > 0) ans++;
        //cout << "tmp is " << tmp << endl;
    }
    cout <<  ans << endl;
}
