class Solution {
public:
    bool isHappy(int n) {
        vector<int> inp;
        int sum=n;
        map<int,int> hash;
        bool op = false;
       
        
        while(true){
        inp.clear();
        vectorize(inp, sum);
        sum=0;
        
        sum = runningSum(inp);
        
        if(hash.count(sum)>0){
            break;
        }else if(sum == 1){
            op=true; 
            break;
        }else{
            hash.insert(pair<int, int>(sum,1));
        }
        }
        
        return op;
    }
    void vectorize(vector<int>& in, int n){
        while(n>=1){
            in.push_back(n%10);
            n = n/10;
        }
    }
    
    int runningSum(vector<int>& in){
        int sum = 0;
        for(int i=0;i<in.size();i++){
            sum += (in[i]*in[i]);
        }
        return sum;
    }
};