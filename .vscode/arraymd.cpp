/*
#include<bits/stdc++.h>
using namespace std;

int maxDiff(int arr[],int n){
    int max_diff=arr[1]-arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]-arr[i]>max_diff){
                max_diff=arr[j]-arr[i];

            }
        }
    }
    return max_diff;
}





int main(){
    int arr[]={1,2,3,102};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Maximum diffrence is:"<<maxDiff(arr,n);
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

int maxDiff(int arr[],int n){
    int max_diff=arr[1]-arr[0];
    int min_element=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]-min_element>max_diff){
            max_diff=arr[i]-min_element;
        }
        if(arr[i]<min_element){
            min_element=arr[i];
        }
    }
}

//main function
int main(){
    int arr[]={1,2,90,10,110};
    int n=sizeof(arr)/sizeof(arr[0]);

    //function calling
    cout<<"Maximum difference is:"<<maxDiff(arr,n);

    return 0;
}