class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> op;
        int temp = 0;
        for (auto i = nums.begin(); i != nums.end(); ++i){
            temp += *i;
            op.push_back(temp);
        }
        return op;
    }
};