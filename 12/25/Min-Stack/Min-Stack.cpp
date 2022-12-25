// CPP Solution 

```
   // O(N) Time +O(N)+O(N) Space complexity
   
   stack<int> sn;
stack<int> sm;
MinStack::MinStack() {
    // sn.clear();
    sn = stack<int>();
    sm = stack<int>();
}

void MinStack::push(int x) {
    sn.push(x);
    if(!sm.empty()){
        sm.push(min(sm.top(),x));
    }else{
        sm.push(x);
    }
}
void MinStack::pop() {
    if(!sn.empty()){
        sn.pop();
    sm.pop();
    }else{
        // Do Nothing
    }
    
}

int MinStack::top() {
    if(sn.empty()){
        return -1;
    }
    int ans= sn.top();
    return ans;
}

int MinStack::getMin() {
    if(!sm.empty()){
       return sm.top();   
    }
    return -1;
}



```
