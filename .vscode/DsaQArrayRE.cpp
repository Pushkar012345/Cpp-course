//-----------Naive solution-6.00------------------------

#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rearrange(int arr[],int n){
    //1st step--increase all values-
    //get old and new values
    for(int i=0;i<n;i++){
        arr[i]=arr[i]+(arr[arr[i]]%n)*n;
    }
    //2nd for loop:-divide all values by n
    //get all new values
    for(int i=0;i<n;i++){
        arr[i]=arr[i]/n;
    }
}
 


int main(){
    int arr[]={3,2,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Given array is:"<<endl;
    printArray(arr,n);
    
    rearrange(arr,n);

    cout<<"Modified array is:"<<endl;
    printArray(arr,n);
}


