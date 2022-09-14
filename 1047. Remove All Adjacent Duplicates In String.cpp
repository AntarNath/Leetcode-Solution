// 1047. Remove All Adjacent Duplicates In String




class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(char c:s){
            if(st.empty()){
                st.push(c);
            }
            else{
                char ch = st.top();
                if(c==ch){
                    st.pop();
                }
                else{
                    st.push(c);
                }
            }
        }
        string str="";
        while(!st.empty()){
            str = st.top() + str;
            st.pop();
        }
        return str;
    }
};