//Naive solution--to calculate max even-odd subarr
#include<iostream>
using namespace std;

int lEOSubarray(int arr[],int n){
        int ans=1;
        for(int i=0;i<n;i++){
            int cnt=1;
            for(int j=i+1;j<n;j++){
                if(arr[j-1]%2==0 && arr[j]%2!=0 || arr[j-1]%2!=0 && arr[j]%2==0){
                     cnt++;
                }
                else{
                    break;
                }
                
            }
          ans=max(ans,cnt);  
        }
        if(ans==1){
                return 0;
            }
            
         return ans;
            
}


int main(){
    int arr[]={1,2,3,4,5,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<lEOSubarray(arr,n);
    return 0;

}