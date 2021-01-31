class Solution {
public:
    string removeDuplicates(string s, int k) {
        int st=0; 
        for(int i=1;i<s.length();)
        {   st=i-1;   //store position of begining from repeat start
            if(s[i]==s[i-1])
            while(s[i]==s[i-1])   //if repeation
            {
                
                if(i-st+1==k)   //if number of repeating element == k 
                {
                    s.erase(st,k);i=1;break; //erase k element from starting position (st)
                }
                i++;
            }
           else i++;
         }
        return s;
    }
};

//LeetCode Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/
//Time Complexity:O(n)
//Space Cpmplexity: O(1)
