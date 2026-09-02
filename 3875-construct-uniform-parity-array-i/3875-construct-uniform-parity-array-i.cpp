class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int o=0,e=0,odd=0,even=0;
        vector<int> nums2;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2==0) {
                e++;
                even=nums1[i];
                }
            else {
                o++;
                odd=nums1[i];
            }
        }
        if(o==0) {
            nums2=nums1;
            return true;
        }
      for(int i=0;i<nums1.size();i++){
        if(nums1[i]%2!=0) nums2.push_back(nums1[i]);
        else{
            nums2.push_back(nums1[i]-odd);
        }
      }
    return true;
    }
};