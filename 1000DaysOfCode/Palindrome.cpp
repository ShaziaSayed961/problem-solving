// Day 2 of 1000 dayes of code

// problem: check if a string is palindrome or not

//code in C
#include <iostream>
#include <string>
using namespace std;
int isPalindrome(string s){
    
    int count=0;
    // cout<<a.length();
    int j=s.length()-1;
    for(int i=0;i<s.length()/2;i++){
        // cout<<"I:"<<s[i]<<" j:"<<s[j]<<endl;
        if(s[i]!=s[j]){
            count++;
        }
        j--;
    }
    if(count!=0){
        return 0;
    }else{
        return 1;
    }
}
int main() {
    // string s="racecar";
    string s;
    cin>>s;
    if(isPalindrome(s)){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }
    
    
    
    
    // if(count==0){
    //     cout<<"pal";
    // }else{
    //     cout<<"notpal";
    // }
    return 0;
}

//========================================================================================
//code in C

// #include <stdio.h>
// #include <string.h>
// int isPalindrome(char s[]){
//     int n=strlen(s);
//     int j=n-1;
//     int count=0;
//    for(int i=0;i<n/2;i++){
//        if(s[i]!=s[j]){
//            count++;
//        }
//        j--;
//    } 
   
//    if(count==0){
//        return 1;
//    }else{
//        return 0;
//    }
// }
// int main() {
//     char s[101];
//     scanf("%100s",s);
    
//     if(isPalindrome(s)){
//         printf("Palindrome");
//     }else{
//         printf("Not Palindrome");
//     }
    
//     return 0;
// }