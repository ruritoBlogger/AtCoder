#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int n;
    //int pos;
    cin >> n;
    vector<string> s(n);
    bool flag;
    int ans = 0;
    int Akey = 0;
    int Bkey = 0;
    int minus = 0;
    rep(i,n)
    {
        cin >> s[i];
    }
    rep(i,n)
    {
        /*
        flag = false;
        rep(j,s[i].size())
        {
            if(flag)
            {
                if(s[i][j] == 'B')
                {
                    ans++;
                    //cout << "i is " << i << " and j is " << j << endl;
                }
                flag = false;
            }
            else if(s[i][j] == 'A') flag = true;
            else flag = false;
        }
        */
        string::size_type pos = s[i].find("AB");
        while (pos != std::string::npos)
        {
            pos = s[i].find("AB", pos + 2 );
            ans++;
        }
        if(s[i][s[i].size()-1] == 'A' && s[i][0] == 'B') minus++;
        else if(s[i][s[[i].size()-1] == 'A') Akey++;
        else (s[i][0] == 'B') Bkey++;
    }
    //cout << "ans is" << ans << " and Akey is " << Akey << " and Bkey is " << Bkey << endl;
    //if(min(Akey,Bkey) <= minus) cout << ans + min(Akey,Bkey) - minus + 1 << endl;
    if(Akey + Bkey == 0 && minus != 0) cout << ans + minus - 1 << endl;
    else cout << ans + min(Akey,Bkey) << endl;
}
