#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

#define PI 3.1415927
#define a 4.0/3
int main()
{
    double r;
    while(cin>>r)
    {
        double V = a * PI * pow(r,3.0);
        cout<<setiosflags(ios::fixed)<<setprecision(3);
        cout << V << endl;

    }
    return 0;
}
