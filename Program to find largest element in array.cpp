#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements:";
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];
     }
     
     int maxElement=arr[0];

     for(int i=1;i<n;i++)
     {
        if(arr[i]>maxElement)
        {
            maxElement=arr[i];
        }
     }

     cout<<"The Largest element is:"<<maxElement<<endl;

 return 0;
}