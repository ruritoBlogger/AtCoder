#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int N,A,B,C,D;
string s;

int main()
{
    cin >> N >> A >> B >> C >> D >> s;
    A--;B--;C--;D--; 
    bool flag = false;
    if(D < C)
    {
        for(int i = B;i <= D;i++)
        {
            if(s[i] == '.' && s[i+1] == '.' && s[i-1] == '.')
            {
                flag = true;
            }
        }
        if(!flag)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    for(int i = A; i < C; i++)
    {
        if(s[i] == '#' && s[i+1] == '#')
        {
            cout << "No" << endl;
                return 0;
        }
    }
    for(int i = B; i < D; i++)
    {
        if(s[i] == '#' && s[i+1] == '#')
        {
                cout << "No" << endl;
                return 0;
        }
    }

    cout << "Yes" << endl;
}
