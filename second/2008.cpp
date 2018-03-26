#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int zeros = 0;
        int negative_number = 0;
        int positive_number = 0;

        for(int i=0;i<n;++i)
        {
            double number;
            cin >> number;
            if(number==0.0)
                ++zeros;
            else if(number >0.0)
                ++positive_number;
            else
                ++negative_number;
        }
        cout << negative_number << " " << zeros << " " << positive_number << endl;
    }
    return 0;
}
