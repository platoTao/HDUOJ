#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<char> v1 = {'E','D','C','B','A'};
    int score;
    while(cin>>score)
    {
        if(score<=100&&score>=60)
            cout << v1[(score-50)/10] << endl;
        else if(score>=0&&score<60)
            cout << v1[0] <<endl;
        else
            cout << "Score is error!" << endl;
    }

    return 0;
}
