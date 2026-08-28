#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//this causes abort called error (method 1)
// vector<string> bigSorting(vector<string> unsorted) {


//     for(int i=0;i<unsorted.size()-1;i++){
//     for(int j=i+1;j<unsorted.size();j++){
//       if(unsorted[j].size()<unsorted[i].size()){
//           string temp=unsorted[i];
//           unsorted[i]=unsorted[j];
//           unsorted[j]=temp;
//         // swap(unsorted[i], unsorted[j]);
//       }else if(unsorted[j].size()==unsorted[i].size()){
//           int count=0;
//           while(count!=unsorted[j].size()){
//             if((unsorted[j][count] - '0')!=(unsorted[i][count]-'0')){
                
//             if((unsorted[j][count] - '0')<(unsorted[i][count]-'0')){
//                 string temp=unsorted[i];
//                 unsorted[i]=unsorted[j];
//                 unsorted[j]=temp;
//                 // swap(unsorted[i], unsorted[j]);
                
//             }
//                  break;
//             }else{
//                 count++;
//             }

//           }
//       }
//     }
       
//     // for(int i=0;i<unsorted.size();i++){
//     //     cout<<unsorted[i]<<" ";
//     // }
//     // cout<<"end"<<endl;
// }
// return unsorted;
// }



//----------------------------------------------------
//this resolves abort called error (method 2)
// vector<string> bigSorting(vector<string> unsorted) {
//     for(int i=0;i<unsorted.size()-1;i++){
//     for(int j=i+1;j<unsorted.size();j++){
//       if(unsorted[j].size()<unsorted[i].size()){
//         //   string temp=unsorted[i];
//         //   unsorted[i]=unsorted[j];
//         //   unsorted[j]=temp;
//         swap(unsorted[i], unsorted[j]);
//       }else if(unsorted[j].size()==unsorted[i].size()){
//           int count=0;
//           while(count!=unsorted[j].size()){
//             if((unsorted[j][count] - '0')!=(unsorted[i][count]-'0')){
                
//             if((unsorted[j][count] - '0')<(unsorted[i][count]-'0')){
//                 // string temp=unsorted[i];
//                 // unsorted[i]=unsorted[j];
//                 // unsorted[j]=temp;
//                 swap(unsorted[i], unsorted[j]);
                
//             }
//                  break;
//             }else{
//                 count++;
//             }

//           }
//       }
//     }
       
//     // for(int i=0;i<unsorted.size();i++){
//     //     cout<<unsorted[i]<<" ";
//     // }
//     // cout<<"end"<<endl;
// }
// return unsorted;
// }



//---------------------------------------------------------
//method 3
bool Sorting(string a,string b) {
// for(int i=0;i<unsorted.size()-1;i++){
//     for(int j=i+1;j<unsorted.size();j++){


     if(a.size()!=b.size()){
        return a.size()<b.size();
        //   string temp=unsorted[i];
        //   unsorted[i]=unsorted[j];
        //   unsorted[j]=temp;
      }else if(a.size()==b.size()){
          int count=0;
          while(count<a.size()){
            if((a[count] - '0')!=(b[count]-'0')){
                
            if((a[count] - '0')>(b[count]-'0')){
                return  false;
            }else if((a[count] - '0')<(b[count]-'0'))
                return  true;
            }else{
                count++;
            }

          }
      }
    
       
    // for(int i=0;i<unsorted.size();i++){
    //     cout<<unsorted[i]<<" ";
    // }
    // cout<<"end"<<endl;

 return false;
}


vector<string> bigSorting(vector<string> unsorted) {
sort(unsorted.begin(), unsorted.end(), Sorting);
    return unsorted;
}


int main() {
    // vector <string> result=bigSorting({"1","200","150","3"});
        vector <string> result=bigSorting({"6","31415926535897932384626433832795"
,"1","3","10","3","5"});

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    return 0;
}