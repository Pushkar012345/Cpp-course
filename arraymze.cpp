/*
#include<iostream>
using namespace std;

void moveToend(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                }

            }
        }

    }
}

int main(){
    int arr[]={1,2,0,0,0,3,0,4};
    int n=8;
    cout<<"Before function"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"After adding function"<<endl;
    moveToend(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/

//approach 2:-9.20
/*
#include<iostream>
using namespace std;

void moveToend(int arr[],int n){
    //initializing count to store value of non zero values
    int count=0;
    for(int i=0;i<n;i++){
        //while moving right if i not equal to zero
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }

    }
}

int main(){
    int arr[]={1,2,0,0,0,3,0,4};
    int n=8;
    cout<<"Before function"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"After adding function"<<endl;
    moveToend(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/
#include<iostream>
using namespace std;

void moveToend(int arr[],int n){
    //count initializing
    int count =0;
    //traversing
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}




int main(){
    int arr[]={1,2,0,0,1,0};
    cout<<"Before function"<<endl;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    moveToend(arr,n);
    cout<<"After function"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}