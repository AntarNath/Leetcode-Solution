// 232. Implement Queue using Stacks



class MyQueue {
public:
    stack<int>st1;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        stack<int>st2;
        int ans;
        while(!st1.empty()){
            int val = st1.top();
            st1.pop();
            if(st1.empty()){
                ans = val;
                break;
            }
            st2.push(val);
        }
        while(!st2.empty()){
            int val = st2.top();
            st1.push(val);
            st2.pop();
        }
        return ans;
    }
    
    int peek() {
        stack<int>st2;
        int ans;
        while(!st1.empty()){
            int val = st1.top();
            st1.pop();
            if(st1.empty()){
                ans = val;
            }
            st2.push(val);
        }
        while(!st2.empty()){
            int val = st2.top();
            st1.push(val);
            st2.pop();
        }
        return ans;
    }
    
    bool empty() {
        if(st1.empty()) return true;
        return false;
    }
};