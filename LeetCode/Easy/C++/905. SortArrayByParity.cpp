#include <vector> 

/* 905. Sort Array By Parity */
/* Brute Force Solution */
/* Runtime of O(n) */

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> output; 
        
        /* Putting even in the array first */
        /* O(n) */
        for(int i = 0; i < A.size(); i++){
            if(A[i] % 2 == 0){
                output.push_back(A[i]);
            }
        }

        /* Putting odd in the array second */
        /* O(n) */
        for(int i = 0; i < A.size(); i++){
            if(A[i] % 2){
                output.push_back(A[i]);
            }
        }
        
        return output; 
    }
};