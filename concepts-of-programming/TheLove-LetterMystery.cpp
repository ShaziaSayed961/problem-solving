#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int theLoveLetterMystery(string s) {
int j=s.size()-1;
    int count=0;
for(int i=0;i<s.size()/2;i++){
    // cout<<":C:"<<endl;
    if(s[i]!=s[j]){
        // cout<<"H"<<endl;
      break;  
    }else{
        // cout<<":i:"<<endl;
        count++;
    }
    j--;
}

int counter=0;
// cout<<"C:"<<count<<endl;
if(count==s.size()/2){
      return 0;
  }else{
      int j=s.size()-1;
      
      for(int i=0;i<s.size()/2;i++){
       // cout<<":C:"<<endl;
       if(s[i]!=s[j]){
            
            if((int(s[i])-int(s[j])) <= (int(s[j])-int(s[i])) ) {
                counter+=(int(s[i])-int(s[j]));
            }else{
                counter+=(int(s[j])-int(s[i]));
            }
       }
    //   else{
    //     // cout<<":i:"<<endl;
    //     count++;
    //   }
       j--;
}
  }
  
  
return abs(counter);
}

int main(){
    cout<<theLoveLetterMystery("abc")<<endl;//2
    cout<<theLoveLetterMystery("abcba")<<endl;//0
    cout<<theLoveLetterMystery("abcd")<<endl;//4
    return 0;
}