#include<iostream>

using namespace std;

int main()
{
    char a[10];
    cin >> a;
    int b = int(a[5]);
    int c = int(a[6]);
    if(b == 49 || c > 52)
    {
        cout << "TBD" << endl;
    }
    else
    {
        cout << "Heisei" << endl;
    }
    return 1;
}
