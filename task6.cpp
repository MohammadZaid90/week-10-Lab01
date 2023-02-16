#include <iostream>
using namespace std;


int o_arr[10];
const int arr_length = sizeof(o_arr) / sizeof(o_arr[0]);

int ascending(int s);

main()
{
    int small_idx;
    int temp;

    cout<<"Enter the values in the Array: "<<endl;

    for(int idx = 0; idx < arr_length; idx++)
    {
        cin>>o_arr[idx];
    }

    for (int idx = 0; idx < arr_length; idx++)
    {
        small_idx = ascending(idx);
        temp = o_arr[small_idx];
        o_arr[small_idx] = o_arr[idx];
        o_arr[idx] = temp;
    }

    for (int idx = 0; idx < arr_length; idx++)
    {
        cout<<o_arr[idx]<<" ";
    }
}

int ascending(int s)
{
    int small = 1000000;
    int small_index;
    for (int idx = s; idx < arr_length; idx++)
    {
        if (small > o_arr[idx])
        {
            small = o_arr[idx];
            small_index = idx;
        }
    }
    return small_index;
}