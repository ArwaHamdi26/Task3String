#include <iostream>
using namespace std;
#include "../include/stringlib.hpp"

namespace StringLib {

void toUpper(char arr[]) {
  char* ptr = arr;
  int x = 'a' - 'A';
  while (*ptr != '\0') {
    if (*ptr >= 'a' && *ptr <= 'z') {
      *ptr -= x;
      cout << *ptr;
    } else {
      cout << *ptr;
    }
    ptr++;
  }
  cout << endl;
}

void toLower(char arr[]) {
  char* ptr = arr;
  int x = 'a' - 'A';
  while (*ptr != '\0') {
    if (*ptr >= 'A' && *ptr <= 'Z') {
      *ptr += x;
      cout << *ptr;
    } else {
      cout << *ptr;
    }
    ptr++;
  }
  cout << endl;
}

void stringCompare(char arr1[], char arr2[]) {
  char* ptr1 = arr1;
  char* ptr2 = arr2;
  int size1 = 0;
  int size2 = 0;
  while (*ptr1 != '\0') {
    size1 += 1;
    ptr1++;
  }
  ptr1 = arr1;
  while (*ptr2 != '\0') {
    size2 += 1;
    ptr2++;
  }
  ptr2 = arr2;
  if (size1 != size2) {
    cout << "Strings are not equal" << endl;
    return;
  } else {
    while (*ptr1 != '\0' && *ptr2 != '\0') {
      if (*ptr1 != *ptr2) {
        cout << "Strings are not equal" << endl;
        return;
      } else {
        ptr1++;
        ptr2++;
      }
    }
    cout << "Strings are equal" << endl;
  }
}

void stringCopy(char arr1[], char arr2[], int size) {
  int i = 0;

  while (arr1[i] != '\0') {
    arr2[i] = arr1[i];
    i++;
  }
  arr2[i] = '\0';
  cout << endl;
}

int stringLength(char arr[]) {
  int size = 0;
  char* ptr = arr;
  while (*ptr != '\0') {
    size += 1;
    ptr++;
  }
  return size;
}
char* stringCopy2(char arr[]) {
  char* arr2 = new char[stringLength(arr) + 1];

  int i = 0;
  while (arr[i] != '\0') {
    arr2[i] = arr[i];
    i++;
  }
  arr2[i] = '\0';
  return arr2;
}  // namespace StringLib