#include<iostream>

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
    int a,b;
    while(cin >> a >> b)
    {
        int temp;
        if(a > b){
            temp = a;
            a = b;
            b = temp;
        }
        int mul2 = 0;
        int mul3 = 0;
        for(int i=a;i<=b;++i)
        {
            if(is_odd(i))
                mul3 += i*i*i;
            else
                mul2 += i*i;
        }
        cout << mul2 << " " << mul3 << endl;
    }
    return 0;
}
