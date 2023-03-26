#include<iostream>
using namespace std;

//C++ function to print leaders in an array
void printLeaders(int arr[],int n){
    for(int i=0;i<n;i++){
        int j;
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                break;
            }
        }

        if(j==n){
            cout<<arr[i]<<" ";
        }
    }
}



int main(){
    int arr[]={16,17,4,3,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    printLeaders(arr,n);
    return 0;
}