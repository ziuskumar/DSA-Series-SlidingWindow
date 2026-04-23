class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        int n = fruits.size();
        int l = 0, r = 0, maxlen = 0;
        map<int,int> mpp;

        while(r < n){

            mpp[fruits[r]]++;

            if(mpp.size() > 2){

                mpp[fruits[l]]--;
                
                if(mpp[fruits[l]]  == 0){
                    mpp.erase(fruits[l]);
                }
                l++;
            }

            if(mpp.size() <= 2){
                int len = r - l + 1;
                maxlen = max(maxlen, len);
            }
            r++;
        }
        return maxlen;
    }
};














////////////////////////////////////BETTER///////////////////////
// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
        
//         int n = fruits.size();
//         int l = 0, r = 0, maxlen = 0;
//         map<int,int> mpp;

//         while(r < n){
//             mpp[fruits[r]]++;

//             while(mpp.size() > 2){

//                 mpp[fruits[l]]--;
                
//                 if(mpp[fruits[l]] == 0){
//                     mpp.erase(fruits[l]);
//                 }
//                 l++;

//             }

//             if(mpp.size() <= 2){
//                 int len = r - l + 1;
//                 maxlen = max(len, maxlen);

//             }
//             r++; 

//         }
//         return maxlen;
//     }
// };








// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
//         int l = 0, r= 0, maxlen = 0;
//         map<int,int> mpp;

//         while(r < fruits.size()){
//             mpp[fruits[r]]++;

//             while(mpp.size() > 2){

//                 mpp[fruits[l]]--;

//                 if(mpp[fruits[l]] == 0){
//                     mpp.erase(fruits[l]);
//                 }
//                 l++;
//             }    
//                 if(mpp.size() <= 2){
//                     int len = r - l + 1;
//                 maxlen = max(len, maxlen);

//                 r++;
//                 }  
//             }
//         return maxlen;
//     }
// };












// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
//         int maxlen = 0;
//         int n = fruits.size();

//         for(int i=0; i<n; i++){
//             map<int,int> mpp;

//             for(int j=i; j<n; j++){
//                 mpp[fruits[j]]++; 

//                 if(mpp.size() > 2){
//                     break;
//                 }

//                 int len = j - i + 1;
//                 maxlen = max(len, maxlen);
//             }
//         }
//         return maxlen;
//     }
// };
