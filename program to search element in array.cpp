#include<iostream>
using namespace std;

int searchElement(int arr[],int size,int key)
{
    for(int i =0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }

        return -1;
    }
}

int main()
{
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key;

    cout<<"Enter the element to search:";
    cin>>key;

    int result=searchElement(arr,size,key);
     
     if(result!=-1)
     {
        cout<<"Element found at index:"<<result<<endl;

     }
     else 
     {
        cout<<"Element not found in array:"<<endl;
     }

     return 0;
}