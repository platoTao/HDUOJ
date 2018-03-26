#include<iostream>
#include<string>
#include<sstream>

using namespace std;

bool is_odd(int number)
{
    if(number%2==0)
        return false;
    else
        return true;
}

int main()
{
    int n;
    while(cin >> n)
    {
        int mult = 1;
        for(int i=0;i<n;++i)
        {
            int a;
            cin >> a;
            if(is_odd(a))
                mult *= a;
        }
        cout << mult << endl;
    }
    return 0;
}
