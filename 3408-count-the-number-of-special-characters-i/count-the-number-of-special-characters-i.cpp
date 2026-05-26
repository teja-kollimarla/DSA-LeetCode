class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count=0;
        string s="";
        for(char c: word){
            if((word.contains(toupper(c)) && word.contains(tolower(c)) ) && (!s.contains(toupper(c)) && !s.contains(tolower(c)))){
                count++;
                s+=c;
                s+=toupper(c);
            }
        }
        cout<<s;
        return count;
    }

};