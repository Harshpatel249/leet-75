class Solution {
public:
    string getHint(string secret, string guess) {
        int hash[10];
        int cow=0;
        int bull=0;
        
        for(int i=0;i<10;i++){
            hash[i] = 0;
        }
        
        for(int i=0;i<secret.length();i++){
            hash[secret[i]-'0']++;
        }
        
        for(int i=0;i<secret.length();i++){
            if(hash[guess[i]-'0']>0){
                hash[guess[i]-'0']--;
                if(guess[i] == secret[i]){
                    bull++;
                }else{
                    cow++;
                }
            }else{
                if(guess[i] == secret[i]){
                    bull++;
                    cow--;
                }
            }
        }
        return to_string(bull)+"A"+to_string(cow)+"B";
    }
};