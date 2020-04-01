#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
void swap( vector<int>& target)
{
    int tmp;
    for(int i = 0;i < target.size()/2;i++)
    {
        tmp = target[i];
        target[i] = target[target.size()-i - 1];
        target[target.size()-i - 1] = tmp;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int>ans;
    for(int i = 0;i < n;i++) cin >> a[i];
    for(int i = 0;i < n;i++)
    {
        if(i%2==0)
        {
            ans.push_back(a[i]);
        }
        else
        {
            ans.insert(ans.begin(),a[i]);
        }
    }
    if(n%2==1) reverse(ans.begin(),ans.end());
    for(int j = 0;j < ans.size();j++) cout << ans[j] << " ";
    cout << endl;
}
