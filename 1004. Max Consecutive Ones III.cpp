int longestOnes(vector<int>& nums, int k) {
     int i = 0;
     int j = 0;
     int ans = 0;
     int maxvalue = 0;
     int one = 0;
    
     while(j<nums.size()){
          if(nums[j]==1){
              one++;
              maxvalue = max(maxvalue,one);
          }
          if(j-i+1-maxvalue<=k) ans = max(ans,j-i+1);
          else{
              if(nums[i]==1) one--;
              i++;
          }
          j++;
     }

     return ans;
}
