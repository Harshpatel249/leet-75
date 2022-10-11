class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int currRow = 0;
        int currColumn = 0;
        vector<int> op;
        for(int i=0;i<grid[0].size();i++){
            currRow=0;
            currColumn=i;
            while(true){
                
                if(grid[currRow][currColumn] == 1){
                    if(currColumn + 1 >= grid[0].size()){
                        op.push_back(-1);
                        break;
                    }else if(grid[currRow][currColumn+1] == -1){
                        op.push_back(-1);
                        break;
                    }
                    else if(currRow+1 >= grid.size()){
                        op.push_back(currColumn+1);
                        break;
                    }else{
                        currRow++;
                        currColumn++;
                    }
                }else{
                    if(currColumn - 1 < 0){
                        op.push_back(-1);
                        break;
                    }else if(grid[currRow][currColumn-1] == 1){
                        op.push_back(-1);
                        break;
                    }
                    else if(currRow+1 >= grid.size()){
                        op.push_back(currColumn-1);
                        break;
                    }else{
                        currRow++;
                        currColumn--;
                    }
                }
            }
        }
        
        return op;
    }
};