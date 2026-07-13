#include <iostream>
#include <string>
#include <cmath>
using namespace std;

 string caesarCipher(string h, int k) {
     string p="";
     if(k>26){
         k=k%26;
     }
     int i=0;
     while(h[i]){
         if((int(h[i])< 65) || (int(h[i])>90 && int(h[i])<97) || (int(h[i])>122)){
             p+=char(int(h[i]));
            //  cout<<char(int(h[i]))<<" "<<char(int(h[i]))<<endl;
         }else if(int(h[i])<=90){
             if((int(h[i])+k)<=90){
                 p+=char(int(h[i])+k);
            //  cout<<char(int(h[i]))<<" "<<char(int(h[i])+k)<<endl;
           }else{
               p+=char((abs(int(h[i])+k)-90)+64);
            //   cout<<char(int(h[i]))<<" "<<char((int(h[i])+k)-90+64)<<endl;
            }
         }else{
             if(int(h[i])+k<=122){
                p+=  char(int(h[i])+k);
            //  cout<<char(int(h[i]))<<" "<<char(int(h[i])+k)<<endl;
         }else{
             p+=char(abs((int(h[i])+k)-122)+96);
            //  cout<<char(int(h[i]))<<" "<<char((int(h[i])+k)-122+96)<<endl;
         }
             }
           i++;
     }
     return p;
}
int main() {
    
    cout<<caesarCipher("middle-Outz", 2)<<endl;
    //  okffng-Qwvb
    return 0;

}

