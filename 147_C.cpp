#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<pair<int, int> > > A;
    rep(i,n)
    {
        int tmp_a;
        cin >> tmp_a;
        vector<pair<int, int> > tmp_xy(tmp_a);
        rep(j,tmp_a)
        {
            cin >> tmp_xy[j].first >> tmp_xy[j].second;
        }
        A.push_back(tmp_xy);
    }
    /*
    rep(i,n)
    {
        rep(j,A[i].size()) cout << A[i][j].first << " " << A[i][j].second << endl;
        cout << endl;
    }
    */

    int ANS = 0;

    rep(bit,(1<<n))
    {
        vector<int> S;
        rep(i,n)
        {
            if (bit & (1<<i)) S.push_back(i);
        }

        
        // Sに格納されていない人を正直者とする
        vector<int> ans(n,-1);
        int S_key = 0;
        bool flag = true;
        
        rep(i,n)
        {
            if( S.size() == 0 || i != S[S_key] ) continue;
            else 
            {
                S_key++;
                ans[i] = 0;
            }
        }

        S_key = 0;
        rep(i,n)
        {
            // 正直者の時
            if( S.size() == 0 || i != S[S_key] )
            {
                // 正直者の発言をansに格納していく
                rep(j,A[i].size())
                {
                    if( ans[A[i][j].first-1] == -1 ) ans[A[i][j].first-1] = A[i][j].second;
                    // 正直者の発言が矛盾している場合
                    else if( ans[A[i][j].first-1] != A[i][j].second )
                    {
                        flag = false;
                        break;
                    }
                }
            }
            else S_key++;

            // 正直者が矛盾している時
            if( !flag ) break;
        }
        
        if(flag)
        {
            /*
            cout << "S[i] is ";
            rep(i,S.size()) cout << S[i] << " ";
            cout << endl;
            rep(i,ans.size()) cout << ans[i] << " ";
            cout << endl;
            cout << endl;
            */

            // Sの配列の長さとans[i]に含まれている0の個数が異なる場合は答えに含めない
            int ans_zero_cnt = 0;
            rep(i,ans.size()) if( ans[i] == 0 ) ans_zero_cnt++;
            if( ans_zero_cnt == S.size() )ANS = max( ANS, (int)(n - S.size()) );
        }
    }
    cout << ANS << endl;
}
