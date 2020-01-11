#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int H,W,K;
    cin >> H >> W >> K;
    vector<vector<char> >s(H,vector<char>(W));
    vector<vector<int> >ans(H,vector<int>(W,0));
    vector<int> key;
    rep(i,H) rep(j,W) cin >> s[i][j];
    
    rep(i,H)
    {
        int tmp = -1;
        rep(j,W) if(s[i][j] == '#') tmp = j;
        key.push_back(tmp);
    }
    /*
    cout << endl;
    rep(i,H)
    {
        rep(j,W) cout << s[i][j];
        cout << endl;
    }
    */
    
    int stop = 0;
    for(int i = key.size()-1;i >= 0;i--)
    {
        if(key[i] != -1)
        {
            stop = i;
            break;
        }
    }

    int cnt = 1; 
    rep(i,H)
    {
        rep(j,W)
        {
            if(s[i][j] == '#')
            {
                //cout << "test" << endl;
                for(int l = i;l >= 0;l--)
                {
                    if(ans[l][j] != 0) break;
                    for(int k = j;k >= 0;k--)
                    {
                        if(ans[l][k] != 0)break;
                        ans[l][k] = cnt;
                    }
                }
                //右側
                if(key[i] == j)
                {
                    for(int l = i;l >= 0;l--)
                    {
                        if(ans[l][j+1] != 0) break;
                        for(int k = j+1;k < W;k++) ans[l][k] = cnt;
                    }
                    if(i == stop)
                    {
                        for(int l = i+1;l < H;l++)
                        {
                            for(int k = j;k < W;k++)
                            {
                                ans[l][k] = cnt;
                            }
                        }
                    } 
                }
                if(i == stop)
                {
                    for(int l = i+1;l < H;l++)
                    {
                        for(int k = j;k >= 0;k--)
                        {
                            if(ans[l][k] != 0 && ans[l][k] != cnt)
                            {
                                //cout << ans[l][k] << endl;
                                break;
                            }
                            ans[l][k] = cnt;
                        }
                    }
                }
                cnt++;
            }
            /*
            cout << endl;
            rep(i,H)
            {
                rep(j,W) cout << ans[i][j];
                cout << endl;
            }
            */

        }    
    }


    cout << endl;
    rep(i,H)
    {
        rep(j,W)
        {
            cout << ans[i][j];
            if(j != W-1) cout << " ";
        }
        cout << endl;
    }

}
