# CPP Solution

```
int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int l = 0;
    int r = n-1;
    int ans = 0;
    
    while(l<=r){
        int mid = l + (r-l)/2;
        if(A[mid]<=B){
            ans = mid+1;
            l = mid+1;
        }else{
            r = mid-1;
        }
    }
    return ans;
}


```
