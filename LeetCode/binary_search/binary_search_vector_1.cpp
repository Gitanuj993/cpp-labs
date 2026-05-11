class Solution {
public:
    // Binary recursive function
        int binary_search(int low, int high, vector<int>&nums , int target ) {
            // base case
            if (low > high){
                return -1  ;          
            }
            // mid element
            int mid = (low + high) / 2 ;
            // if target is found
            if ( nums[mid] == target){
                return mid ;
                }
            // if mid element is greater than target
            if ( nums[mid] > target){
                high = mid - 1 ;
                return binary_search(low,high,nums,target) ;
            }
            // if mid element is less than target
            else {
                low = mid + 1 ;
            return binary_search(low,high,nums,target)    ;        
            }
        }
    int search(vector<int>& nums, int target) {
        
        return binary_search(0,nums.size() - 1,nums,target) ;
        
    }
};
