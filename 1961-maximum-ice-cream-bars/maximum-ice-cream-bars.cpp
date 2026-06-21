class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
      
        int count=0;
        sort(costs.begin(),costs.end());
        if(coins>0){
        for(int i=0;i<costs.size();i++){
            if(coins>=costs[i]){
                cout<<"coins"<<coins<<endl<<"counts:"<<count<<endl<<"i="<<i<<endl;
                count++;
                coins-=costs[i];
            }
            
        }}
        return count; 
    }
};