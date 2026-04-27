
Interview problem list
Your EXP
2920
1
day streak
4
Problem
Submissions
Hints & solutions
Discuss
 Longest Substring with At Most K Distinct Characters
Moderate
80/80
Average time to solve is 20m
Contributed by
175 upvotes
Asked in companies
Problem statement
You are given a string 'str' and an integer ‘K’. Your task is to find the length of the largest substring with at most ‘K’ distinct characters.

For example:
You are given ‘str’ = ‘abbbbbbc’ and ‘K’ = 2, then the substrings that can be formed are [‘abbbbbb’, ‘bbbbbbc’]. Hence the answer is 7.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 10
1 <= K <= 26
1 <= |str| <= 10^6

The string str will contain only lowercase alphabets.    

Time Limit: 1 sec
Note:
You do not need to print anything. It has already been taken care of. Just implement the function.
Sample Input 1:
2
2
abbbbbbc
3
abcddefg
Sample Output 1:
7
4
Explanation:
For the first test case, ‘str’ = ‘abbbbbbc’ and ‘K’ = 2, then the substrings that can be formed are [‘abbbbbb’, ‘bbbbbbc’]. Hence the answer is 7.

For the second test case, ‘str’ = ‘abcddefg’ and ‘K’ = 3, then the substrings that can be formed is [‘cdde’, ‘ddef’]. Hence the answer is 4.
Sample Input 2:
2
3
aaaaaaaa
1
abcefg
Sample Output 2:
8   
1   


Hints:
1. Try to think of a brute force approach.
2. Try to think of a two-pointer solution.
C++ (g++ 5.4)
12345678910111213141516171819202122232425262728293031

Last saved at 11:04 AM

    
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









#include<bits/stdc++.h>
using namespace std;

int kDistinctChars(int k, string &str)
{
    // Write your code here
    int n = str.size();
    int l = 0, r = 0, maxlen = 0;
    map<int, int> mpp;

    while(r < n){

        mpp[str[r]]++;

        if(mpp.size() > k){

            mpp[str[l]]--;
            
            if(mpp[str[l]] == 0){
                mpp.erase(str[l]);
            }
            l++;
        }

        else{
            maxlen = max(maxlen, r - l + 1);
        }
        r++;
    }
    return maxlen;
}


