/**
 * @file hello.cpp
 * 
 * 参考 https://abseil.io/docs/cpp/quickstart
 * 
 * @author zhengxu  
 * @brief 
 * @version 0.1
 * @date 2024-04-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream>
#include <string>
#include <vector>

#include "absl/strings/str_join.h"

int main() {
  std::vector<std::string> v = {"foo", "bar", "baz"};
  std::string s = absl::StrJoin(v, "-");

  std::cout << "Joined string: " << s << "\n";

  return 0;
}