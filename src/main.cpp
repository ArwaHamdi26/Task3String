#include "../include/stringlib.hpp"
int main() {
  char arr[] = "Hello World!";
  char arr2[] = "Hello World!";
  StringLib::stringCompare(arr, arr2);
  StringLib::toUpper(arr);
  StringLib::toLower(arr);
  StringLib::stringCopy(arr);
}