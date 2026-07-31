class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0;

        vector<int> freq(26,0);

        for(char c : word)
            freq[c-'a']++;
        
        sort(freq.begin(), freq.end(), greater<int>());

        for(int i=0;i<freq.size();i++){
            if(i<=7){
                ans+=freq[i];
            }else if(i>7 && i<=15){
                ans+=2*freq[i];
            }else if(i>15 && i<=23){
                ans+=3*freq[i];
            }else{
                ans+=4*freq[i];
            }
        }
        return ans;
    }
    
};