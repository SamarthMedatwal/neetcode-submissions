class Solution {
   public:
    bool isPalindrome(string s) {
        int start =0; 
        int end = s.length()-1;

        for (auto& x : s) {
        x = tolower(x);
        }

        while(start<=end){
            if(s[start] == ' ' || !isalnum(s[start])){
                start++;
            }
            else if(s[end] == ' ' || !isalnum(s[end])){
                end--;
            }
            else if(s[start] != s[end]){
                return false;
            }
            else{
                start++;
                end--;
            }

        }
        return true;

    }
};
