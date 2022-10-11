class Solution {
public:
    string decodeString(string s) {
        string op = "";
        vector<char> stack;
        vector<char> tempStack;
        int i=0;
        
        while(i<s.length()){
            
            if(s[i] == ']'){
                int j = stack.size()-1;
                while(stack[j] != '['){
                    tempStack.push_back(stack[j]);
                    stack.pop_back();
                    j--;
                }
                j--;
                
                string numS = "";
                cout << "j: " << j;
                while(j>=0 && (stack[j] >= '0' && stack[j] <= '9')){
                    numS = stack[j] + numS;
                    stack.pop_back();
                    j--;
                }
                stack.pop_back();
                cout << "nums: " << numS;
                int ind = j;
                int num = stoi(numS);
                
                
                for(int k=0;k<num;k++){
                    for(int p=tempStack.size()-1;p>=0;p--){
                        stack.push_back(tempStack[p]);
                    }
                }
                for(int r=0;r<stack.size();r++){
                    cout << stack[r];
                  }
                cout << "\n";
                for(int r=0;r<tempStack.size();r++){
                    cout << tempStack[r];
                  }
                cout << "\n";
                tempStack.clear();
            }else{
                stack.push_back(s[i]);
            }
            
            i++;
        }
        
        for(int r=0;r<stack.size();r++){
            op = op + stack[r];
        }
        
        return op;
    }
};