#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 99999999
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main()
{
    int x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int diffX = x2 - x1;
    int diffY = y2 - y1;
    cout << y2 - diffY << " " << x2 + diffX << " " << y2 - diffY - diffX << " " << x2 + diffX - diffY << endl;
}
