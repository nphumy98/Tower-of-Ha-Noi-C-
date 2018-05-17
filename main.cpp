#include <iostream>
#include<bits/stdc++.h>
//hehe
using namespace std;

ifstream f("data.in");
ofstream g("data.out");

void tower_of_Hanoi(int number, int original, int auxi, int destination);

int main()
{
    int number_of_disk;
    f>>number_of_disk;
    if (number_of_disk%2==0)
    {
        cout<<"even number"<<"\n";
    }
    else
    {
        cout<<"odd number"<<"\n";
    }
    tower_of_Hanoi(number_of_disk,1,2,3);
    char word[]="hello";
    printf("%s\n",word);
    printf("%c\n",word[4]);
    return 0;
}

void tower_of_Hanoi(int number,int original, int auxi, int destination)
{
        if (number==1)
        {
            cout<<original<<"===>"<<destination<<"\n";
        }
        else
        {
            tower_of_Hanoi(number-1,original, destination,auxi);
            cout<<original<<"===>"<<destination<<"\n";
            tower_of_Hanoi(number-1,auxi, original,destination);
        }


}
