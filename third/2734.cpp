#include<iostream>
#include<string>

using namespace std;

int main()
{
    string line;
    while(getline(cin,line))
    {
        if(line == "#")
            break;
        int j = 1,checksum = 0 ;
        for(const auto i:line)
        {
            if(i >= 65 && i <= 90)
                checksum += j * (i - 64);
            ++j;
        }
        cout << checksum << endl;
    }
    return 0;
}
