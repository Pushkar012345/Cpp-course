#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int size){
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }

}

void printreverse(int arr[],int start,int end){
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        int end=temp;
        start++;
        end--;
    }

} 


int main(){
    int arr[]={1,2,3,4,5};
    //sizeof arr
    int n=sizeof(arr)/sizeof(arr[0]);

    //to print original array
    printarray(arr,n);
    //to reverse an array
    printreverse(arr,0,n-1);

    printarray(arr,n);

    return 0;
}