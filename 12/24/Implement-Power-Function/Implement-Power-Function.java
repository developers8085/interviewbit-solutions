// JAVA Solution

```
public class Solution {
	public int pow(int x, int n, int d) {
        
        if(x ==0){
            return 0;
        }
        if(n==0){
            return 1;
        }
        if(n==1){
            return (x+d)%d;
        }
        return bns(x,n,d);
	}
    
    int bns(int x,int n,int d){
        if(n==1){
            return (x+d)%d;
        }
        long tmp = bns(x,n/2,d);
        long  dtmp = ((tmp%d)*(tmp%d))%d;
        if(n%2==0){
            return (int)dtmp%d;
        }else{
            long tt = ((dtmp%d)*((x+d)%d))%d;
            return (int)(tt)%d;
        }
    }
}

```
