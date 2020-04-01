#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int a;
    cin >> a;

    vector<int> b(a);
    vector<bool> c(a);
    vector<int> d(a,0);
    int tmp;
    for(int i = 1;i < a+1;i++)
    {
        cin >> tmp;
        b[i-1] = tmp;
        if(b[i-1] == 0) c[i-1] = false;
        else c[i-1] = true;
    }
    bool flag = false;
    bool e = true;
    int flag_num =0;
    int n = 0;
    while(true)
    {
        flag = true;
        e = true;
        for(int i = 0;i < a;i++)
        {
            if(!c[i])
            {
                if(!flag)
                {
                    n++;
                    flag = true;
                }
                continue;
            }
            if(b[i] == d[i])
            {
                c[i] = false;
                //if(!e) n++;
                cout << "good  at" << i << " and n is " << n << endl;
                continue;
            }
            e = false;
            flag = false;
            d[i] += 1;
            cout << "uped " << i << " and num is " << d[i] << endl;
        }
        //if(e)
        //{
        //    cout << n << "end" << endl;
        //    return 0;
        //}
        if(flag)
        {
            cout << n << "end" << endl;
            return 0;
        }
        n++;
        cout <<"now n is " << n << endl;
        
    }
}
