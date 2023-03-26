#include<iostream>
using namespace std;

//creating req function
void leader(int arr[],int n){
   // bool flag=false;
    for(int i=0;i<n;i++){
        int j;
        for(j=i+1;j<n;j++){
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
    int arr[]={7,10,4,3,6,5,2};

    int n=sizeof(arr)/sizeof(arr[0]);

    //cout<<"Before function:"<<endl;
    //for(int i=0;i<n;i++){
    //    cout<<arr[i]<<" ";
    //}
    
    leader(arr,n);

    //cout<<"after function:"<<endl;
    //for(int i=0;i<n;i++){
    //    cout<<arr[i]<<" ";
    //}

}