class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        for(int i=0;i<nums.size();i++){
            int lenCurr = to_string(nums[i]).size();
            if(lenCurr%2==0)res++;
        }
        return res;
    }
};
