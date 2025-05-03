class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n=tops.size();
        int minrotate=INT_MAX;
        for(int t=1;t<=6;t++){
            bool possible=true;
            int rotatet=0;
            int rotateb=0;
            for(int i=0;i<n;i++){
                if(tops[i]!=t && bottoms[i]!=t){
                    possible=false;
                    break;
                }
                else if(tops[i]!=t){
                    rotatet++;

                }

                else if(bottoms[i]!=t){
             rotateb++;
                }
                
            }if(possible){
                    minrotate=min(minrotate,min(rotatet,rotateb));
                }
           
        }
         return (minrotate==INT_MAX)?-1:minrotate;
    }

};