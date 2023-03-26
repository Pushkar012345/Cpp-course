/*
//n:-size of arr
//q=queries 
//l,r=finding sum of range between index l and r
//l and r=0 based indexing

void range_sum(arr,n)
{
    //initializing
    prefix[n]={0};
    prefix[0]=arr[0];
    //taking sum of back
    for(int i=0;i<n-1;i++)
    {
        prefix[i]=a[i]+prefix[i-1];
    }
    
    //taking queries
    for(int i=1 to q)
    {   
        //if left is 0 then
        if(l==0)
        {
            ans=prefix[r];
            cout<<ans;

        }
        else
        {
            ans=prefix[r]-prefix[l-1]
            cout<<ans;
        }
    }


}
*/

/*
//Equillibrium index of an array:-

//naive solution
for(int i=0;i<n-1;i++){
    int leftsum=0;
    for(int i=0;i<i-1;i++)
    {
        leftsum=leftsum+arr[i];
    }

    int rightsum=0;
    for(int i=i+1;i<n-1;i++)
    {
        rightsum+=rightsum+arr[i];
    }

    if(leftsum==rightsum)
    {
        cout<<i;
    }

}
*/
/*
//alternate approch:-
int equindex(arr,n)
{
    sum=0;
    leftsum=0;
    for(int i=0;i<n-1;i++)
    {
        sum=sum+arr[i];

    }

    for(int i=0;i<n-1;i++)
    {
        sum=sum-a[i];
        if(sum==leftsum){
            return i;
            leftsum=leftsum+a[i];
        }
    }
}
*/

//n:-size
/*
int largestsum(arr,n)
{
    max_so_far=INT_MIN;
    max_ending_here=0;

    for(int i=0;i<n-1;i++)
    {
        max_ending_here+=arr[i];
        if(max_so_far<max_ending_here)
        {
            max_so_far=max_ending here;
        }
        if(max_ending_here<0)
        {
             max_ending_here=0;
        }

        return max_so_far;
    }
}
*/
/*
//Merge two sorted arrays
void merge_sorted(arr1,arr2,m,n)
{
    arr3[m+n];
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++]=arr1[i++]
        }
        else{
            arr3[k++]=arr2[j++]
        }
    }

    while(i<m)
    {
        arr3[k++]=arr1[i++];

    }
    
}
*/