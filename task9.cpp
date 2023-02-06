#include <iostream>
using namespace std;
main()
{
    string dance[10]={"shimmy","shake","pirouette","slide","boxstep","headspin","dasado","pop","lock","arabesque"};
    int arr[4];
    for(int x=0;x<4;x++)
    {
        cout <<"enter no for dance move";
        cin >> arr[x];
    }
    for(int dx=0;dx<4;dx++)
    {
        arr[dx]=arr[dx]+(dx++);
       
        if(arr[dx]>9)
        {
            arr[dx]=arr[dx]%10;
            arr[dx]=arr[dx]/10;
        }

    }
    int dx=0;
    while(dx<4)
    {
        for(int mx=0;mx<=9;mx++)
        {
            if(arr[dx] == mx)
            {
                cout << dance[mx] << endl;
            }
        }
        dx++;
    }
}