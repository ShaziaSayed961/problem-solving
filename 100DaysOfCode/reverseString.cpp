//reverse a string by modifying the input array in place and with O(1) extra memory
#include <iostream>
#include <string>
using namespace std;
void reverseString(string s,int n){
    string g="";
   for(int i=n-1;i>=0;i--){
       g+=s[i];
   }
   s=g;
   cout<<s;
}
int main() {
    string s;
    cin>>s;
    reverseString(s,5);
    // cout<<s;
    return 0;
}

//------------------------------------------------------------------------------
//C code 
// #include <stdio.h>
// #include <string.h>
// void reverse(char s[], int size){
//     int j=size-1;
//     for(int i=0;i<size/2;i++){
        
//         char c=s[i];
//         s[i]=s[j];
//         s[j]=c;
//         j--;
//     }
    
    
// }
// int main() {
//    char s[100];
//    scanf("%s",s);
//    reverse(s,strlen(s));
//    printf("%s",s);
//     return 0;
// }