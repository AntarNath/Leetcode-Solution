// 9. Palindrome Number



class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;   
        queue<int>q;
        stack<int>s;
        while(x!=0){
            int rem = x%10;
            q.push(rem);
            s.push(rem);
            x /= 10;
        }
        while(!q.empty() && !s.empty()){
            if(q.front()!=s.top())return false;
            q.pop();
            s.pop();
        }
        return true;
    }
};