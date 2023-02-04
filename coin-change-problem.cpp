long long int countCoin(int coins[], int n, int sum,vector<vector<long long int>> &dp)

    {

        if ((n<0 && sum>0) || sum<0)

        {

            return 0;

        }

        if (dp[n][sum] != -1)

        {

            return dp[n][sum];

        }

        if (sum == 0)

        {

            return 1;

        }

        return dp[n][sum]=countCoin(coins,n,sum-coins[n],dp) + countCoin(coins,n-1,sum,dp); 

    }

    long long int count(int coins[], int n, int sum) {

 

        // code here.

        vector<vector<long long int>> dp(n+1,vector<long long int>(sum+1,-1));

        

        return countCoin(coins,n-1,sum,dp);

    }