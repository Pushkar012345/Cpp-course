#include<iostream>
using namespace std;

void rotateArray(int arr[],int n,int d){
     //if d exceeds limit of n no need to rotate all
     d=d%n;
     reverse(arr,0,d-1);
     reverse(arr,d,n-1);
     reverse(arr,0,n-1);
}

int reverse(int arr[],int low,int high){
    while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}

int main(){
    int arr[]={3,1,2,4};  
    int n=4;
    int d;
    rotateArray(arr,n,2);
}