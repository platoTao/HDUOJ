#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        getchar();
        for(int i=0;i<n;++i)
        {
            string text;
            getline(cin,text);
            stringstream ss;
            ss << text;
            string word;
            int index = 0;
            while(text[index] == ' '&&text[index++] !='\0')
                cout << " ";
            while(ss >> word)
            {

                for(int j = word.size()-1;j>=0;--j)
                    cout << word[j];
                index += word.size();
                while(text[index] == ' '&&text[index++] !='\0')
                    cout << " ";
            }
            while(text[index] == ' '&&text[index++] !='\0')
                cout << " ";
            cout <<endl;
        }
    }
    return 0;
}
