#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF_LL 1LL << 60
#define INF 99999999
#define MOD (ll)1000000007
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, a, n) for(int i = a; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

void put_double(double obj){printf("%.12f\n",obj);};

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int main()
{
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    
    vector<int> ary(a1+a2+a3,1);
    rep(i,a1+a2+a3) ary[i] += i;

    int total = a1+a2+a3;

    int ans = 0;

    do
    {
        vector<vector<int> > tumiki;
        int tmp_a1 = a1;
        int tmp_a2 = a2;
        int tmp_a3 = a3;

        vector<int> tmp;
        
        rep(i,total)
        {
            
            if( (i+3)%3 == 0 && tmp_a1 > 0 )
            {
                tmp.push_back(ary[i]);
                tmp_a1--;
            }
            else if( (i+3)%3 == 1)
            {
                if( tmp_a2 > 0 )
                {
                    tmp.push_back(ary[i]);
                    tmp_a2--;
                }
                else
                {
                    tumiki.push_back(tmp);
                    tmp.clear();
                    tmp.push_back(ary[i]);
                    tmp_a1--;
                }
            }
            else
            {
                if( tmp_a3 > 0 )
                {
                    tmp.push_back(ary[i]);
                    tmp_a3--;
                    tumiki.push_back(tmp);
                    tmp.clear();
                }
                else
                {
                    tumiki.push_back(tmp);
                    tmp.clear();
                    tmp.push_back(ary[i]);
                    tmp_a1--;
                }
            }
        }
        tumiki.push_back(tmp);
        /*
        rep(i,tumiki.size())
        {
            rep(j,tumiki[i].size()) cout << tumiki[i][j] << " ";
            cout << endl;
        }
        cout << endl;
        */

        bool flag = true;
        rep(i,tumiki.size())
        {
            rep(j,tumiki[i].size())
            {
                if( j+1 < tumiki[i].size() && tumiki[i][j] > tumiki[i][j+1] )
                {
                    flag=false;
                    break;
                }
                if( i + 1 < tumiki.size() && j < tumiki[i+1].size() && tumiki[i][j] > tumiki[i+1][j] )
                {
                    flag=false;
                    break;
                }
            }
            if(!flag) break;
        }
        if(flag)
        {
            /*
            rep(i,ary.size()) cout << ary[i] << " ";
            cout << endl;
            */
            ans++;
        }
    }
    while( next_permutation(all(ary)));
    cout << ans << endl;
}
