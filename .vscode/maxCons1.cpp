//maximum consecutive one--Naive solution
/*---Naive solution
#include<iostream>
using namespace std;

int maxConsecutiveOnes(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i;j<n;j++){
            if(arr[j]==1){
                count++;
            }
            else{
                break;
            }
        
        
        }
        res=max(res,count);
    }
    return res;
}


int main(){
    int arr[]={0,1,1,1,0,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum consecitive ones"<<endl;
    cout<<maxConsecutiveOnes(arr,7);
    return 0;

}
*/
/*--Efficient solution----*/
#include<iostream>
using namespace std;

int maxConsecutiveOnes(int arr[],int n){
    int res=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            break;
        }
        else{
            

        }
    }
}

int main(){
    int arr[]={0,1,1,1,0,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum consecitive ones"<<endl;
    cout<<maxConsecutiveOnes(arr,7);
    return 0;
}