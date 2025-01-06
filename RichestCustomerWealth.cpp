class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx = 0;
        for(int i=0;i<accounts.size();i++){
            int c = 0;
            for(int j=0;j<accounts[i].size();j++){
                c += accounts[i][j];
            }
            if (c > mx)mx=c;
        }
        return mx;
    }
};
