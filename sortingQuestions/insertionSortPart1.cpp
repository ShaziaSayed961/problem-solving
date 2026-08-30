// Given a sorted list with an unsorted number  in the rightmost cell, can you write some simple code to insert  into the array so that it remains sorted?

// Since this is a learning exercise, it won't be the most efficient way of performing the insertion. It will instead demonstrate the brute-force method in detail.

// Sample Input--
// 5
// 2 4 6 8 3

// Sample Output--
// 2 4 6 8 8 
// 2 4 6 6 8 
// 2 4 4 6 8 
// 2 3 4 6 8 

#include <bits/stdc++.h>

using namespace std;

void insertionSort1(int n, vector<int> arr) {
    int value=arr[arr.size()-1];
    int hole=arr.size()-1;
    //  for(int i=1;i<arr.size();i++){
        // for(int i=0;i<arr.size();i++){
        //      cout<<arr[i]<<" ";
        // }
        //   cout<<endl;
        while(arr[hole-1]>value){
            arr[hole]=arr[hole-1];
            hole=hole-1;
           
            for(int i=0;i<arr.size();i++){
             cout<<arr[i]<<" ";
        }
          cout<<endl;
        }
         arr[hole]=value;
      
        for(int i=0;i<arr.size();i++){
             cout<<arr[i]<<" ";
        }
          cout<<endl;
    //  } 
}

int main() {
    insertionSort1(7,{2,3,1,4,6,9,2});
    

    return 0;
}