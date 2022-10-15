class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string op = "";
        int curr = 0;
        char temp;
        bool cont = true;
        
        while(true){
                if(curr < strs[0].length()){
                    temp = strs[0][curr];
                }else{
                    cont = false;
                    break;
                }
            for(int i=0;i<strs.size();i++){
                
                if(curr < strs[i].length()){
                    if(strs[i][curr] == temp){
                        continue;
                    }else{
                        cont = false;
                        break;
                    }
                }else{
                    cont = false;
                    break;
                }
            }
            
            if(!cont){
                break;
            }else{
                op = op + temp;
                curr++;
            }
        }
        
        return op;
    }
};