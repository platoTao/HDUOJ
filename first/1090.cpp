#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        for(int j=0;j<n;j++)
        {
            int a,b;
            cin >> a >> b;
            cout << a+b << endl;
        }
    }
    return 0;
}
