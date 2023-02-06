#include <iostream>
using namespace std;
main()
{
    string name;
    cout <<"enter a string:";
    getline(cin,name);
    int store;
    store=name.length();
    if(store%2==0)
    {
        cout <<"true";
    }
    else
    {
        cout <<"false";
    }
}