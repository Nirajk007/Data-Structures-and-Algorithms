#include<iostream>
using namespace std;

int linearSearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[]={10,25,36,47,52,63,74};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key;
    
    cout<<"Enter the element to search: ";
    cin>>key;

    int result=linearSearch(arr,size,key);
     if(result!=-1)
     {
        cout<<"Element found at the index: "<<result<<endl;
     }
     else
     {
      cout<<"Element not found!"<<endl;
     }
 
     return 0;
}