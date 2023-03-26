/*#include<iostream>
#include<cmath>
using namespace std;
//define search function
int search(int arr[],int n,int x){
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;

}

//main function
int main(){
    int arr[]={1,2,3,4,5};
    int x=3;
    
    cout<<search(arr,5,x);
    
}
*/

//insertion and traversal code

#include<iostream>
#include<cmath>
using namespace std;

int insert(int arr[],int n,int x,int pos,int cap)
{
    if(n==cap){
        return n;
    }
    int idx=pos-1;
    for(int i=n-1;i>=idx;i--)
    {
        arr[i+1]=arr[i];
    }

    arr[idx]=x;
    return n+1;


       
}

int main(){
    int n=3;
    int x=7,pos=2,cap=5;
    int arr[5]={1,2,3};
    cout<<"Before inserting:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    n=insert(arr, n, x, pos, cap);
    cout<<"After inserting:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }


}