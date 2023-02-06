#include <iostream>
using namespace std;
main()
{
    int length;
    cout <<"enter length of array:";
    cin >> length;
    int arr[length];
    for(int j=0;j<length;j++)
    {
        cout <<"enter a array element";
        cin >> arr[j];
    }
    int quantity;
    cout <<"enter how many times you want change:";
    cin >> quantity;
    for(int dx=0;dx<length;dx++)
    {
        if(arr[dx]%2==0)
        {
            arr[dx]=arr[dx]+(quantity*(-2));
        }
        else
        {
            arr[dx]=arr[dx]+(quantity*2);
        }
    }
    for(int dx=0;dx<length;dx++)
    {
        cout <<"change in element of array is:"<< arr[dx] << endl;
    }
}
