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

    if(s == "SUN") cout << 7 << endl;
    else if(s == "MON") cout << 6 << endl;
    else if(s == "TUE") cout << 5 << endl;
    else if(s == "WED") cout << 4 << endl;
    else if(s == "THU") cout << 3 << endl;
    else if(s == "FRI") cout << 2 << endl;
    else cout << 1 << endl;
}
