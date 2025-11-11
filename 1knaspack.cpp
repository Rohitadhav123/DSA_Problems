#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no of terms :"<<endl;
    cin>>n;

    int W;
    cout<<"Enter the capacity :"<<endl;
    cin>>W;

    int val[n],wt[n];
    cout<<"Enter the values :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    cout<<"Enter the weight :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>wt[i];
    }

    int dp[n+1][W+1];

    for(int i=0;i<=n;i++)
    {
        for(int w=0;w<=W;w++)
        {
            if(i==0||w==0)
            {
                dp[i][w]=0;
            }
            else if (wt[i-1]<=w)
            {
                dp[i][w]=max(val[i-1]+dp[i-1][w-wt[i-1]],dp[i-1][w]);
            }
            else
            {
                dp[i][w]=dp[i-1][w];
            }
        }
    }
    cout<<"knapsack :"<<dp[n][W];
}