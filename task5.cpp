#include <iostream>
using namespace std;
main()
{
    string same[4];
    for(int dx=0;dx<4;dx++)
    {
        cout <<"enter a string" << same[dx] << ":";
        getline(cin,same[dx]);
    }
    
        if(same[0]==same[1]&&same[1]==same[2]&&same[2]==same[3])
        {
            cout <<"True";
        }
        else
        {
            cout <<"False";

        }




}