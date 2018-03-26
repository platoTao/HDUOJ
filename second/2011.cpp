#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
      for(int i=0;i<n;++i)
      {
          int m;
          cin >> m;
          double sum = 0;
          for(int j =1;j<=m;j++)
          {
              double a = 1.0 /j;
              if(j%2==0)
                a *= -1;
              sum += a;
          }
          cout << setiosflags(ios::fixed) << setprecision(2);
          cout << sum << endl;
      }

    }
    return 0;
}
