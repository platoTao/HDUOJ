#include<iostream>
#include<string>
#include<sstream>

using namespace std;

bool is_leap_year(int year)
{
    if(year%4!=0)
        return false;
    else if(year%100!=0)
        return true;
    else if(year%400!=0)
        return false;
    else if(year%3200!=0)
        return true;
    else
        return false;
}

int main()
{
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string date;
    while(cin >> date)
    {
        stringstream ss;
        int year,mouth,day;
        char c;
        ss << date;
        ss >> year >> c >> mouth >> c >> day;
        int total_days = 0;
        for(int i=0;i<mouth-1;++i)
        {
            total_days += days[i];
            if(i==1&&is_leap_year(year))
                ++total_days;
        }
        total_days += day;
        cout << total_days << endl;
    }
    return 0;
}
