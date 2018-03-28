#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    string a,b;
    while(cin >> a >> b)
    {
        int n1=0,n2=0;
        for(int i = a.size()-1;i>=0;--i)
        {
            if (a[i]>64&&a[i]<=90)
                n1 += (a[i]-55) * pow(16,a.size()-1-i);
            else if (a[i]>96)
                n1 += (a[i]-87) * pow(16,a.size()-1-i);
            else if (a[i]<58)
                n1 += (a[i]-'0') * pow(16,a.size()-1-i);

        }
        for(int i = b.size()-1;i>=0;--i)
        {
            if (b[i]>64&&b[i]<=90)
                n2 += (b[i]-55) * pow(16,b.size()-1-i);
            else if (b[i]>96)
                n2 += (b[i]-87) * pow(16,b.size()-1-i);
            else if (b[i] < 58)
                n2 += (b[i]-'0') * pow(16,b.size()-1-i);
        }
        cout << n1+n2 << endl;

    }
    return 0;
}
