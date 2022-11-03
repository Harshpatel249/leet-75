class Solution {
public:
    int rob(vector<int>& nums) {
        int temp;
        int max = nums[0];
        
        if(nums.size()==1){
            return nums[0];
        }else if(nums.size()==2){
            return nums[0]>nums[1]?nums[0]:nums[1];
        }else{
            for(int i=2;i<nums.size();i++){
                nums[i] += max;
                if(nums[i-1]>max){
                    max = nums[i-1];
                }
            }
        }
        int op = 0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>op){
                op = nums[i];
            }
        }
        
        return op;
    }
};