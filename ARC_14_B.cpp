#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N;
    cin >> N;

    vector<string> s;
    rep(i,N)
    {
        string tmp;
        cin >> tmp;
        s.push_back(tmp);
    }

    rep(i,N)
    {
        if( (i+2)%2==0 )
        {
            for(int j = 0;j < i;j++)
            {
                if(s[j]==s[i])
                {
                    cout << "LOSE" << endl;
                    return 0;
                }
            }
            if( i != 0 )
            {
                if( s[i][0] != s[i-1][s[i-1].size()-1] )
                {
                    cout << "LOSE" << endl;
                    return 0;
                }
            }
        }
        else
        {
            for(int j = 0;j < i;j++)
            {
                if(s[j]==s[i])
                {
                    cout << "WIN" << endl;
                    return 0;
                }
            }
            if( s[i][0] != s[i-1][s[i-1].size()-1] )
            {
                cout << "WIN" << endl;
                return 0;
            }
        }
    }
    cout << "DRAW" << endl;
}
