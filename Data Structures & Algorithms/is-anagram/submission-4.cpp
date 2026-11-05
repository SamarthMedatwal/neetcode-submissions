class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> ans;

        if(s.size() != t.size()){
            return false;
        }

        for(int i=0; i<s.size(); i++){
            ans[s[i]]++;
        }

        for(int i=0; i<t.size(); i++){
            ans[t[i]]--;
            if(ans[t[i]]<0){
                return false;
            }
        }
        return true;
    }
};
