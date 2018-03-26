#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    double a;
    while(cin>>a)
    {
        if(a<0)
            a -= 2*a;
        cout<<setiosflags(ios::fixed)<<setprecision(2);
        cout << a << endl;

    }
    return 0;
}
