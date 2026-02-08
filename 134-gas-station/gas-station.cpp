class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0;
        int tank = 0;
        int dif = 0;
       
        for(int i=0; i<gas.size(); i++){
             int total_gas = 0;
             dif += gas[i]-cost[i];
             tank += gas[i]-cost[i];
             if(tank<0){
                start = i+1;
                tank = 0;
                
             }
        }

        if(dif<0)
        return -1;
        else
        return start;
    }
};