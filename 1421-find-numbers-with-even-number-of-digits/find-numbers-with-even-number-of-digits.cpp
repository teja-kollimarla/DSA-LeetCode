class Solution {
public:
    int noOfEven(long long num){
        int c=0;
        cout<<num<<endl;
        while(num>0){
            c++;
            num/=10;
            cout<<"num= "<<num<<endl;

        }
        return c;
    }

    int findNumbers(vector<int>& nums) {
        int c=0;
        for(auto i :nums){
            if(noOfEven(i)%2==0){
                c++;
            }
        }
        return c;
    }
};