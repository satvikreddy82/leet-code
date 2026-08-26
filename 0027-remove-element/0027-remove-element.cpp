class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0; // Pointer to place the next valid element

        for (int i = 0; i < nums.size(); i++) {
            // If the current element is NOT the value to remove
            if (nums[i] != val) {
                nums[index] = nums[i]; // Move it forward
                index++;               // Move the write pointer
            }
        }
        
        return index; // index represents the count of valid elements
    }
};
