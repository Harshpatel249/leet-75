class Solution {
public:
    int fib(int n) {
        cout << n;
        if(n==1){
            return 1;
        }
        if(n==2){
            return 1;
        }
        int last = 1;
        int last2 = 1;
        int curr = 0; 
            
        for(int i=2;i<n;i++){
            curr = last + last2;
            last2 = last;
            last = curr;
        }
        return curr;
    }
};