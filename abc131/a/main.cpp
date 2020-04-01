#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    string S;
    cin >> S;
    
    bool flag = true;

    rep(i,S.size()-1)
    {
        if(S[i] == S[i+1])
        {
            cout << "Bad" << endl;
            return 0;
        }
    }
    cout << "Good" << endl;
}
