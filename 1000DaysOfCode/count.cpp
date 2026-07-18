#include <iostream>
#include <string>
#include <regex>
#include <cctype>
using namespace std;
void countCharacters(string s){
    int countCons=0;
    int countVowels=0;
    int countDigit=0;
    int countChars=0;
    for(int i=0;i<s.length();i++){
        if (regex_search(string(1, s[i]), regex("[b-df-hj-np-tv-z]")) || regex_search(string(1, s[i]), regex("[B-DF-HJ-NP-TV-Z]")) ){
          countCons++;
      }else if(regex_search(string(1, s[i]), regex("[a,e,i,o,u]")) ||regex_search(string(1, s[i]), regex("[A,E,I,O,U]"))) {
          countVowels++;
      }else if(isdigit(s[i])){
          countDigit++;
      }else if(regex_search(string(1, s[i]), regex("[!,@,#,$,^,&,*,%,(,),_,-,+,_,`]"))){
           countChars++;
      }
    }
    cout<<"Vowels:"<<countVowels<<endl;
    cout<<"Consonants:"<<countCons<<endl;
    cout<<"Digits:"<<countDigit<<endl;
    cout<<"Special Characters:"<<countChars<<endl;
    
}
int main(){
    string s;
    cin>>s;
    countCharacters(s);
    return 0;
}