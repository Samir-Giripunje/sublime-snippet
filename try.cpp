class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
  
        int n=nums.size();
        for(auto i=0;i<n;i++){
             nums[i]+=nums[i]+i;
        }
        stack<int> st;
        vector<int> v;
        for(auto i=n-1;i>=0;i--){
             while(st.size()&& st.top()<nums[i])
             {
                st.pop();
             }
            if(st.size()){
                v.push_back(st.top())
                
            }
            else{
                v.push_back(-1);
                    
            }
        st.push(nums[i]);}
       reverse(v.begin(),v.end());


        for(auto i=0;i<n;i++){
             cout<<v[i]<<" ";
        }
        
        

    }
};

