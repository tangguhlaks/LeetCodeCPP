class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int temp = 0;
            for(int j=0;j<=i;j++){
                temp += nums[j];
            }
            v.push_back(temp);
        }
        return v;
    }
};
