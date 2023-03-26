#include<bits/stdc++.h>
using namespace std;

void reversearray(int arr[],int start,int end){
    

}


void printarray(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
    cout<<endl;
   }
}
//main function
int main(){
    int arr[]={1,2,3,4,5};
    //sizeof(arr)
    int n=sizeof(arr)/sizeof(arr[0]);
    //printing original array
    printarray(arr,n);

    //now printing reverse array
    reversearray(arr,0,n-1);
    cout<<"Reverse array is:"<<endl;
    printarray(arr,n);
}