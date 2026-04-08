#include <iostream>
#include <vector>

double median(std::vector<int> arr1, std::vector<int> arr2){
  std::vector<int> sorted;
  double med;
  size_t i {0}, j {0};

  while(i < arr1.size() && j < arr2.size()){
    arr1[i] < arr2[j] ? sorted.push_back(arr1[i++]) : sorted.push_back(arr2[j++]);
  }

  while(i < arr1.size()) sorted.push_back(arr1[i++]);
  while(j < arr2.size()) sorted.push_back(arr2[j++]);

  if(sorted.size() % 2 != 0){
    return sorted[sorted.size() / 2];
  }
  
  med = (sorted[sorted.size() / 2 - 1] + sorted[sorted.size() / 2]) / 2.0;
  std::cout << med << "\n";
  return med;
}


int main(){
  std::vector<int> arr1 = {1, 2};
  std::vector<int> arr2 = {3, 4};

  median(arr1, arr2);

  return 0;

}
