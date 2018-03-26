#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        for(int j=0;j<n;++j)
        {
            int m;
            cin >> m;
            int sum =0;
            for(int k = 0;k <m;++k)
            {
                int a;
                cin >> a;
                sum += a;
            }
            cout << sum << endl;
            if(j!=n-1)
                cout <<endl;
        }
    }
    return 0;
}
