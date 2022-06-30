class Solution {
public:
    vector<int> partitionLabels(string s) {
        // Map to store the last found location of the alphabet
        int map[26];
        // Output vector
        vector<int> op;
        // Helpers
        char curr = s[0];
        int prev = 0;
        
        // Initializing the map array
        for(int i=0;i<26;i++){
            map[i] = -1;
        }
        
        // Populating map
        for(int i=0;i<s.length();i++){ 
            map[(int(s[i]) - 97)] = i;
        }
        
        // Logic to find the op vector
        for(int i=0;i<s.length();i++){ 
            cout << map[int(s[i])-97]<< " "<< map[int(curr)-97] << "\n";
            
            if(map[int(curr)-97]==i){
                op.push_back(i+1 - prev); 
                prev = i+1;
                if(i+1 < s.length()){
                    curr = s[i+1];
                }
            }
            if(map[int(s[i])-97] > map[int(curr)-97]){
                curr = s[i];
            }
        }

        // ~ O(2n)
        return op;
    }
};