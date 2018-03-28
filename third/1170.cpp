#include<iostream>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0;i<n;++i)
        {
            int a,b;
            char opt;
            cin >> opt >> a >> b;
            switch(opt)
            {
            case '+':
                printf("%d\n",a+b);
                break;
            case '-':
                printf("%d\n",a-b);
                break;
            case '*':
                printf("%d\n",a*b);
                break;
            case '/':
                {

                 if(a % b != 0)
                    printf("%.2f\n",a*1.0/b);
                 else
                    printf("%d\n",a/b);
                 break;
                }
            }
        }
    }
    return 0;
}
