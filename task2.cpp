#include <iostream>
using namespace std;
main()
{
    string entermovie;
    string movies[5] = {"gladators","starwars","termnator", "takinglives", "tombrider"};
    cout << "enter movie name:";
    cin >> entermovie;
    int store;
    float discount = 0;
    float discount1 = 0;
    int counter=0;
    int counter1=0;
    for (int j = 0; j < 5; j++)
    {
        if (entermovie == movies[j])
        {

            store = j;
            if (store % 2==0)
            {
                discount = 0.1 * 500;
                discount=500-discount;
                counter++;

            }
            else
            {
                discount1 = 0.05 * 500;
                discount1=500-discount1;
                counter1++;
           }
        }
    }
    if(counter>0)
    cout << discount;
    if(counter1>0)
    cout << discount1;
}
