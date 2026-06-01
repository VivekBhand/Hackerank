class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        vector<int> freq(101 , 0);
        for(int ele : cost){
            freq[ele] ++;
        }
        int count = 0;
        int totalCost = 0;
        for(int i = 100 ; i >= 0 ; i --){
            while(freq[i] > 0){
                count ++;
                if(count % 3 != 0) totalCost += i;
                freq[i] --;
            }
        }
        return totalCost;
    }
};