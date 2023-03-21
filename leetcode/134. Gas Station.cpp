class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gas_consumption = 0;
        int min = INT_MAX;
        for(int i = 0; i< gas.size(); i++){
            int rest = gas[i] - cost[i];
            gas_consumption += rest;
            if(gas_consumption < min){
                min = gas_consumption;
            }
        }
        if(gas_consumption < 0){
            return -1;
        }
        if(min >= 0){
            return 0;
        }
        for(int i = gas.size(); i>=0; i--){
            int rest = gas[i] - cost[i];
            min += rest;
            if(min >= 0){
                return i;
            }
        }
        return -1;
    }
};