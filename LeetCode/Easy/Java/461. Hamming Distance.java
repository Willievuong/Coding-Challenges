class Solution {
    public int hammingDistance(int x, int y) {
        String a = Integer.toBinaryString(x);
        String b = Integer.toBinaryString(y);
        
        int size = 0; 
        size = Math.max(a.length(), b.length());
        
        for(int i = 0; i < size; i++){
            if(a.length() > b.length()){
                b = "0" + b;
            }else if (a.length() < b.length()){
                a = "0" + a;
            }   
        }
        
        int distance = 0; 
        Boolean breaker = false; 
        for(int i = 0; i < size; i++){
            if(a.charAt(i) != b.charAt(i)){
                distance++;
            }
        }
        
        
        return distance; 
    }
}