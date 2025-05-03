#include <iostream>
using namespace std;
 
 
int main(){
  string n;
  cin>>n;
  string s;
  cin>>s;
  string r = "";
  for (int i = n.length() - 1; i >= 0; i --){
    r += n[i];
  }
  if (r==s){
      cout<<"YES";
      }
    else{
        cout<<"NO";}
  return 0;
