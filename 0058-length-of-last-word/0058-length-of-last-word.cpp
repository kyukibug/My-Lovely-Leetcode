class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = -1;
        int i = s.size() - 1;
        while(s[i] == ' '){
            i--;
        }
        int end = i;
        while(i >= 0){
            if(s[i] == ' '){
                count = end - i;
                break;
            }
            i--;
        }
        if(count == -1)
            count = end + 1;
        return count;
    }
};