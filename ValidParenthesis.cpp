class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> pair{
            {')', '('},
            {']','['},
            {'}','{'}
        };
        stack<char> temp;
        for (char c : s){
            if (pair.count(c)){
                if (!temp.empty() && temp.top() == pair[c]){
                    temp.pop();
                }else{
                    return false;
                }
            }
            else{
                temp.push(c);
            } 
        }
        return temp.empty();        
    }
};