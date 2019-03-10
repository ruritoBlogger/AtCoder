#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> count(n/2+1);
    ll ans = 0;
    ll waru = (1e+9)+7;
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
        count[a[i]/2]++;
    }
    sort(count.begin(),count.end());
    if(n%2==1)
    {
        if(count[0] != 1)
        {
            cout << "0" << endl;
            return 0;
        }else
        {
            for(int i = 1;i < count.size();i++)
            {
                if(count[i] != 2)
                {
                    cout << "0" << endl;
                    return 0;
                }
            }
        }
        ans = pow(2,n/2);
    }
    else
    {
        for(int i = 1;i < count.size()-1;i++)
            {
                if(count[i] != 2)
                {
                    cout << "0" << endl;
                    return 0;
                }
            }
        ans = pow(2,n/2);
    }
    cout << ans%waru << endl;
} 
