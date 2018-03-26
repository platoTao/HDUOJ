#include<iostream>

using namespace std;

bool is_triangle(double a,double b,double c)
{
    if (a>=(b+c))
        return false;
    else if (b>=(a+c))
        return false;
    else if (c>=(a+b))
        return false;
    else
        return true;
}
int main()
{
    int n;
    while(cin>>n)
    {
      for(int i=0;i<n;++i)
      {
          double a,b,c;
          cin >> a >> b >> c;
          if(is_triangle(a,b,c))
            cout << "YES" << endl;
          else
            cout << "NO" <<endl;
      }

    }
    return 0;
}
