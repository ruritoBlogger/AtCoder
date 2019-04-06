#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int waru(int n,int i,int waru,bool flag)
{
    for(int j = i;j > 1;j--)
    {
        waru /= 10;
        if(j==1)
        {
            if(flag) n /= waru;
            else n %= waru;
        }
        else
        {
            n %= waru;
        }
    }
    return waru;
}

int main()
{
    int n;
    cin >> n;
    int bai = 1;
    int a = 0;
    while(true)
    {
        if(n/bai != 0)
        {
            bai*= 10;
            a++;
        }
        else break;
    }
    cout << a << endl;
    int ans = 0;
    rep(i,a)
    {
        if(i+1 == a)
        {
            if(waru(n,i+1,a,false) == 3) ans++;
            else if(waru(n,i+1,a,false) == 5) ans += 2;
            else if(waru(n,i+1,a,false) == 7) ans += 3;
            break;
        }
        else
        {
            if(waru(n,i+1,a,true) == 5) ans += pow(3,n-i-1);
            else if(waru(n,i+1,a,false) == 7) ans += pow(3,n-i-1)*2;
        }
    }
}

