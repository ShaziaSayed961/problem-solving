#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


// brute force solution
// int longestSubarray(vector <int>  array, int k){
//     int maxLen=0;
//     for(int i=0;i<array.size();i++){
//         int sum=0;
//         for(int j=i;j<array.size();j++){
//             sum+=array[j];
//             if(sum<=k){
//                 maxLen=max(maxLen,j-i+1);
//             }else{
//                 break;
//             }
//         }
//     }
    
//     return maxLen;
// }

// better solution
// int longestSubarray(vector <int> array,int k){
// int l=0;
// int r=0;
// int sum=0;
// int maxLen=0;
// while(r<array.size()-1){
//     sum+=array[r];
//     while(sum>k){
//         sum-=array[l];
//         l++;
//     }
//     if(sum<=k){
//         maxLen=max(maxLen, r-l+1); 
//     }
//      r++;

// }
// return maxLen;
// }



int main() {
    cout<<longestSubarray({2,2,5,1,10,10},14)<<endl;
    return 0;
}