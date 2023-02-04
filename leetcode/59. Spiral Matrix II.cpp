class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int x = 0, int y = 0;
        int loop = n/2;
        int mid = n/2;
        int num = 1;
        int offset = 1;
        int i,j;
        vector<vector<int>> result(n,vector<int>(n,0));
        while (loop--){
            i = x;
            j = y;
            for (j=y; j < n-offset; j++){
                result[x][j] = num++;
            }
             for (i = x; i < n - offset; i++) {
                result[i][j] = num++;
            }
            for(;j>x;j--){
                result[i][j] = num++;
            }
            for(;i>x;i--){
                result[i][j] = num++;
            }

            x++;
            y++;
            offset += 1;
        }
        if(n%2){
            result[mid][mid] == nums;
        }
        return result;
    }
};