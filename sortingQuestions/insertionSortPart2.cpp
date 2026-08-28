#include <iostream>
#include <vector> 
using namespace std;
void Sorting(vector<int> arr) {
     for(int i=1;i<arr.size();i++){
        int value=arr[i];
        int hole=i;
        while(hole>0 && arr[hole-1]>value){
            arr[hole]=arr[hole-1];
            hole=hole-1;
        }
        arr[hole]=value;
    for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
     }

}

int main() {
    Sorting({2,3,1,4,6,9,2});
    
    
    return 0;
}