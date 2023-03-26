//naive solution
/*
Traverse every ele,
for every ele,count how many times it appears in arr
if count>n/2 return index
otherwise return -1
*/
/*
#include<iostream>
using namespace std;

int findMajority(int arr[],int n){
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
         if(count>n/2){
            return i;
        }
   
        
    }
    return -1;
    
}

int main(){
    int arr[]={8,7,6,8,6,6,6,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findMajority(arr,n);
    return 0;
}
*/

//Efficient solution
//morres moting algo
#include<iostream>
using namespace std;

//function to find cand for majority
int findCandidate(int arr[],int n){
    int maj_index=0,count=1;
    for(int i=1;i<n;i++){
        if(arr[maj_index] == arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            maj_index=i;
            count=1;
        }
    }
    return arr[maj_index];
}

//function to find if candi occurs more than n/2 times
bool isMajority(int arr[],int n,int cand){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==cand){
            count++;
        }
    
    }
    if(count>n/2){
        return 1;
    }
    else{
        return 0;
    }
}





//function to print majority element
void printMajority(int arr[],int n){
    //find candidate for majority
    int cand = findCandidate(arr,n);
     //print candi if it is majority
     if(isMajority(arr,n,cand)){
        cout<<" "<<cand<<endl;
     }
     else{
        cout<<"No majority";
     }
}


int main(){
    int arr[]={1,3,3,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    //function calling
    printMajority(arr,n);
}