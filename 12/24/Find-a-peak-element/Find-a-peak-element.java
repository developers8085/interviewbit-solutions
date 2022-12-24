// JAVA Solution

```
public class Solution {
    public int solve(int[] A) {
        
        // First peak element in a array
        // Linear approach
        
        int n = A.length;
        // check for First element
        
        if(A[0]>A[1]){
            return A[0];
        }
        for(int i=1;i<n-1;i++){
            if(A[i]>A[i-1] && A[i]>A[i+1]){
                return A[i];
            }
        }
        if(A[n-2]<A[n-1]){
            return A[n-1];
        }
        return A[n-1];
    }
}

```
