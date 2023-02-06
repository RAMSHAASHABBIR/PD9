#include <iostream>
using namespace std;
main()
{
    int length;
    cout <<"enter a length:";
    cin >> length;
    int arr[length];
    int counter=0;
    int counter1=0;
    int counter2=0;
    int counter3=0;
    int store=0;
    int store1=0;
    for(int j=0;j<length;j++)
    {
        cout <<"enter no of array:";
        cin >> arr[j];
    }
     for(int j=0;j<length;j++)
     {
        if(arr[j]==7)
        {
            
            counter++;
        }
        else if(arr[j]!=7&&arr[j]<=9)
        {
           counter1++;
        }
        if(arr[j]!=7&&arr[j] > 9)
        {
            store1=arr[j]%10;
            store=arr[j]/10;
            
            if(store1==7||store==7)
            {
                counter++;
            }
            else if(arr[j]!=7&&store!=7)
            {
            counter1++;
            }
        }
     }
     if(counter>0)
     {
        cout << "boom";
     }
     else
     {
        cout <<"not found";
        
     }
      

    }


