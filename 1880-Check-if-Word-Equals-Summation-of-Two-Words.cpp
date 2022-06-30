class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int sum1 = 0;
        string num1 = "";
        int sum2 = 0;
        string num2 = "";
        int sum= 0;
        string num = "";
        
        for(int i=0;i<firstWord.length();i++){
            int temp = int(firstWord[i] - 97);
            num1 = num1 + to_string(temp);
        }
        
        sum1 = stoi(num1);
        
         for(int i=0;i<secondWord.length();i++){
             int temp = int(secondWord[i] - 97);
             
            num2 = num2 + to_string(temp);
        }
        
        sum2 = stoi(num2);
        
        
         for(int i=0;i<targetWord.length();i++){
             int temp = int(targetWord[i] - 97);
             num = num + to_string(temp);
           
        }
        
        sum = stoi(num);
        
        cout << sum1; 
        cout << sum2;
        cout <<  sum;
        if(sum1+sum2 == sum){
            return true;
        }else{
            return false;
        }
    }
};