class Solution {
public:
    class comp{
        public:
            bool operator()(const pair<int,int>&lhs, const pair<int,int>&rhs){
                return lhs.second > rhs.second;
            }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,comp> pq;
        for(unordered_map<int,int>::iterator it = map.begin();it != map.end(); it++){
            pq.push(*it);
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int> result(k);
        for (int i = k - 1; i >= 0; i--) {
            result[i] = pq.top().first;
            pq.pop();
        }
        return result;

    }
};