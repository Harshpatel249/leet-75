class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = BSTRow(matrix, target, 0, matrix.size());
        bool op;
       
        if(row<0){
            return false;
        }else{
            op = BST(matrix[row], target, 0, matrix[row].size());
            return op;
        }
    }
    int BSTRow(vector<vector<int>>& matrix, int target, int l, int h){
        
        if(l>h){
            return -1; 
        }
        
        int mid = (l+h)/2;
        
        if(mid >= matrix.size()){
            return -1;
        }
                
        if(target >= matrix[mid][0] && target <= matrix[mid][matrix[mid].size()-1]){
            return mid;
        }else if(target >= matrix[mid][0]){
            return BSTRow(matrix, target, mid+1, h);
        }else{
            return BSTRow(matrix, target, l, mid-1);
        }
        
    }
    
    bool BST(vector<int>& matrix, int target, int l, int h){
        if(l>h){
            return false;
        }
        
        int mid = (l+h)/2;
        
        if(mid >= matrix.size()){
            return false;
        }
        
        if(target==matrix[mid]){
            return true;
        }else if(target>matrix[mid]){
            return BST(matrix, target, mid+1,h);
        }else{
            return BST(matrix, target, l, mid-1);
        }
    }
};