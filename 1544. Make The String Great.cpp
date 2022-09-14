// 1544. Make The String Great



class Solution {
public:
    string makeGood(string s) {
        if(s.length()==0)   return s;
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            }
            char ch = st.top();
            if(s[i]>='A' && s[i]<='Z'){
                if(ch==tolower(s[i])){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
            else if(ch>='A' && ch<='Z'){
                if(s[i]==tolower(ch)){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
            else{
                st.push(s[i]);
            }
        }
        stack<char>last;
        while(!st.empty()){
            char an = st.top();
            last.push(an);
            st.pop();
        }
        string str="";
        while(!last.empty()){
            str += last.top();
            last.pop();
        }
        return str;
    }
};