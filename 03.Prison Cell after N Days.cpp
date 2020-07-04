class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N){
        N = N%14;
        if(N==0) { N = 14; }
        while(N--){
            vector<int> result(8,0);
            for(int i=1;i<7;i++){
                if(cells[i-1]^cells[i+1]){
                    continue;
                }else{
                    result[i] = 1;
                }
            }
            cells = result;
        }
        return cells;
    }
};
