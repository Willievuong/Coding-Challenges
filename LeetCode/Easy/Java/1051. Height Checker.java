
// Brute force solution 
// O(n)

class Solution {
    public int heightChecker(int[] heights) {
        int count = 0; 
        int sorted[] = new int[heights.length]; 
            
        for(int i = 0; i < heights.length; i++){
            sorted[i] = heights[i];
        }
        
        Arrays.sort(sorted);
        
        for(int i = 0; i < heights.length; i++){
            if(sorted[i] != heights[i]){
                count++;
            }
        }
        
        return count; 
        
    }
}