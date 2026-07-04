#include <bits/stdc++.h>
using namespace std;

int jumpingOnClouds(vector<int> c) {
int i=0;
    int count=0;
    while(i<c.size()-1){
         count++;
       if(c[i+2]==1){
        i=i+1;
       }else{
        i=i+2;
       }
    //    cout<<i<<endl;
    }
    return count;
}

int main(){
   cout<<jumpingOnClouds({0, 0, 1, 0 ,0 ,1 ,0})<<endl;//4

    return 0;
}