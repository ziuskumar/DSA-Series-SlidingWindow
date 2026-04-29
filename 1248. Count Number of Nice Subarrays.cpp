class Solution {
public:

    int atMost(vector<int>& nums, int k){
        int n = nums.size();
        int l = 0, r = 0;
        int sum = 0, total = 0;

        while(r < n){

            sum += nums[r] % 2;   // treat odd as 1

            while(sum > k){
                sum -= nums[l] % 2;
                l++;
            }

            total += (r - l + 1); // count subarrays ending at r
            r++;
        }

        return total;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        
        return atMost(nums, k) - atMost(nums, k - 1);

    }
};












// class Solution {
// public:
//     int numberOfSubarrays(vector<int>& nums, int k) {

//         int n = nums.size();
//         int total = 0;

//         for(int i=0; i<n; i++){
//             int cnt = 0;

//             for(int j=i; j<n; j++){
//                 if(nums[j] % 2 != 0){
//                     cnt++;
//                 }
                
//                 if(cnt == k){
//                     total++;
//                 }

//                 else if(cnt > k){
//                     break;
//                 }
                
//             }

//         }
//         return total;
//     }
// };
