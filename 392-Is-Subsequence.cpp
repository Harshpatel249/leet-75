class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ind=0;
        if(t==""){
            if(s==""){
                return true;
            }else{
                return false;
            }
        }
        for(int i=0;i<t.length();i++){
            if(s[ind] == t[i]){
                ind++;
            }
            if(ind >= s.length()){
                return true;
            }
        }
        return false;
    }
};