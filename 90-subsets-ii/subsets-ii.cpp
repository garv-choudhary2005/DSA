class Solution {
public:
    void allsubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& subsets) {
        if (i == nums.size()) {
            subsets.push_back(ans);
            return;
        }

        // Include current element
        ans.push_back(nums[i]);
        allsubsets(nums, ans, i + 1, subsets);
        ans.pop_back();

        // Skip all duplicates of nums[i]
        int j = i + 1;
        while (j < nums.size() && nums[j] == nums[i]) {
            j++;
        }

        // Exclude current element
        allsubsets(nums, ans, j, subsets);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> subsets;
        vector<int> ans;

        allsubsets(nums, ans, 0, subsets);
        return subsets;
    }
};