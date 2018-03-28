#include<iostream>

using namespace std;

int main()
{
    double mouth_close,total_close = 0.0;
    int i = 0;
    while(cin >> mouth_close)
    {
        total_close += mouth_close;
        if(++i == 12)
        {
            cout << "$" << total_close / 12 << endl;
            i = 0;
        }
    }
    return 0;
}
