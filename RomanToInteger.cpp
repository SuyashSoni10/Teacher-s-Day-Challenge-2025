class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> RomanVal ={
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        // int len = s.size();
        int result = 0;
        for (int i = 0; i < s.size(); i++){
            // int current = RomanVal[s[i]];
            // int next = (i + 1 < len) ? RomanVal[s[i+1]] : 0;
            // if (current < next){
            //     result -= current;
            // }else{
            //     result += current;
            // }
            if ((i + 1 < s.size()) && RomanVal[s[i]] < RomanVal[s[i+1]]){
                result -= RomanVal[s[i]];
            }else{
                result += RomanVal[s[i]];
            }
        }
        return result;
    }
};