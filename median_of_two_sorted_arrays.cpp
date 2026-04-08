#include <iostream>
#include <vector>
#include <algorithm>

double median(std::vector<int> arr1, std::vector<int> arr2){
  std::vector<int> sorted;
  double med;
  size_t i {0};

  while(arr1[i] && arr2[i]){
    if(i < arr1.size()) sorted.push_back(arr1[i]);   
    if(i < arr2.size()) sorted.push_back(arr2[i]);
    i++;
  }

  std::sort(sorted.begin(), sorted.end());
  for(int& i : sorted){
    std::cout << i << ", ";
  } 

  if(sorted.size() % 2 != 0){
    return sorted[sorted.size() / 2];
  }
  
  med = (sorted.size() / 2 + sorted.size() / 2 + 1) / 2.0;
  std::cout << med << "\n";
  return med;
}


int main(){
  std::vector<int> arr1 = {1, 2};
  std::vector<int> arr2 = {3, 4};

  median(arr1, arr2);

  return 0;

}
