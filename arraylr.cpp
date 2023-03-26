/*
#include<iostream>
using namespace std;

void lRotateOne(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n;i++){
        arr[i-1]=arr[i];

    }
    arr[n-1]=temp;

}
//main function
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before applying function:"<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    
    lRotateOne(arr,n);
    cout<<"After Rotating"<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
    */
    #include<iostream>
    using namespace std;

    void lRotateArr(int arr[],int n){
        int temp=arr[0];
        for(int i=1;i<n;i++){
            arr[i-1]=arr[i];
        }
        arr[n-1]=temp;

    }

    int main(){
        int arr[]={1,2,3,4,5};
        int n=sizeof(arr)/sizeof(arr[0]);

        cout<<"Before applying function"<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        
        cout<<"After applying function"<<endl;
        lRotateArr(arr,n);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        return 0;

        

    }
    




