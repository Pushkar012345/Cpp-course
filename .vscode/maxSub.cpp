/*---------Naive solution
#include<iostream>
using namespace std;

int maxSub(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        int curr=0;
        for(int j=i;j<n;j++){
            curr=curr+arr[j];
        }
        res=max(curr,res);
    }
    return res;
}




int main(){
    int arr[]={3,-1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Finding max Subarray"<<endl;
    cout<<maxSub(arr,n);
    return 0;
}

*/
//Efficient solution
#include<iostream>
using namespace std;

int maxSum(int arr[],int n){
   int res=0;
   int maxEnding=arr[0];
   for(int i=1;i<n;i++){
    maxEnding=max(maxEnding+arr[i],arr[i]);
     res=max(maxEnding,res);  
   }
   return res;
}


int main(){
    int arr[]={-2,3,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxSum(arr,n);
    return 0;
}