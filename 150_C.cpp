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

    vector<int>P(N);
    vector<int>Q(N);
    rep(i,N) cin >> P[i];
    rep(i,N) cin >> Q[i];

    vector<int>key;
    rep(i,N) key.push_back(i+1);
    int p = 0;
    int q = 0;
    bool pFlag = true;
    bool qFlag = true;
    
    
    //cout << endl;
    do
    {
        //rep(i,key.size()) cout << key[i] << " ";
        
        if(pFlag)
        {
            if(key == P) pFlag = false;
            else p++;
        }
        if(qFlag)
        {
            if(key == Q) qFlag = false;
            else q++;
        }
    }
    while(next_permutation(all(key)));
    //cout << p << " " << q << endl;
    cout << abs(p-q) << endl;
}
