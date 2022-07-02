class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int arr[200];
        int arr2[200];
        
        for(int i=0;i<200;i++){
            arr[i] = -1;
            arr2[i] = -1;
        }
        
        for(int i=0;i<s.length();i++){

            if(arr[int(s[i])] == -1 && arr2[int(t[i])] == -1){
                arr[int(s[i])] = int(t[i]);
                arr2[int(t[i])] = int(s[i]);
            }else if(arr[int(s[i])] == int(t[i]) && arr2[int(t[i])] == int(s[i])){
                continue;
            }else{
                
                return false;
            }
        }
        
        return true;
    }
};