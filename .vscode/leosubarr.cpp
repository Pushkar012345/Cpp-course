/*
#include<iostream>
using namespace std;

int maxEvenOdd(int arr[],int n){
    if(n==0){
        return 0;
    }
    int maxLength=0;
    int currLen=1;
    for(int i=1;i<n;i++){
        //everytime we check if prev ele has opp
        //even or odd nature or not.
        if(arr[i]%2!=arr[i-1]%2){
            currLen++;
        }
        else{
            maxLength=max(maxLength,currLen);
            //reset val when pattern is broken
            currLen=1;
        }
    }

    if(maxLength==1){
        return 0;
    }
    return maxLength;
}




int main(){
    int arr[]={1,2,3,4,5,3,7,2,9,4};
    //longest subarr should be 1 2 3 4 5
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The length of longest subarr of even and odd is:"<<endl;
    cout<<maxEvenOdd;
    return 0;
}
*/

#include<iostream>
using namespace std;

int maxEvenOdd(int arr[],int n){
    if(n==0){
        return 0;
    }
     int maxLength=0;
     int currLength=1;
     for(int i=1;i<n;i++){
        if(arr[i]%2!=arr[i-1]%2){
            currLength++;
        }
        else{
            maxLength=max(maxLength,currLength);
            currLength=1;
        }
     }
     if(maxLength==1){
        return 0;
     }
     return maxLength;

}




int main(){
    int arr[]={1,2,3,4,5,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Len of max EVenOdd subarr is:"<<endl;
    cout<<maxEvenOdd(arr,n);
    return 0;
}
