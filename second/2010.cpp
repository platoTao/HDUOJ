#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        int counter = 0;
        for(int i = m;i<=n;++i)
        {
            int a,b,c;
            a = i % 10;
            b = i / 10 % 10;
            c = i / 100;
            int total = pow(a,3)+pow(b,3)+pow(c,3);
            if(total==i){
                if(counter>0)
                    cout << " ";
                cout << i;
                ++counter;
            }
        }
        if(counter==0)
            cout << "no";
        cout << endl;
    }
    return 0;
}
