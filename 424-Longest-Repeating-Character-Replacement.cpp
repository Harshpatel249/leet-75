class Solution {
public:
    int characterReplacement(string s, int k) {
        int longest = 0;
        int tempLongest = 0;
        char curr;
        int tempK = k;
        int j;
        
        for(int i=0;i<s.length();i++){
            curr = s[i];
            j=i+1;
            tempLongest=1;
            bool kUsed = false;
//             Checking forwards
            while(j<s.length()){
                    if(s[j] == curr){
                        tempLongest++;
                    }else{
                        if(tempK>0){
                            tempK--;
                            tempLongest++;
                        }else{
                            if(tempLongest > longest){
                                longest = tempLongest;
                            }
                            tempLongest=0;
                            kUsed = true;
                            tempK=k;
                            break;
                        }
                    }
                j++;
            }
//             Checking backwards
            if(!kUsed){
                
                int p = i-1;
                while(p>=0){
                    if(s[p] == curr){
                        tempLongest++;
                    }else{
                        if(tempK>0){
                            tempK--;
                            tempLongest++;
                        }else{
                            if(tempLongest > longest){
                                longest = tempLongest;
                            }
                            tempLongest=0;
                            kUsed = true;
                            tempK=k;
                            break;
                        }
                    }
                p--;
            }
            }
            if(tempLongest > longest){
                longest = tempLongest;
            }
        }
        return longest;
    }
};