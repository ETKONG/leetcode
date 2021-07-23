class Solution {
public:
    int balancedStringSplit(string s) {
        int split = 0;
        int numL = 0;
        int numR = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'R')
            {
                numR++;                    
            }
            else
            {
                numL++;
            }
            if (numR == numL)
            {
                split++;
                numR = 0;
                numL = 0;
            }
        }
        
        return split;
    }
};
