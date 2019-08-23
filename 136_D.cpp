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

    int keap = 0;
    vector<int> ans(s.size(),0);
    int longest = 0;
    int tmp = 0;
    int tmp2 = 0;
    rep(i,s.size()+1)
    {
        if(s[i] == 'R' && tmp2 == 0) tmp++;
        else if(s[i] == 'L' && tmp == 0) tmp2++;
        else
        {
            if(longest < max(tmp,tmp2))longest = max(tmp,tmp2);
            tmp = 0;
            tmp2 = 0;
            if(s[i] == 'R') tmp++;
            else tmp2++;
        }
    }
    tmp = 0;
    tmp2 = 0;
    bool flag = true;
    longest--;
    rep(i,s.size())
    {
        if(s[i] == 'R')
        {
            if(tmp2 != 0)
            {
                if((tmp2+tmp)%2 == 0)
                {
                    ans[i-tmp2] += (tmp+tmp2)/2;
                    ans[i-tmp2-1]+= (tmp+tmp2)/2;
                }
                else if(max(tmp, tmp2) - 1 == longest)
                {
                    if(longest%2 == 1 && tmp < tmp2)
                    {
                        ans[ans.size()-tmp2] += (tmp+tmp2-1)/2;
                        ans[ans.size()-tmp2 - 1] += (tmp+tmp2+1)/2;
                    }
                    else if(longest%2 == 1)
                    {
                        ans[ans.size()-tmp2] += (tmp+tmp2+1)/2;
                        ans[ans.size()-tmp2 - 1] += (tmp+tmp2-1)/2;
                    }
                    else
            {
                ans[ans.size()-tmp2] += (tmp+tmp2-1)/2;
                ans[ans.size()-tmp2 - 1] += (tmp+tmp2+1)/2;
            }

                }
                else
                {
                    if((longest - max(tmp, tmp2) + 1)%2 == 1)
                    {
                        ans[i-tmp2] += tmp;
                        ans[i-tmp2-1] += tmp2;
                    }
                    else
                    {
                        ans[i-tmp2] += tmp2;
                        ans[i-tmp2-1] += tmp;
                    }
                }
                tmp = 0;
                tmp2 = 0;
            }
            tmp++;
        }
        else
        {
            tmp2++;
        }
    }
    if(tmp2 != 0)
    {
        if((tmp2+tmp)%2 == 0)
        {
            ans[ans.size()-tmp2] += (tmp+tmp2)/2;
            ans[ans.size()-tmp2 - 1]+= (tmp+tmp2)/2;
        }
        else if(max(tmp, tmp2) - 1 == longest)
        {
            if(longest%2 == 1 && tmp < tmp2)
            {
                ans[ans.size()-tmp2] += (tmp+tmp2-1)/2;
                ans[ans.size()-tmp2 - 1] += (tmp+tmp2+1)/2;
            }
            else if(longest%2 == 1)
            {
                ans[ans.size()-tmp2] += (tmp+tmp2+1)/2;
                ans[ans.size()-tmp2 - 1] += (tmp+tmp2-1)/2;
            }
            else
            {
                ans[ans.size()-tmp2] += (tmp+tmp2-1)/2;
                ans[ans.size()-tmp2 - 1] += (tmp+tmp2+1)/2;
            }
        }
        else
        {
            if((longest - max(tmp, tmp2) + 1)%2 == 1)
            {
                ans[ans.size()-tmp2] += tmp;
                ans[ans.size()-tmp2 - 1] += tmp2;
            }
            else
            {
                ans[ans.size()-tmp2] += tmp2;
                ans[ans.size()-tmp2 - 1] += tmp;
            }
        }
        tmp = 0;
        tmp2 = 0;
    }

    rep(i,ans.size()) cout << ans[i] << " ";
    cout << endl;
}
