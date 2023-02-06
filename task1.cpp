#include <iostream>
using namespace std;
main()
{
   
    string fruit[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};
    string enterfruit;
    cout <<"enter name of fruit:" << endl;
    getline(cin,enterfruit);
    int quantity;
    cout << "how much quantity you want:";
    cin >> quantity;
    int total;
    for(int j=0;j<4;j++)
    {
        if(enterfruit==fruit[j])
        {
         total=(price[j]*quantity);
         cout << total;
        }
}
}