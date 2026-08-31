#include <iostream>
#include <vector> 
using namespace std;

int runningTime(vector<int> arr) {
       int count=0;
     for(int i=1;i<arr.size();i++){
        
        int value=arr[i];
        int hole=i;
        while(hole>0 && arr[hole-1]>value){
            arr[hole]=arr[hole-1];
            hole=hole-1;
            count++;
            
        }
        //  arr[hole]=value;
        //  for(int i=0;i<arr.size();i++){
        //      cout<<arr[i]<<" ";
        // }
        //   cout<<endl;
        
     }
     
   return count;
}
int main() {
    cout<<runningTime({2,3,1,4,6,9,2});
    
    
    return 0;
}
