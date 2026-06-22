class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> up;
        up['b']=0;
        up['a']=0;
        up['l']=0;
        up['o']=0;
        up['n']=0;

        for(int i=0;i<text.length();i++){
            if(up.contains(text[i])) up[text[i]]++;
        }
        up['l']=up['l']/2;
        up['o']=up['o']/2;
        // for (auto& [key, value] : up) {
        //     cout << "Key: " << key << ", Value: " << value << "\n";
        // }
        int mini=INT_MAX;
        for(auto& [key,value] :up){
            mini=min(mini,value);
        }
        return mini;
    }
};