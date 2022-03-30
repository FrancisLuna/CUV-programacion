#include <iostream>
using namespace std;

// reference: https://www.programiz.com/cpp-programming/return-reference

// global variable
int num;

// function declaration
int& test();

int main() {

  // assign 5 to num variable
  // equivalent to num = 5;
  test() = 5;

  cout << num;

  return 0;
}

// function definition
// returns the address of num variable
int& test() {
  return num;
}


