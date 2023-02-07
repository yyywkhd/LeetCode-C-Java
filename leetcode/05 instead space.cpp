class Solution {
public:
    string replaceSpace(string s) {
        int count = 0;
        int old_size = s.size();
        for (int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                count++;
            }
        }
        s.resize(s.size()+count*2);
        int new_size = s.size();
        for(int i = new_size-1, j =old_size - 1; j<i;i--,j--){
            if(s[j]!= ' '){
                s[i] = s[j];
            }else{
                s[i] = '0';
                s[i-1] = '2';
                s[i-2]='%';
                i-=2;
            }
        }
        return s;
    }
};