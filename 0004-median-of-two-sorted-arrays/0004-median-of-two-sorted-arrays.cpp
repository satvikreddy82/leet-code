class Solution { 
public: 
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) { 
        int m = nums1.size(); 
        int n = nums2.size(); 
        
    
        vector<int> ans; 
        
        int i = 0, j = 0; 
        
        while(i < m && j < n){ 
            if(nums1[i] <= nums2[j]){ 
                ans.push_back(nums1[i]); 
                i++; 
            } else { 
                ans.push_back(nums2[j]); 
                j++; 
            } 
        } 
        
        while(i < m){ 
            ans.push_back(nums1[i]); 
            i++; 
        } 
        
        while(j < n){ 
            ans.push_back(nums2[j]); 
            j++; 
        } 
        
        int totalLength = m + n;
        if(totalLength % 2 == 0){ 
            return (ans[totalLength / 2 - 1] + ans[totalLength / 2]) / 2.0; 
        } else { 
            return ans[totalLength / 2]; 
        } 
    } 
};
