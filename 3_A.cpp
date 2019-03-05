#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999

int main()
{
    int a,total = 0;
    cin >> a;
    for(int i = 0;i < a;i++)
    {
        total += (i + 1) * 10000;
    }
    cout << total/a << endl;
}
