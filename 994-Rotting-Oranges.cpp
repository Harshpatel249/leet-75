class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int t = 0;
        bool rot = false;
        bool cont = true;
        
        while(cont){
            rot = false;
            for(int i=0;i<grid.size();i++){
                for(int j=0;j<grid[0].size();j++){
                    if(i-1>=0){
                        if(grid[i-1][j] >= 2 && grid[i-1][j] < 2+t+1 && grid[i][j] == 1){
                            grid[i][j] = 2+t+1;
                            rot = true;
                        }
                    }
                    if(i+1<grid.size()){
                        if(grid[i+1][j] >= 2 && grid[i+1][j] < 2+t+1 && grid[i][j] == 1){
                            grid[i][j] = 2+t+1;
                            rot = true;
                        }
                    }
                    if(j-1>=0){
                        if(grid[i][j-1] >= 2 && grid[i][j-1] < 2+t+1 && grid[i][j] == 1){
                            grid[i][j] = 2+t+1;
                            rot = true;
                        }
                    }
                    if(j+1<grid[0].size()){
                        if(grid[i][j+1] >= 2 && grid[i][j+1] < 2+t+1 && grid[i][j] == 1){
                            grid[i][j] = 2+t+1;
                            rot = true;
                        }
                    }
                }
             }
            t++;
            
            if(rot == false){
                cont = false;
            }
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
    
        return t-1;
    }
};