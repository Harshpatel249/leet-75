class Solution {
public:
    int longestPalindrome(string s) {
        int count = 0;
        bool single = false;
        
        int hashMap[200];
        
        for(int i=0;i<200;i++){
            hashMap[i] = 0;
        }
        
        for(int i=0;i<s.length();i++){
            hashMap[int(s[i])]++;    
        }
        
        for(int i=0;i<200;i++){
            if(hashMap[i] > 1){
                count = count + hashMap[i] - hashMap[i]%2;
            } 
            if(!single && hashMap[i]%2 == 1 ){
                count++;
                single = true;
            }
        }
        return count;
    }
};