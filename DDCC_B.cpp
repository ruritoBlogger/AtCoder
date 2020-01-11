#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    ll N;
    cin >> N;
    
    ll all = 0;
    vector<ll> A(N);
    vector<ll> array;
    array.push_back(0);

    rep(i,N)
    {
        cin >> A[i];
        array.push_back(A[i] + array[array.size()-1]);
        all += A[i];
    }
    //rep(i,array.size()) cout << array[i] << " ";
    //cout << endl;
    ll ans = 0;
    if(N%2 != 0)
    {
    rep(i,array.size())
    {
        if(array[i] > all/2)
        {
            ll tmp = array[array.size()-1] - array[i];
            ll tmp2 = array[array.size()-1] - array[i-1];
            //cout << tmp << " " << tmp2 << endl;
            if(tmp < tmp2)
            {
                ans = array[i] - tmp;
                if(array[i] - i <  array[i] - tmp)
                {
                    ans = array[i] - tmp2*2;
                }
            }
            else
            {
                ans = array[i] - tmp2*2;
                if(array.size() - 1 < tmp2) 
                {
                    ans = array[i] - tmp;
                }
            }
            break;
        }
        else if(array[i] == all/2)
        {
            ans = 0;
            break;
        }
    }
    }
    else
    {
        if(array[N/2] > array[array.size()-1] - array[N/2]) ans = array[N/2] - array[array.size()-1] + array[N/2];
        else ans = array[array.size()-1] - array[N/2]*2 ;

    }
    cout << ans << endl;
}
