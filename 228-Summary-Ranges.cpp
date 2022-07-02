class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> op;
        bool newItem = true;
        bool seq = false;
        string opItem;
        if(nums.empty()){
            return op;
        }
        int past = nums[0];
        for (auto i = nums.begin(); i != nums.end(); ++i){
            if(newItem){
                opItem = to_string(*i);
                if(i+1 == nums.end()){
                    op.push_back(to_string(*i));
                }
            }
            if(past == *i){
                newItem = false;
                continue;
            }else if(past == *i - 1){
                newItem = false;
                seq = true;
                if(i+1 == nums.end()){
                    opItem = opItem + "->";
                    opItem = opItem + to_string(*i);
                    op.push_back(opItem);
                }
            }else{
                
                if(seq){
                    opItem = opItem + "->";
                    opItem = opItem + to_string(past);
                }
                op.push_back(opItem);
                if(i+1 == nums.end()){
                    op.push_back(to_string(*i));
                }
                
                opItem = to_string(*i);
                seq = false;
            }
            past = *i;
        }
       return op;
    }
};