#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999

int main() {
    vector<char> a;
    string b;
    int zero = 0;
    int one = 0;
    cin >> b;
    //copy(b.begin(),b.end(),back_inserter(a));
    if(a.size() ==1)
    {
        cout << "ee" << endl;
        cout << 0 << endl;
        return 1;
    }
    string tmp;
    for(int i = 0;i < b.size();i++)
    {
        tmp = b[i];
        if(tmp=="0") zero++;
        else one++;
    }
    if(zero > one) cout << one * 2 <<endl;
    else cout << zero * 2 << endl;
}

