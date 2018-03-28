#include<iostream>

using namespace std;

int main()
{
    int n,m;
    while (cin >> n >> m)
    {
        if (n==-1 && m==-1)
            break;
        int temp;
        if(n<m)
        {
            temp = n;
            n = m;
            m = temp;
        }
        temp = n % m;
        while(temp)
        {
            temp =  n % m;
            n = m;
            m = temp;
        }
        if(n == 1)
            cout << "YES" << endl;
        else
            cout << "POOR Haha" << endl;
    }

    return 0;
}
