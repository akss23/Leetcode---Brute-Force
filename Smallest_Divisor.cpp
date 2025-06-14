class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int max= *max_element(nums.begin(),nums.end());
        
        for(int i=1;i<=max;i++){
            int cnt=0;
            for(int j=0;j<nums.size();j++){
               cnt+= ceil(double(nums[j])/i);
            }
            if(cnt<=threshold) return i;
            
            
        }
        return -1;
    }
}; 
