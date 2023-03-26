/*
vector<int> leaders(int a[],int n){
   s;
} vector<int>ans;
    int maxTillNow=a[n-1]; //as rightmost ele max
    ans.push_back(a[n-1]);

    for(int i=n-2;i>=0;i--){
        if(a[i]>=maxTillNow){
            ans.push_back(a[i]);
            maxTillNow = a[i];
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
*/
//ans=[]
//maxTillNow=2,5,17
//did reverse
