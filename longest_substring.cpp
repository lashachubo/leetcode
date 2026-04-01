#include <iostream>
#include <set>

int find_substring(std::string str){
  if(str.empty()) return 0;
  char* head = &str[0];
  char* tail = &str[0];
  int curr {1};
  int len {1};
  std::set<char> set;

  set.insert(*tail);
  
  while(tail != str.data() + str.size() - 1){
    tail++;
    
    while(set.count(*tail)){
      set.erase(*head);
      head++;
      curr--;
    }
    
    curr++;  
    set.insert(*tail);
    if(curr > len) len = curr;
  }

  std::cout << len << "\n";
  return len;
}


int main(){
  std::string s1 = "abcabcbb";
  std::string s2 = "bbbbb";
  std::string s3 = "pwwkew";

  find_substring(s3);
  
  return 0;
}
