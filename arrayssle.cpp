#include<iostream>
using namespace std;

//returns index of 2nd largest
//if not exist return -1

int secondLargest(int arr[],int n)
{
    int first=0;
    int second= -1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[first])
        {
            second=first;
            first = i;
        }

        else if(arr[i]<arr[first])
        {

            if(second == -1 || arr[second]<arr[i])
            {
                second = i;
            }
        }
    }
    return second;

}


int main(){
    //arr
    int arr[]={10,12,20,4};
    //index:-
    int index=secondLargest(arr,sizeof(arr)/sizeof(arr[0]));
    //printing:-
    if(index == -1)
    {
        cout<<"Second largest didnt exit";
    }
    else
    {
        cout<<"Seconf largest:-"<<arr[index];
    }
}
