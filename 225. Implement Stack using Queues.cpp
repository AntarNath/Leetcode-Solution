// 225. Implement Stack using Queues


class MyStack {
public:
    queue<int>q1;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        queue<int>q2;
        int ans;
        while(!q1.empty()){
            int val = q1.front();
            q1.pop();
            if(q1.empty()){
                ans = val;
                break;
            }
            q2.push(val);
        }
        q1 = q2;
        return ans;
    }
    
    int top() {
        queue<int>q2;
        int ans;
        while(!q1.empty()){
            int val = q1.front();
            q1.pop();
            if(q1.empty()){
                ans = val;
            }
            q2.push(val);
        }
        q1 = q2;
        return ans;
    }
    
    bool empty() {
        if(q1.empty()){
            return true;
        }
        return false;
    }
};