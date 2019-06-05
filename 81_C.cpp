#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int N,K;
    cin >> N >> K;
    vector<int>a(N);
    vector<int>nums(N);
    rep(i,N)
    {
        cin >> a[i];
        nums[a[i]-1]++;
    }
    sort(all(nums),greater<int>());
    //rep(i,nums.size()) cout << nums[i] << endl;
    int ans = 0;
    for(int i = K;i < nums.size();i++)
    {
        if(nums[i] == 0) break;
        ans += nums[i];
    }
    cout << ans << endl;
}
