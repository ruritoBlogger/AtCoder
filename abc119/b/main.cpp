#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int a;
    cin >> a;
    vector<double> b(a);
    vector<string> c(a);
    for(int i = 0; i < a;i++)
    {
        cin >> b[i] >> c[i];
    }
    double ans = 0;
    for(int i = 0;i < c.size();i++)
    {
        if(c[i] =="JPY")
        {
            ans += b[i];
        }
        else
        {
            ans += b[i] * 380000.0;
        }
    }
    cout << ans << endl;
    

    return 1;
}
