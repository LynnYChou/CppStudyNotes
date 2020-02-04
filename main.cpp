
#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
  
  /* Notes for understanding data types and variables in C++ programming */

  int age {10}; // Initialize an integer variable with value 10
  // Same as int age = 10
  
  signed x; // Keep both positive and negative integers (this is the default state for data type "int")
  unsigned y; // Keep only the positive integers
  
  // Use these data types to initialize real numbers

  float a;
  double b;
  long c;

  // If the programmer is not sure about the data type of a particular value
  // You MUST assign a value to this variable when using this data type

  auto myVar = 9.5; // Let the compiler decide the data type
  cout << "Type of myVar: " << typeid(myVar).name() << endl;

  /* Understanding reference variable */

  int x = 10;
  int &v = x; // You MUST initialize a reference variable (to which variable it is referred to)

  /* Understanding arithmetic operations */
  
  int first_oper {20};
  int second_oper {10};

  int result;

  result = first_oper % second_oper;
  cout << "Your result is :" << result << endl;

  /* Take input from keyboard */

  int var {}; // Initialize var with value 0
  cout << "Please enter an integer value: ";
  cin >> var; //Extract the value according to the type of var
  cout << "Var is: " << var << endl;

  /* In this example, the result will be 0, can you see why? */
  
  int x;
  int y;
  double result;

  result = x / y;
  cout << result << endl;

  // The result of an arithmetic operation is decided by (the highest precedence data type of) the operands 

  /* Solution 1 (by explicit casting) */

  int x;
  int y;
  double result;
  result = (double)x / y;


  return 0;
}



























