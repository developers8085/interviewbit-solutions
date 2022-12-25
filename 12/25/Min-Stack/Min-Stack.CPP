// CPP Solution

```
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
        if(sn.top()<sm.top()){
            sm.push(x);
        }
    }else{
        sm.push(x);
    }
}
void MinStack::pop() {
    if(!sn.empty()){
        if(sn.top()==sm.top()){
            sn.pop();
            sm.pop();
        }else{
            sn.pop();
        }
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
