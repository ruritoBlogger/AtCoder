#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> array;
    int a;
    cin >> a;

    int i = 1;

    while(true)
    {
        if(i==1){
            array.push_back(a);
            i++;
            continue;
        }
        else if(array[i-2]%2 == 0)
        {
            array.push_back(array[i-2]/2);
        }
        else
        {
            array.push_back(3*array[i-2] + 1);
        }
        
        for(int j = 0;j < i-1;j++)
        {
            if(array[j] == array[i-1])
            {
                cout << i << endl;
                return 0;
            }
        }
        i++;
    }
}
