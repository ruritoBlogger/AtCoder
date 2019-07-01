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

   vector<int>p(N);
   rep(i,N) cin >> p[i];

   int ans = 0;
   rep(i,N-2)
   {
       if( min(p[i],p[i+2]) <= p[i+1] && max(p[i],p[i+2]) >= p[i+1]) ans++;
   }
   cout << ans << endl;

}
