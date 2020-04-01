#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    string s;
    cin >> s;

    bool flag = false;
    ll tmp_R = 0;
    ll tmp_L = 0;
    vector<ll>ans(s.size(),0);
    rep(i,s.size())
    {
        if(s[i] == 'L')
        {
            flag = true;
            tmp_L++;
        }
        else if(flag)
        {
            if( (tmp_R+tmp_L+2)%2 == 0 )
            {
                ans[i-tmp_L] = (tmp_R+tmp_L)/2;
                ans[i-tmp_L-1] = (tmp_R+tmp_L)/2;
            }
            else
            {
                if( (tmp_R+2)%2==0 )
                {
                    ans[i-tmp_L-1] = (tmp_R+tmp_L)/2;
                    ans[i-tmp_L] = tmp_R+tmp_L - ans[i-tmp_L-1];
                }
                else
                {
                    ans[i-tmp_L] = (tmp_R+tmp_L)/2;
                    ans[i-tmp_L-1] = tmp_R+tmp_L-ans[i-tmp_L];
                }
            }
            flag = false;
            tmp_L = 0;
            tmp_R = 1;
        }
        else tmp_R++;
    }

    if( (tmp_R+tmp_L+2)%2 == 0 )
    {
        ans[ans.size()-tmp_L] = (tmp_R+tmp_L)/2;
        ans[ans.size()-tmp_L-1] = (tmp_R+tmp_L)/2;
    }
    else
    {
        if( (tmp_R+2)%2==0 )
        {
            ans[ans.size()-tmp_L-1] = (tmp_R+tmp_L)/2;
            ans[ans.size()-tmp_L] = tmp_R+tmp_L - ans[ans.size()-tmp_L-1];
        }
        else
        {
            ans[ans.size()-tmp_L] = (tmp_R+tmp_L)/2;
            ans[ans.size()-tmp_L-1] = tmp_R+tmp_L-ans[ans.size()-tmp_L];
        }
    }


    rep(i,ans.size())
    {
        cout << ans[i];
        if(i+1 != ans.size()) cout << " ";
    }
    cout << endl;
}
