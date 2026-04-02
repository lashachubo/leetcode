#include <iostream>
#include <vector>
#include <algorithm>

int find_median(std::vector<int>& num1, std::vector<int>& num2){
  std::vector<int> sorted;
  double median;

  for(size_t i {0}; i < num1.size(); i++){
    sorted.push_back(num1[i]);
  }
  for(size_t i {0}; i < num2.size(); i++){
    sorted.push_back(num2[i]);
  }

  std::sort(sorted.begin(), sorted.end());
  int mid = sorted.size() / 2;

  if(sorted.size() % 2 == 0){
    median = (sorted[mid] + sorted[mid - 1]) / 2.0;
  } else {
    median = sorted[mid];  
  }
  std::cout << "\n" << sorted[sorted.size() / 2] << " " << sorted[(sorted.size() / 2) - 1] << "\n";
  std::cout << median;
  return median;
}


int main(){
  std::vector<int> num1 = {1, 2};
  std::vector<int> num2 = {3, 4};

  find_median(num1, num2);
  
  return 0;
}