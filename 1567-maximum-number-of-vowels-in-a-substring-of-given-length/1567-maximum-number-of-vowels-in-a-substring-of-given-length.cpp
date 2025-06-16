class Solution {
public:
    int maxVowels(string s, int k) {
      int count=0; 
      int pre[s.size()+4];
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                count++;
            }
            pre[i]=count;
        }
        int ans=0;
        ans=pre[k-1];
        int j=0;
        for(int i=k;i<s.size();i++){
            ans=max(ans,pre[i]-pre[j++]);
        }
        return ans; 
    }
};