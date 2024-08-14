#include <iostream>
#include <vector>
using namespace std;
int main(){
   vector<string> fruit{"apple-None","Pineapple-80rs/kg","mango-100/kg"};
   vector<string> output;
   bool is_number;
   for(string i:fruit){
    is_number=false;
    for(char j:i){
            if(isdigit(j)){
               is_number=true;break;
            }
    }
    if(is_number==true){
    output.push_back(i);
   }
   }

   for(string i:output){
    cout<<i<<" ";
   }
}
