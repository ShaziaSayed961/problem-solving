#include <bits/stdc++.h>
using namespace std;
int jumpingOnClouds(vector<int> c, int k) {
 int e=100;
     
 int count=0;
 int i=0;
do{
      
    i=(i+k)%c.size();
    // cout<<"i:"<<i<<endl;
    if(c[i]==1){
        e-=2;
        count++;
    }else{
        count++;
    }
   
    // cout<<"c:"<<c[i]<<endl;
    // cout<<"count:"<<count<<endl;
 } while(i!=0);   
 
 return e-count;
}

int main(){
   cout<<jumpingOnClouds({0 ,0, 1, 0, 0, 1 ,1 ,0}, 2)<<endl;//92

    return 0;
}