#include <iostream>
#include <set>

int find_substring(std::string str){
  if(str.empty()) return 0;
  int head {0}, curr {0}, len {0};
  std::set<char> seen;

  for(size_t tail {0}; tail < str.size(); tail++){
    while(seen.count(str[tail])){
      seen.erase(str[head]);
      head++; 
      curr--;
    }
    seen.insert(str[tail]);
    curr++;
    if(curr > len) len = curr;
  }
  std::cout << len;
  return len;
}


int main(){
  std::string s1 = "abcabcbb";
  std::string s2 = "bbbbb";
  std::string s3 = "pwwkew";

  find_substring(s3);
  
  return 0;
}
