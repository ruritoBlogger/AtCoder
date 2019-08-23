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
    vector<int>t(N);
    vector<int>x(N);
    vector<int>y(N);
    rep(i,N) cin >> t[i] >> x[i] >> y[i];
   
    int T = 0;
    int X = 0;
    int Y = 0;
    rep(i,N)
    {
        if(abs(X-x[i]) + abs(Y-y[i]) == abs(T-t[i]))
        {
            T = t[i];
            X = x[i];
            Y = y[i];
        }
        else
        {
            int tmp = abs(X-x[i]) + abs(Y-y[i]) - abs(T-t[i]);
            if(tmp%2 == 0 && tmp < 0)
            {
                T = t[i];
                X = x[i];
                Y = y[i];
            }
            else
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
}
