// CPP Solution

```
int Solution::solve(int n) {
    // Copied Solution
    int mod = 1000000007;
     long long int c[n+1][n+1] = {0};
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= i; j++){
            if(i == j || j == 0){c[i][j] = 1;continue;}
            c[i][j] = ((c[i-1][j]%mod) + (c[i-1][j-1]%mod))%mod;
        }
    }
    long long int dp[n+1];
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2; i<=n; i++){
        int h = log10(i)/log10(2);
        int p = i-((1<<h)-1);
        if(p>=(1<<h-1)) p = 1<<h-1;
        int L = (1<<(h-1))-1+p;
        dp[i] = (c[i-1][L]*((dp[L]*dp[i-1-L])%mod))%mod;
    }
    return dp[n];
}

```
