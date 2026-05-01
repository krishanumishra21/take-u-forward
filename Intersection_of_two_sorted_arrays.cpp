class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
                int a = nums1.size();
        int b = nums2.size();
        int i = 0, j = 0;
        vector <int> inter;
        while(i<a && j<b){
            if(nums1[i]>nums2[j]){
                j++;

            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                inter.push_back(nums1[i]);
                i++;
                j++;
            }
           
        }
         return inter;
    }
};