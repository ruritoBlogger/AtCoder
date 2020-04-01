#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

ll seki(int N)
{
    if(N==0) return 1;
    else return seki(N-1)*N;
}

ll saiki(int l, int haba)
{
    if(l==1) return haba;
    else return saiki(l-1,haba)*haba;
}

int main()
{
    int N,K;
    cin >> N >> K;

    ll waru = pow(10,9)+7;
    ll kaburi = 0;
    //rep(i,N-K) kaburi += seki(N-K-i);
    
    //vector<int> yakusu = enum_div(K);
    for(int i = 1;i <= K;i++)
    {
        //cout << seki(N-K+i)%waru - kaburi << endl;
        //kaburi += seki(N-K+i)%waru;
        /*
        if(i != 1 && i != K && K%i == 0)
        {
            cout << (seki(N-K+i)%waru) / (seki(N-K)*seki(K/i)%waru) << endl;
            kaburi +=(seki(N-K+i)%waru) / (seki(N-K)*seki(K/i)%waru);
        }
        else
        {
            cout << (seki(N-K+i)%waru) / (seki(N-K)*seki(i)%waru) << endl;
            kaburi +=(seki(N-K+i)%waru) / (seki(N-K)*seki(i)%waru);
        }
        */
        //cout << saiki(N-K-1,i+1)-1 << endl;
        if(i <= 2)
        {
            cout << (ll)(pow(N-2,i))%waru-kaburi << endl;
            kaburi += (ll)(pow(N-2,i))%waru-kaburi;
        }
        else
        {
            cout << (ll)(pow(N-2,i)/K)%waru-kaburi << endl;
            kaburi += (ll)(pow(N-2,i)/K)%waru-kaburi;
        }


    }






}
