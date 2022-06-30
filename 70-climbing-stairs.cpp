class Solution {
public:
    int climbStairs(int n) {
        int one = 1;
        int two = 1;
        int sum = 0;
        if(n==1){
            return 1;
        }
        else if(n==2){
            return 2;
        }else{
            // Iterative solution to find the nth fibonacci number
            for(int i=1;i<n;i++){
                sum = one + two;
                one=two;
                two=sum;
            }
            return sum;
        }
        
    }
};