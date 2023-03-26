/*
#include<bits/stdc++.h>
using namespace std;

int getlargest(int arr[],int n)
{
   //traverse through arr
   for(int i=0;i<n;++i)
   {
      bool flag=true;
      for(int j=i;j<n;++j)
      {
        if(arr[j]>arr[i])
        {
            flag=false;
            break;
        }

        
      }
      if(flag==true)
      {
        return arr[i];
      }

   }
   return -1;
}

int main(){
    //arr created
    int arr[]={5,8,20,15};
    cout<<"Largest in given arrays is:"<<getlargest(arr,4);
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;

int largest(int arr[],int n)
{
    int i;

    //initializing max element
    int max=arr[0];

    //traverse ele from 2nd and compare every ele 
    //from curr max
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    
    }
    return max;

}

int main(){
    int arr[] = {10,324,45,90,9808};
    //size of arr
    int n=sizeof(arr)/sizeof(arr[0]);
    //printing 
    cout<<"Largest in given arrays is:"<<largest(arr,n);
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

int largest(int arr[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;

}

int main(){
    int arr[] = {1,2,300,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Largest element in given arr is:"<<largest(arr,n);

}