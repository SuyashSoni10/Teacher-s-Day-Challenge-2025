class Solution {
public:
    bool isPalindrome(string s) {
        // range of capital letters in ascii 65 - 90, and lower case is 32 more than the chapital letter in ascii value
        // for(int i = 0; i < s.length(); i++){
        //     char x = s[i];
        //     if (65 <= int(x) && int(x) <= 90){
        //         int(x) = int(x) + 32; 
        //         s[i] = x;
        //     }

        // }
        string cleaned_string = "";
        for (char c : s){
            if (isalnum(c)){
                cleaned_string += tolower(c);
            }
        }
        string temp = cleaned_string;
        int l, r;
        l = 0;
        r = cleaned_string.length() - 1;
        while(l < r){
            swap(temp[l], temp[r]);
            l++;
            r--;
        }
        if (temp == cleaned_string) {
            return true;
        } else {
            return false;
        }
    }
};