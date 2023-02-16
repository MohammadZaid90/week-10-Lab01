#include<iostream>
using namespace std;
int area(int box);

int volume[100];

main()
{
    int box;
    cout<<"enter the number of boxes:";
    cin>>box;
    int size=box*3;
    volume[size];

    for(int idx=0;idx<size;idx++)
    {
        cout<<"enter the number:";
        cin>>volume[idx];
    }
    int sum=area(size);
    cout<<sum;
}
int area(int box)
{
    int i=0,cal1=0,cal2=0;
    while(i<box)
    {
        cal1=volume[i]*volume[i+1]*volume[i+2];
        cal2=cal2+cal1;
        i=i+3;
    }
   return cal2;
}