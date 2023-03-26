//Naive solution---equillibrium point
/*
#include<iostream>
using namespace std;

bool ePoint(int arr[],int n){
    //traverse all
    
    for(int i=0;i<n;i++){
        int ls=0,rs=0;
        //computing ls
        for(int j=0;j<i;j++){
            ls=ls+arr[j];
        }
        //compute rs
        for(int k=i+1;k<n;k++){
            rs=rs+arr[k];
        }

         if(ls==rs){
        return true;
    }
    else{
        return false;
    }
           
    }
   
    
}

int main(){
    int arr[]={4,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<ePoint(arr,n);
    return 0;
}
*/
/*
#include<iostream>
using namespace std;

bool ePoint(int arr[],int n){
    for(int i=0;i<n;i++){
        int ls=0,rs=0;
        //computing ls
        for(int j=0;j<i;j++){
            ls=ls+arr[j];
        }
        //computing rs
        for(int k=i+1;k<n;k++){
            rs=rs+arr[k];
        }

        if(ls==rs){
            return true;
        }
        else{
            return false;
        }
    }
}


int main(){
    int arr[]={4,2,-2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<ePoint(arr,n);
    return 0;
}
*/
//Efficient solution
#include<iostream>
using namespace std;

int ePoint(int arr[],int n){
    int rs=0;
    for(int i=0;i<n;i++){
        rs=rs+arr[i];
    }

    int ls=0;
    for(int i=0;i<n;i++){
        rs=rs-arr[i];
        

        if(ls==rs){
            return true;
        }
        ls=ls+arr[i];
    }
    return false;
}



int main(){
    int arr[]={4,2,-2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<ePoint(arr,n);
    return 0;
}