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
    
    int n = 0;
    vector<int> P(N,0);
    vector<int> M(N,0);
    rep(i,N)
    {
        int tmp;
        cin >> tmp;
        rep(j,tmp)
        {
            int tmp1,tmp2;
            cin >> tmp1 >> tmp2;
            if(tmp2 == 0)
            {
                n++;
                P[tmp-1]++;
            }
            else
            {
                M[tmp-1]++;
            }
        }
    }
    
    //rep(i,N) cout << a[i] << endl;
    int p= 0;
    rep(i,N) p += P[i];
    int m=0;
    rep(i,N) m += M[i];
    
    if(N-n != 0) cout << N - n << endl;
    else if(p == m) cout << 0 << endl;
    else cout << N-1 << endl;
}
