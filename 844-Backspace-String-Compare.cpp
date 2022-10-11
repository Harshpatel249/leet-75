class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> stack1;
        vector<char> stack2;
        
        for(int i=0;i<s.length();i++){
            if(s[i] == '#'){
                if(stack1.size()==0){
                    
                }else{
                    stack1.pop_back();
                }
            }else{
                stack1.push_back(s[i]);
            }
        }
        
        for(int i=0;i<t.length();i++){
            if(t[i] == '#'){
                if(stack2.size()==0){
                    
                }else{
                    stack2.pop_back();
                }
            }else{
                stack2.push_back(t[i]);
            }
        }
        if(stack1 == stack2){
            return true;
        }else{
            return false;
        }
    }
};