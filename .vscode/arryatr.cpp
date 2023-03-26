/*Naive Approach
#include<bits/stdc++.h>
using namespace std;

int getWater(int arr[],int n){
    //initializing res
    int res=0;
    //traversing except first and last block

    for(int i=1;i<n-1;i++){

        //--------------------
        //initializing lMax
        int lMax=arr[i];
        //taking back ele
        for(int j=0;j<i;j++){
            lMax=max(arr[j],lMax);
        }
        //---------------------
        //initializing RMax;
        int RMax=arr[i];
        for(int j=i+1;j<n;j++){
            RMax=max(RMax,arr[j]);

        }
        //---------------------
        res=res+(min(lMax,RMax)-arr[i]);
    }
    return res;
}

int main(){
    int arr[]={0,0,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Amount of water is:"<<endl;
    cout<<getWater(arr,n);
    

}
*/
/*
#include<bits/stdc++.h>
using namespace std;

int getWater(int arr[],int n){
    int res=0;
    
    for(int i=1;i<n-1;i++){
        //------------------------
        int lMax=arr[0];
        for(int j=0;j<i;j++){
            lMax=max(lMax,arr[i]);
        }
        //----------------------
        int rMax=arr[n-1];
        for(int j=n-2;j>=i+1;j--){
            rMax=max(rMax,arr[i]);
        }
        //----------------------
        res=res+(min(lMax,rMax)-arr[i]);

    }
    return res;
}


int main(){
    int arr[]={3,0,1,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<getWater(arr,n);
    return 0;
}
*/

/*
//----Efficient Solution----------------
#include<bits/stdc++.h>
using namespace std;

int getWater(int arr[],int n){
    //res initilize
    int res=0;
    //leftMax,rMax initialize
    int lMax[n];
    int rMax[n];

    //-------------------------------------------------------------------------
    //lMax[0] value give
     lMax[0]=arr[0];
     for(int i=0;i<n;i++){
        lMax[i]=max(arr[i],lMax[i-1]);
     }
     //------------------------------------------------------------------------
     rMax[n-2]=arr[n-2];
     for(int i=n-2;i>=0;i--){
        

     }

}



int main(){
    int arr[]={5,0,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    //function calling
    cout<<getWater(arr,n);
    return 0;
}
*/

//--Efficient solution
#include<bits/stdc++.h>
using namespace std;

int getWater(int arr[],int n){
    
}



int main(){
    int arr[]={5,0,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<getWater(arr,n);
    return 0;

}

