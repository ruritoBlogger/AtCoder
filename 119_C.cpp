#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999

int main()
{
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    vector<int>l(n);
    for(int i = 0;i < n;i++)
    {
        cin >> l[i];
    }
    sort(l.begin(),l.end(),greater<int>());
    for(int i = 0;i < n;i++) cout << l[i] << " ";
    cout << endl;
    int A = INF;
    int B = INF;
    int C = INF;
    for(int i = 0;i < n;i++)
    {
        if(abs(l[i] - a) < abs(A)) A = l[i] - a;
        if(abs(l[i] - b) < abs(B)) B = l[i] - b;
        if(abs(l[i] - c) < abs(C)) C = l[i] - c;
    }
    cout << A << " " << B << " " << C << endl;

}
