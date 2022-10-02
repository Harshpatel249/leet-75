class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
//         Memoization array
        int minCostarr[(cost.size()+1)];
//         Initializing array
        minCostarr[0]=cost[0];
        minCostarr[1]=cost[1];
//         Populating using DP
        for(int i=2;i<(cost.size()+1);i++){
            if(i==cost.size()){
                minCostarr[i] = min(minCostarr[i-1],minCostarr[i-2]);
            }else{
                minCostarr[i] = cost[i] + min(minCostarr[i-1],minCostarr[i-2]);
            }
        }
        return minCostarr[cost.size()];
    }
};
