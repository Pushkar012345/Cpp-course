//naive solution--prefix sum
/*
#include<iostream>
using namespace std;

int getSum(int arr[],int n,int l,int r){
    int res=0;
    for(int i=l;i<=r;i++){
        res=res+arr[i];
    }
    return res;
}



int main(){
    int arr[]={2,8,3,9,6,5,4};
    int n=7;
    cout<<getSum(arr,n,0,3);
    return 0;
}
*/
/*Effective solution--
  1)precompute prefix sum arr
  2)getSum(l,r)---
  a)if l=0,Psum[r]
  b)otherwise
    pSum[r]-pSum[l]
*/
/*
#include<iostream>
using namespace std;

int getSum(int arr[],int n,int l,int r){
    int Ps[n];
    Ps[0]=arr[0];
    for(int i=1;i<n;i++){
        Ps[i]=Ps[i-1]+arr[i];
    }
      if(l==0){
        return Ps[r];
      }
      return Ps[r]-Ps[l-1];
}

int main(){
    int arr[]={2,8,3,9,6,5,4};
    int n=7;
    int l,r;

    cout<<getSum(arr,n,0,2);
    return 0;
}
*/

#include<iostream>
using namespace std;

int getSum(int arr[],int n,int l,int r){
    //----------precompute prefix sumArr
    int Ps[n];
    Ps[0]=arr[0];
    for(int i=1;i<n;i++){
        Ps[i]=Ps[i-1]+arr[i];
    }
    //----------------------------
    //-----getSum------------------
    if(l==0){
        return Ps[r];
    }
    return Ps[r]-Ps[l-1];
}



int main(){
    int arr[]={2,8,3,9,6,5,4};
    int n=7;
    int l,r;
    cout<<getSum(arr,n,0,1);
    return 0;
}