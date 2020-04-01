#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    string s;
    cin >> s;

    if(s == "Sunny") cout << "Cloudy" << endl;
    else if(s == "Cloudy") cout << "Rainy" << endl;
    else cout << "Sunny" << endl;
}
