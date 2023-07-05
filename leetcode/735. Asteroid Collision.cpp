class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> s1;
        int length = asteroids.size();
        for(int i : asteroids){
            bool ispush = true;
            while(!s1.empty() && i < 0 && s1.back() >0){
                int t = s1.back();
                if(abs(t) == abs(i)){
                    s1.pop_back();
                    ispush = false;
                    break;
                }else if(abs(i) < abs(t)){
                    ispush = false;
                    break;
                }else{
                    s1.pop_back();
                }
            }
            if(ispush){
                s1.push_back(i);
            }
        }
       
        return s1;
    }
};