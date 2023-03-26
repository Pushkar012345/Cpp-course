#include<iostream>
#include<cmath>
using namespace std;

int remdups(int arr[],int n){
    //created temporary arr
    int temp[n];
    temp[0]=arr[0];

    int res=1;
    for(int i=1;i<n;i++){
        if(temp[res-1]!=arr[i]){
            temp[res]=arr[i];
            res++;
        }

    }
    for(int i=0;i<res;i++){
        arr[i]=temp[i];
    }
    return res;

}


int main(){
    int arr[]={10,20,20,30,30,30};
    cout<<"Before Removal"<<endl;
    int n;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //function
    n=remdups(arr,n);
    cout<<"After removal"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}