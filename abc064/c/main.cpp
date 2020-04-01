#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

template < typename T > std::string to_string( const T& n )
{
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

int main()
{
    int N;
    cin >> N;
    set<int> key;
    multiset<int> Tmp;
    rep(i,N)
    {
        int tmp;
        cin >> tmp;
            key.insert(tmp/400);
            Tmp.insert(tmp/400);
    }
   
    /*
    for(set<int>::iterator itr = key.begin(); itr != key.end(); ++itr) {
        cout << *itr << endl;
    }
    */

    // 最大値
    if( key.find(8) !=key.end() ) cout << max(1, int(key.size()-1) ) << " ";
    else cout << key.size() << " ";
    if( key.find(8) != key.end() ) cout << min( 8, int(key.size()+Tmp.count(8)-1) ) << endl;
    else cout << key.size() << endl;

}
