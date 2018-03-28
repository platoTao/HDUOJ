#include<iostream>

using namespace std;

bool special_digit(int n)
{
    int sum1 =0,sum2 = 0,sum3 =0;
    int a = n;
    while (a != 0)
    {
        sum1 +=  a % 10;
        a /= 10;
    }

    a = n;
    while ( a != 0)
    {
        sum2 += a%16;
        a /= 16;
    }

    a = n;
    while ( a != 0)
    {
        sum3 += a%12;
        a /= 12;
    }
    if(sum1==sum2&&sum2==sum3)
        return true;
    return false;
}
int main()
{
    for(int i = 1000;i<10000;++i)
    {
        if(special_digit(i))
            cout << i << endl;
    }
    return 0;
}
