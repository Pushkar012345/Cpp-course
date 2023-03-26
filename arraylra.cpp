/*
#include<iostream>
#include<cmath>
using namespace std;

void leftRotateOne(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];

    }
    arr[n-1]=temp;


}

void lRotate(int arr[],int d,int n){
    for(int i=0;i<d;i++){
        leftRotateOne(arr,n);

    }

}



int main(){
    int arr[]={1,2,3,4,5};
    int n=5,d=3;
    //int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Before function:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    lRotate(arr,d,n);
    cout<<"After function"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}
*/

//Efficient Solution
/*
#include<iostream>
#include<cmath>
using namespace std;

void lRotate(int arr[],int d,int n){
    //temp
    int temp[d];
    
    //first taken side those elements which have to remove
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }

    //shift all elements of prev arr which have to kept
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }

    for(int i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }

    

}





//main function
int main(){
    int arr[]={1,2,3,4,5};
    int n=5,d=2;
    //int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Before function:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    lRotate(arr,d,n);
    cout<<"After function"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
*/

#include<iostream>
using namespace std;

void lRotate(int arr[],int d,int n){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }

    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }

    for(int i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }
}


int main(){
     int arr[]={1,2,3,4,5};
    int n=5,d=2;
    //int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Before function:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    lRotate(arr,d,n);
    cout<<"After function"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}