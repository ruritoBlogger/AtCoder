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
string string_list;

int main()
{
    int N;
    cin >> N;
    string_list = "abcdefghij";

    vector<int> ans;


    string key;
    rep(i,N) key.push_back('a');
    cout << key << endl;
    if(N == 1) return 0;

    while(true)
    {
        // 終了条件
        bool flag = true;
        char front_key = key[0];
        for(int i = 1; i < key.size(); i++)
        {
            if( key[i] == front_key )
            {
                flag = false;
                break;
            }
        }
        if(flag) return 0;
        
        rep(i,key.size())
        {
            if( key[key.size()-1-i] - 'a' != N-1 )
            {
                key[key.size()-1-i] = (char)(key[key.size()-1-i]+1);
                break;
            }
        }
        //出力
        cout << key << endl;
    }
}
