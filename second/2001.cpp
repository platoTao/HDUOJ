#include<iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main()
{
    double x1,y1,x2,y2;
    while(cin>>x1>>y1>>x2>>y2)
    {
        double distance = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
        cout<<setiosflags(ios::fixed)<<setprecision(2);
        cout << distance<<endl;

    }
    return 0;
}
