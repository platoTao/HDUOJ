
#include<iostream>
#include<string>
#define Max 1001
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i = 1;i<=n;++i)
        {
            string s1,s2;
            cin >> s1 >> s2;
            int sum[Max];
            for(int j =0;j<Max;++j)
                sum[j] = 0;
            size_t len1 = s1.size();
            size_t len2 = s2.size();
            int next = 0;
            int index = 0;
            while(len1!=0&&len2!=0)
            {
                int a,b;
                a = s1[--len1] - '0';
                b = s2[--len2] - '0';
                sum[index++] = (a+b+next) % 10;
                next = (a+b+next) / 10;
            }

            while(len1==0&&len2!=0)
            {
                int b;
                b = s2[--len2] - '0';
                sum[index++] = (b+next) % 10;
                next = (b+next) / 10;
            }

            while(len1!=0&&len2==0)
            {
                int a;
                a = s1[--len1] - '0';
                sum[index++] = (a+next) % 10;
                next = (a+next) / 10;
            }

            if(next!=0)
                sum[index] = next;
            int j = index;
            for(;sum[j]==0;--j)
                ;
            cout << "Case " << i <<":" << endl;
            cout << s1 << " + " << s2 << " = ";
            for(;j>=0;--j)
                cout << sum[j];
            if(s1.size()==1&&s2.size()==1&&s1[0]=='0'&&s2[0]=='0')
                cout << 0;
            cout << endl;
            if(i!=n)
                cout << endl;
        }
    }
    return 0;
}
