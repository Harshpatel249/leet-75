class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> sum1;
        vector<int> sum2;
        int pivot = -1;
        
        int temp = 0;
        for (auto i = nums.begin(); i != nums.end(); ++i){
            temp += *i;
            sum1.push_back(temp-*i);
        }
        reverse(nums.begin(), nums.end());
        temp=0;
        for (auto i = nums.begin(); i != nums.end(); ++i){
            temp += *i;
            sum2.push_back(temp-*i);
        }
        reverse(sum2.begin(), sum2.end());
        for (int i = 0; i < nums.size(); ++i){
            if(sum1[i] == sum2[i]){
                return i;
            }
                
        }
       
        return pivot;
    }
};