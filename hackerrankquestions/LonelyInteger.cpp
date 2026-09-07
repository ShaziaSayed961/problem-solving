//Given an array of integers, where all elements but one occur twice, find the unique element.

#include <iostream>
#include <vector>
using namespace std;
int lonelyinteger(vector<int> a) {
   for(int i=0;i<a.size();i++){
       int target=a[i];
       int count=0;
       for(int j=0;j<a.size();j++){
           if(a[j]==target){
               count++;
           }
           if(count==2){
               break;
           }
       }
       if(count!=2){
           return target;
       }
   }
    return -1;
}
int main() {
   cout<<lonelyinteger({1,1,2})<<endl;//2
   cout<<lonelyinteger({0,0,1,2,1})<<endl;//2
 cout<<lonelyinteger({1,2,3,4,3,2,1})<<endl;//4
    return 0;
}