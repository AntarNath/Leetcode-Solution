// 682. Baseball Game



class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>st;
        for(string s:ops){
            if(s=="+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                int sum = a+b;
                st.push(a);
                st.push(sum);
            }
            else if(s=="D"){
                int a = st.top();
                st.push(a*2);
            }
            else if(s=="C"){
                st.pop();
            }
            else{
                int num = stoi(s);
                st.push(num);
            }
        }
        int total = 0;
        while(!st.empty()){
            total += st.top();
            st.pop();
        }
        return total;
    }
};