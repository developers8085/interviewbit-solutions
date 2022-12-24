// JAVA Solution

```
public class Solution {
    public int solve(int[] A, int B) {
        int n = A.length;
        
        if(A[n-1]<=B){
            return n;
        }
        if(A[0]>B){
            return 0;
        }
        return bns(A,0,n-1,B,n);
    }
    int bns(int A[],int l,int r,int key,int n){
        if(l>r){
            return 0;
        }
        int m = l + (r-l)/2;
        
        if(A[m]<=key && m+1<=n && A[m+1]>key)
           return m+1;
        if(A[m]>key && m>0 && A[m-1]<=key){
            return m;
        }
        if(A[m]<=key){
            return bns(A,m,r,key,n);
        }else{
            return bns(A,l,m-1,key,n);
        }
    }
}

```
