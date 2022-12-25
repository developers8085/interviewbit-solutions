// JAVA Solution

```
class Solution {
    Stack<Integer> s = new Stack<Integer>();
    int mValue = -1;
    public void push(int x) {
        if(s.isEmpty() == true){
            s.push(x);
            mValue = x;
            return ;
        }
        if(x<mValue){
            s.push(2*x-mValue);
            mValue= x;
        }else{
            s.push(x);
        }
    }
    public void pop() {
        if(s.isEmpty() == true){
            mValue=-1;
            return ;
        }
        int t = s.pop();
        if (t < mValue) {
            mValue = 2 * mValue - t;
        }
        if(s.isEmpty()== true){
            mValue=-1;
        }
        return ;
    }
    public int top() {
        if(s.isEmpty() == true){
            mValue =-1;
            return -1;
        }
        int top = s.peek();
        if(top<mValue){
            return mValue;
        }else{
            return top;
        }
    }
    public int getMin() {
        return mValue;
    }
}

```
