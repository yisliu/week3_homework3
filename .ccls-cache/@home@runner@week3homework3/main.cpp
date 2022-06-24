#include <iostream>
#include <string>
using namespace std;

int main() {
  //make string for input
  string num;
  int count=0;
  cin>>num;
  //make for loop to count how many 1s is in string
  for(int i = 0; i<num.length(); i++){
    if(num[i]=='1'){
      count++;
    }
  }
  //output
  cout<<count;
}