#include<iostream>
using namespace std;

void printLeaders(int arr[],int n){
    int max_from_right=arr[n-1];
    cout<<max_from_right<<" ";

    //traverse from last to 1st
    for(int i=n-2;i>=0;i--){
        if(max_from_right<arr[i]){
        max_from_right=arr[i];
        cout<<max_from_right<<" ";
        }
        
    }
}



//main function
int main(){
    int arr[]={16,17,4,3,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    printLeaders(arr,n);
    return 0;
}