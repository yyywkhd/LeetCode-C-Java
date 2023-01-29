class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }else{
            string connect = "";
            int interval = numRows*2-2;
            //fist line
            for (int i = 0; i <s.size(); i+=interval){
                connect += s[i];
            }

            for (int j = 1; j < numRows - 1; j++){
                int mid_interval = 2 * j;
                for (int h = j; h < s.size(); h += mid_interval){
                    connect += s[h];
                    mid_interval = interval - mid_interval;
                }
            }

            // last line
            for(int k = numRows-1; k <s.size(); k+=interval){
                connect += s[k];
            }
            return connect;
        }
    }
};