/*
class Solution{
    public:

    vector<vector<int>> stockBuySell(vector<int> A,int n){
         vector<vector<int>>ans;
         int lastBuy=0;
         int profit = -A[0];

         for(int i=1;i<n;i++)
         {
            if(A[i]<A[lastBuy]){
                profit=profit+A[lastBuy];
                profit-=A[i];
                lastBuy=i;
            }
            else
            {
                 //bcoz we sell and buy again.
                 ans.push_back({lastBuy,i});
                 lastBuy=i;
            }
         }
         profit+=A[n-1];
         return ans;
         }
         };

    }
}

*/

//Naive solution

//approach:-try buying stocks and selling them on every
//single day,and try update maxProfit so far
/*
#include<bits/stdc++.h>
using namespace std;

int maxProfit(int price[],int start,int end)
{
    //if stock cant be bought
    if(end<=start)
    {
      return 0;
    }
    
    //initialize profit
    int profit=0;

    for(int i=start;i<end;i++)
    {
        //the day at which stock must be sold
        for(int j=i+1;j<=end;j++)
        {
          //if buying stock at ith day and selling it at
          //jth is profitable
          if(price[j]>price[i])
          {
            //update curr_profit
            int curr_profit = price[j]-price[i]+maxProfit(price,start,i-1)+maxProfit(price,j+1,end);

            profit=max(profit,curr_profit);
          }
        }
    }
    return profit;
}




int main(){
    int price[]={100,180,260,310,40,535,695};
    int n=sizeof(price)/sizeof(price[0]);

    cout<<maxProfit(price,0,n-1);
    return 0;
}
*/
//Efficient solution
/*
Find the local minima and store it as starting index. If not exists, return.
Find the local maxima. And store it as an ending index. If we reach the end, set the end as the ending index.
Update the solution (Increment count of buy-sell pairs)
Repeat the above steps if the end is not reached.
*/

#include<bits/stdc++.h>
using namespace std;

//This function finds buy sell schedule for max profit
void stockBuySell(int price[],int n)
{
   //must be atleast 2 days
   if(n==1)
   {
    return;
   }

   //traverse through given price arr
   int i=0;
   while(i<n-1)
   {
      //find local minima
      //note limit is n-2
      //as we comparing present ele to next ele
      while((i<n-1) && (price[i+1]<=price[i]))
      {
        i++;
      }
      
      //if we reach end
      if(i==n-1){
        break;
      }

      //store index of minima
      int buy=i++;

      //find local maxima
      while((i<n) && (price[i]>=price[i-1]))
      {
        i++;
      }

      //store index of maxima
      int sell=i-1;

      cout<<"Buy on day:"<<buy<<"It is sell on day"<<sell<<endl;
   }
}





//Driver code
int main(){
    //stock prices on consecutive days
    int price[]={100,180,260,310,40,535,695};
    int n=sizeof(price)/sizeof(price[0]);

    //function call
    stockBuySell(price,n);
    return 0;
}