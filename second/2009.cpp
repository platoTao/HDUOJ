#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        double sum = 0;
        double a = n;
        if(m!=0)
            sum += a;
        for(int j = 1;j<m;j++)
        {
            sum += sqrt(a);
            a= sqrt(a);
        }
        cout<<setiosflags(ios::fixed)<<setprecision(2);
        cout << sum << endl;

    }
    return 0;
}
