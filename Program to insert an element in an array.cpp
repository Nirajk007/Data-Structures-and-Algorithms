#include<iostream>
using namespace std;

int main()
{
    int size, position,element;

    cout<<"Enter the size of the array :";
    cin>>size;

    int arr[size + 1];

    cout<<"Enter the elements of the array:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element to insert :";
    cin>>element;
    cout<<"Enter the position (1 to"<<size + 1<<"):";
    cin>>position;

    if(position<1 || position > size + 1)
    {
        cout<<"Invalid position !"<<endl;
        return 1;
    }

    for(int i = size; i >= position ; i--)
    {
        arr[i] = arr [i-1];
    }

    arr [position -1] = element;
    size++;

    cout<<"Array after insertion :";
    for(int i = 0; i<size ;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;

}