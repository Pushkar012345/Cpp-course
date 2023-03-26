
/*
int missingNumber(int arr[],int n)
{
    //conversion of array
    for(int i=0;i<n;i++)
    {
        int correctIndex=arr[i]-1;
        while(0<=correctIndex && correctIndex<=n-1 && arr[i]!=arr[correctIndex])
        {
            swap(arr[i],arr[correctIndex]);
            correctIndex=arr[i]-1;
        }
    }

//searching 4 the smallest positive int in arr
for(int i=0;i<n;i++)
{
    if(arr[i]!=i+1)
    {
        return i+1;
    }
}
//all int from 1 to n were present in arr
return n+1;

















*/