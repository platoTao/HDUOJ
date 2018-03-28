#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    int n;
    map<string,string> region{ {"33","Zhejiang"},
                               {"11","Beijing"},
                               {"71","Taiwan"},
                               {"81","Hong Kong"},
                               {"82","Macao"},
                               {"54","Tibet"},
                               {"21","Liaoning"},
                               {"31","Shanghai"}
                             };
    while (cin >> n)
    {
        while(n--)
        {
            string id;
            cin >> id;
            auto pro = id.substr(0,2);
            auto year = id.substr(6,4);
            auto mouth = id.substr(10,2);
            auto day = id.substr(12,2);
            auto s = id.substr(17);
            cout << "He/She is from " << region.find(pro)->second << ",and his/her birthday is on " <<
                 mouth << "," << day << "," << year << " based on the table." << endl;
        }
    }
    return 0;
}
