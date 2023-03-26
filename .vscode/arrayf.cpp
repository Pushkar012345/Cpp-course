//best solution
#include<bits/stdc++.h>
using namespace std;

//function to print freq of each ele of the sorted arr
void printFreq(vector<int>&arr,int N){
    int freq=1;

    //to traverse the arr[]
    for(int i=1;i<N;i++){
        //If the curr ele is equal to prev ele
        if(arr[i]==arr[i-1]){
            //incre f
            freq++;
        }
        else{
            cout<<"Frequency of "<<arr[i-1]<<"is"<<freq<<endl;

            //reset freq
            freq=1;
        }
    
    }
}


int main(){
    vector<int> arr={1,1,1,2,3,3,5,5,8,8,8,9,9,10};
    int N=arr.size();

    //function call
    printFreq(arr,N);
    return 0;
}




