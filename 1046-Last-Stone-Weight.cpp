class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        
        
        for(int i=stones.size()-1;i>=0;i--){
            heapify(stones, i);
        }
        
        while(stones.size()>1){
            cout << "new\n";
            for(int i=0;i<stones.size();i++){
                cout << stones[i] << " ";
            }
            cout << '\n';
            int max = stones[0];
            stones[0] = stones[stones.size()-1];
            stones[stones.size()-1] = max;
            stones.pop_back();
            for(int i=0;i<stones.size();i++){
                cout << stones[i] << " ";
            }
            cout << '\n';
            if(stones.size()>1){
                heapify(stones, 0);
            }
            for(int i=0;i<stones.size();i++){
                cout << stones[i] << " ";
            }
            cout << '\n';
            
            int max2 = stones[0];
            stones[0] = stones[stones.size()-1];
            stones[stones.size()-1] = max2;
            stones.pop_back();
            for(int i=0;i<stones.size();i++){
                cout << stones[i] << " ";
            }
            cout << '\n';
            if(stones.size()>1){
                heapify(stones, 0);
            }
            for(int i=0;i<stones.size();i++){
                cout << stones[i] << " ";
            }
            cout << '\n';
            
            if(max == max2){
                continue;
            }else{
                int newItem = max-max2;
                stones.push_back(newItem);
                insertHeap(stones, stones.size()-1);
            }
            for(int i=0;i<stones.size();i++){
                cout << stones[i] << " ";
            }
            cout << '\n';
            
        }
        
        // for(int i=0;i<stones.size();i++){
        //     cout << stones[i] << " ";
        // }
        if(stones.size()>0){
            return stones[0];
        }else{
            return 0;
        }
        
    }
    
    void insertHeap(vector<int>& in, int node){
        if(node == 0){
            return;
        }else{
            if(in[(node/2)] < in[node]){
                int temp = in[node];
                in[node]=in[(node/2)];
                in[(node/2)] = temp;
                insertHeap(in, (node/2));
            }else{
                return;
            }
        }
    }
    
    void heapify(vector<int>& in, int node){
        
        int size = in.size();
        
        if (size < (node+1) * 2){
            return;
        }else{
            if ((size-1) >= ((node+1) * 2)){
                
                int left = in[((node+1) * 2)-1];
                int right = in[((node+1) * 2)];
                int max = (left > right) ? left : right;
                int indMax = (left > right) ? (((node+1) * 2)-1) : ((node+1) * 2);
                if (in[node] < max){
                    int temp = max;
                    in[indMax] = in[node];
                    in[node] = temp;
                    heapify(in,indMax);
                    return;
                }
                else{
                    return;
                }
            }else if((size-1) == (((node+1) * 2)-1)){
                    if(in[node] < in[(((node+1) * 2)-1)]){
                        int temp = in[(((node+1) * 2)-1)];
                        in[(((node+1) * 2)-1)] = in[node];
                        in[node] = temp;
                        
                        heapify(in, (((node+1) * 2)-1));
                        return;
                    }
                }
            else{
                return;
            }
        }
    }
};