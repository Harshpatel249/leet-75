// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        while(n>0){
            if(!isBadVersion(n-1)){
                return n;
            }
            n--;
        }
        return 1;
    }
   
};