#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"How many number you want to enter: ";
    cin>>number;

    int arr[number];

    for(int i = 0 ; i  < number ; i++)
    {
        cin>>arr[i];
    }

    int count = 0;
    int final[10];

    for(int i = 1 ; i  < number ; i++)
    {
        if((arr[i] > arr[i-1]) && (arr[i] > arr[i+1]))
        {
            final[count] = arr[i];
            count++;
        }
    }

    if(count == 0)
    {
        cout<<"NO peak Found";
    }

    for(int x = 0 ; x < count ; x++)
    {
        cout<<final[x]<<" ";
    }
}