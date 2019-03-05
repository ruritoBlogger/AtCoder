#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    if((a*b)%2==0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
    return 1;
}
