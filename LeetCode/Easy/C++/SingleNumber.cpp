class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::map<int, int> mapper;
        std::map<int,int>::iterator it;
    
        for(int i = 0; i < nums.size(); i++){
            
            
            if(mapper[nums[i]] != nums[i]){
                mapper[nums[i]] = nums[i];
            }else{
                it = mapper.find(nums[i]);
                mapper.erase(it);
            }
        }
        
        it = mapper.begin();
        return it->second;   
    
        
        
    }
};