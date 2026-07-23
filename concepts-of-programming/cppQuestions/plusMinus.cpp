#include <bits/stdc++.h>

using namespace std;
void plusMinus(vector<int> arr) {
    int n = arr.size();
    float positives=0,negatives=0, zeros=0;
    for(float i=0; i<n; i++){
        if(arr[i]>0){
            positives+=1;
        }
        else if(arr[i]<0){
            negatives+=1;
        }
        else if(arr[i]==0){
            zeros+=1;
        }
    }
     positives=positives/n;
     negatives=negatives/n;
     zeros=zeros/n;
     
    
     cout<<setprecision(6);
     cout<<positives<<endl;
     cout<<negatives<<endl;
     cout<<zeros<<endl;
     
     
}

int main() {
    plusMinus({-4, 3 ,-9 ,0, 4, 1});
    plusMinus({1, 2, 3 ,-1 ,-2, -3, 0, 0});
    // cout<<plusMinus({})<<endl;

    return 0;
}
