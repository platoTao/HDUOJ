#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        if(n==0)
            break;
        int sum =0;
        for(int j=0;j<n;j++)
        {
            int a;
            cin >> a;
            sum += a;
        }
        cout << sum << endl;
    }
    return 0;
}
