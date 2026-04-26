class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int n = s.size();
        int maxlen = 0;

        for(int i=0; i<n; i++){
            int countA = 0;

            for(int j=i; j<n; j++){
                if(s[j] == 'A'){
                    countA++;
                }

                if(countA <= k){
                    int len = j - i + 1;
                    maxlen = max(maxlen, len);
                    
                }
                else{
                    break;
                }
            }
        }
        return maxlen;
    }
};
