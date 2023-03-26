#include<iostream>
#include<cmath>
using namespace std;

int remdups(int arr[],int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[res-1]!=arr[i]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;

}


int main(){
    int arr[]={10,20,20,30,30,30};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Before removal"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    
    n = remdups(arr,n);
    cout<<"After Removal"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;


}