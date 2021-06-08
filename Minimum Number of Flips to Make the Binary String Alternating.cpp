Minimum Number of Flips to Make the Binary String Alternating

class Solution {
public:
    int minFlips(string s) {
        s+=s;
        string s1 = "";
        string s2 = "";
        for(int i =0;i<s.size()/2;i++){
            s1+="01";
            s2+="10";
        }
        int ans1,ans2;
        ans1=ans2=0;
        for(int i =0;i<s.size()/2;i++){
            if(s[i]!=s1[i])ans1++;
            if(s[i]!=s2[i])ans2++;
        }
        int ans = min(ans1,ans2);
        for(int i =s.size()/2;i<s.size();i++){
            if(s[i-s.size()/2]!=s1[i-s.size()/2])ans1--;
            if(s[i-s.size()/2]!=s2[i-s.size()/2])ans2--;
            if(s[i]!=s1[i])ans1++;
            if(s[i]!=s2[i])ans2++;
            ans = min({ans1,ans2,ans});
        }
        return ans;
    }
};
