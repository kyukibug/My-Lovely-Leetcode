class Solution {
public:
    bool isPalindrome(string s) {
        int len = 0;
        for(auto i : s){
            if(isupper(i))
                s[len++] = tolower(i);
            else if(islower(i) || isdigit(i))
                s[len++] = i;
        }
        s.resize(len);
        for(int i = 0; i < len; ++i){
            if(s[i] != s[len-i-1])
                return false;
        }
        return true;
    }
};