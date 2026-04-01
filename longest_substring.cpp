#include <iostream>
#include <set>

int find_substring(std::string s1){
  int* head = &s1;
  int* tail = &s1;
  int curr {1};
  int len {0};
  std::unordered_set<char> set;

  while(tail != s1.end()){
  tail++;  
  if(!set.count(tail){
      head++;
    }    
    set.append(tail);
    
    if(curr > len) len = curr;
    
    
  }
  
}


int main(){
  std::string s1 = "abcabcbb";
  std::string s2 = "bbbbb";
  std::string s3 = "pwwkew";

  find_substring(s1);
  
  return 0;
}
