//Naive solution of maxAppearing element in ranges
/*
#include<iostream>
using namespace std;

int maxAppear(int left[],int right[],int n){
     //made freq arr of size 100
     int freq[100]={0};
     //Traversing through all ranges
     for(int i=0;i<n;i++){
        for(int j=left[i];j<=right[i];j++){
            //E.g-- 1 to 5,2 to 4
            freq[j]=freq[j]+1;//increasing freq of that ele in freq arr
        }
     }

     int res=0;   
     for(int i=1;i<100;i++){
        if(freq[i]>freq[res]){
            res=i;//updating res 
        }
     }
     return res;


}


int main(){
    int left[]={1,2};
    int right[]={5,4};
    int n=2;
    cout<<maxAppear(left,right,n);
}
*/
/*
#include<iostream>
using namespace std;

int MaxAppear(int left[],int right[],int n){
    int freq[100]={0};
    //traversing all ranges
    for(int i=0;i<n;i++){
        for(int j=left[i];j<=right[i];j++){
            // from 1 to 5,from 2 to 4--1,2,3,4,5 and 2,3,4-----------
            freq[j]=freq[j]+1; //incrementing that no position in freq arr
        }
    }
    int res=0;
    for(int i=0;i<100;i++){
        if(freq[i]>freq[res]){
            res=i;
        }
    }
    return res;
}



int main(){
    int left[]={1,2};
    int right[]={5,4};
    int n=2;
    cout<<MaxAppear(left,right,n);
}
*/

//MaxAppearing Element--Efficient solution
/*
1)Traverse through all ranges and mark begin and ending in freq
2)do prefix sum in freq[] arr
3)return max
*/

//3.50--try without look
#include<iostream>
using namespace std;

int maxAppear(int left[],int right[],int n){
    int freq[101]={0};
    //traversing throufg all ranges
    for(int i=0;i<n;i++){
        freq[left[i]]++;
        freq[right[i]+1]--;
    }

    int res=0;
    for(int i=1;i<100;i++){
        freq[i]=freq[i-1]+freq[i];  //doing prefix sum
        if(freq[i]>freq[res]){
            res=i;
        }
    }
    return res;
}

int main(){
    int left[]={1,2,4};
    int right[]={4,5,7};
    int n=3;
    cout<<maxAppear(left,right,n);
    return 0;
}