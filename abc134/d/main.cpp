#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()


vector<bool> a;

bool dfs(vector<bool> * ans, int dph)
{
    if(dph == 0)
    {
        vector<int> ruiseki;
        ruiseki.push_back(ans[0]);
        for(int i = 1;i < ans.size();i++) ruiseki.push_back(ruiseki[i-1] + ans[i]);
        rep(i,a.size())
        {
            int tmp = 0;
            for(int j = a[i];j < a.size();j += a[i]) tmp++;
            if( (tmp%2 == 0 && a[i]) || (tmp%2 == 1 && !a[i]))
            {
                cout << 0 << endl;
                return 0;
            }
        cout << ruiseki[ruiseki.size()-1] << endl;
                cout << ans[0];
                for(int j = 1; j < ans.size(); j++) cout << " " << ans[j];
                cout << endl;
                return 0;
        }
    }

    dfs(&ans, dph + 1);
    ans[dph] = true;
    dfs(&ans, dph + 1);
}




int main()
{
    int N;
    cin >> N;
    a.resize(N); 
    vector<bool> ans(N,false);
    int tmp;
    for(int i = 1;i < N + 1;i++)
    {
        cin >> tmp;
        a[i] = tmp;
    }
    dfs(&ans, 0);
}
