class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int k = 1;
        int j =1;
        while (j<n){
            if (nums[j]==nums[j-1]){
                j++;
                continue;
            }
            else{
                nums[i+1]=nums[j];
                i++;
                j++;
                k++;
            }
        }
        return k;
        
        
    }
};