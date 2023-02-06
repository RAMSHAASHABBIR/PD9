#include <iostream>
using namespace std;
main()
{
    int count=0;
    string s1;
    cout <<"enter string 1:";
    getline(cin,s1);
    string s2;
    cout <<"enter string 2:";
    getline(cin,s2);
    int jx=0;
    while(jx<4)
    {
    for(int dx=0;dx<4;dx++)
    {
        if(s1[jx]==s2[dx])
        {
            count++;
            break;
        }
    }
    jx++;
    }
    cout << count;
}