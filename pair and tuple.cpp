#include <iostream>
using namespace std;

int main(){
   pair <string,int> student_detail {"Arun",90909}; // sath me hi value dena
   student_detail= make_pair("Mohit",23);  //value value assign karna
   student_detail={"Nitin",80};            //value value assign karna
   cout<<student_detail.first<<endl;
   cout<<student_detail.second<<endl;
 }
