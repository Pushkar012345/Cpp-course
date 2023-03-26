/*
#include<iostream>
using namespace std;

int maxSum(int arr[],int n,int k){
     int res=0;
     
     for(int i=0;i+k-1<n;i++){
        int curr=0;
        for(int j=0;j<k;j++){
            curr=curr+arr[i+j];
            res=max(res,curr);
        }  
     }
     return res;
}



int main(){
    int arr[]={10,5,-2,20,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<maxSum(arr,n,k);
    return 0;
}
*/
/*
#include<iostream>
using namespace std;

int maxSum(int arr[],int n,int k){
     int res=0;
     
     for(int i=0;i+k-1<n;i++){
        int curr=0;
        for(int j=0;j<k;j++){
            curr=curr+arr[i+j];
            res=max(res,curr);
        }  
     }
     return res;
}


int main(){
    int arr[]={5,-10,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    cout<<maxSum(arr,n,k);
    return 0;
}
*/

//---sliding window approach---------
//try2:--6.15
#include<iostream>
using namespace std;

int maxSum(int arr[],int n,int k){
    if(n<k){
        return -1;
    }

    //sum of first window of size k
    
    int window_sum=0;
    for(int i=0;i<k;i++){
        window_sum=window_sum+arr[i];
    }

    //compute sum of remaining windows by removing 1st and adding last element'
    int resmax=window_sum;
    for(int i=k;i<n;i++){
        window_sum+=(arr[i]-arr[i-k]);
        resmax=max(resmax,window_sum);
    }
    return resmax;
}




int main(){
    int arr[]={5,-10,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    cout<<maxSum(arr,n,k);
    return 0;
}