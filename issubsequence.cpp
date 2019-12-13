class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ls = s.length();
        int lt = t.length();
        int ans  = 0;
        int k = 0;
        for(int i=0;i<ls;i++){
            bool flag = false;
            for(int j=k;j<lt;j++){
                if(t[j]==s[i]){
                    flag = true;
                    k = j+1;
                    ans++;
                    break;
                  
                }
            }
            if(!flag) break;
        }
        
        return ans==ls;
    }
};
