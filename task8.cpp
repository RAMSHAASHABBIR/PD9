#include <iostream>
using namespace std;
main()
{
    int length=0;
    int counter=0;
    int counter1=0;
    int result=0;
    cout << "enter length you want:";
    cin >> length;
    string arr[length];
    for(int dx=0;dx<length;dx++)
    {
        cout <<"enter element of array:";
        cin >> arr[dx];
    }
    for(int jx=0;jx<length;jx++)
    {
        if(arr[jx]!=arr[(jx+1)])
        {
            counter++;
        }
    }
    result=(length*2)+(counter-1);
    cout << result;
}