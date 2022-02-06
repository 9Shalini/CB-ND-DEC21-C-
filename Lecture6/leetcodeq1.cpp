// Question link : https://leetcode.com/problems/reverse-bits/




class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        
//         loop
        for(int i=31;i>=0;i--){
             int rem=(n&1);//0000000000000..001011
        if(rem==1){
        ans=ans+(rem<<i);//10000000000000-->31 time 1000000000-->30 //1101000000000
        }
        n=n>>1;//0000000000000..001
        
            
        }
        return ans;
       
        
        
    }
};