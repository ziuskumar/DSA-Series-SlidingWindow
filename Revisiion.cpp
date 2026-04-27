class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n = cardPoints.size();
        int lsum = 0, rsum = 0, maxsum = 0;

        for(int i = k-1; i>=0; i--){
            lsum = lsum + cardPoints[i];
            maxsum = lsum;
        }

        int ridx = n-1;

        for(int i=k-1; i>=0; i--){
            lsum = lsum - cardPoints[i];
            rsum = rsum + cardPoints[ridx];
            ridx--;

            maxsum = max(maxsum, (lsum + rsum));
        }
        return maxsum;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.size();
        int l=0, r=0, maxlen = 0;

        int hash[256];
        memset(hash, -1, sizeof(hash));

        while(r < n){
            if(hash[s[r]] != -1 && hash[s[r]] >= l){
                l = hash[s[r]] + 1;
            }

            int len = r - l + 1;
            maxlen = max(maxlen, len);

            hash[s[r]] = r;
            r++;
        }

        return maxlen;
    }
};






















// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
        
//         int n = s.size();
//         int l = 0, r = 0;
//         int hash[256];
//         memset(hash, -1, sizeof(hash));
        
//         int maxlen = 0;

//         while(r < n){

//             if(hash[s[r]] != -1 && hash[s[r]] >= l){
//                 l = hash[s[r]] + 1;
//             }

//             int len = r - l + 1;
//             maxlen = max(maxlen, len);

//             hash[s[r]] = r;
//             r++;
//         }
//         return maxlen;
        
//     }
// };


// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
        
//         int n = s.size();
//         int hash[256];
//         memset(hash , -1, sizeof(hash));
//         int l = 0, r = 0, maxlen = 0;

//         while(r < n){

//             if(hash[s[r]] != -1 && hash[s[r]] >= l){
//                 l = hash[s[r]] + 1;
//             }

//             int len = r - l + 1;
//             maxlen = max(len , maxlen);

//             hash[s[r]] = r;
//             r++;
//         }
//         return maxlen;
//     }
// };









// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
        
//         int n = s.size();
//         int maxlen = 0;

//         for(int i=0; i<n; i++){
//             int hash[256] = {0};

//             for(int j=i; j<n; j++){
//                 if(hash[s[j]] == 1){
//                     break;
//                 }    

//                 int len = j-i+1;
//                 maxlen = max(maxlen, len);

//                 hash[s[j]] = 1;
                
//             }
//         }
//         return maxlen;
//     }
// };

Fruits into basket rev 
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        int n = fruits.size();
        int l = 0, r = 0, maxlen = 0;
        map<int,int>mpp;
        
        while(r < n){
            mpp[fruits[r]]++;

            while(mpp.size() > 2){
                 
                mpp[fruits[l]]--;
                if(mpp[fruits[l]] == 0){
                    mpp.erase(fruits[l]);
                }
                l++;
            }

            if(mpp.size() <= 2){
                maxlen = max(maxlen, r - l + 1);
            }
            r++;
        }

        
        return maxlen;
    }
};







