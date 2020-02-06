// Notes about programming in C++ from the beginning to beyond

#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
/*
  // Understanding data types and variables
  int age {10}; // Initialize an integer variable with value 10
                // It's similar to int age = 10;
  
  signed x; // Keep both positive and negative integers (this is the default state for the integer data type)
  unsigned y; // Keep only the positive integers
  
  // Use these data types to initialize real numbers
  float a;
  double b;
  long c;

  // If the programmer is not sure about the data type of a particular value
  // By using auto, you MUST assign a value to this variable when using this data type
  auto myVar = 9.5; // Let the compiler decide the data type
  cout << "Type of myVar: " << typeid(myVar).name() << endl;

  // Understanding reference variable
  int x = 10;
  int &v = x; // You MUST initialize a reference variable (indicate to which variable it is referred to)

  // Understanding arithmetic operations
  int first_oper {20};
  int second_oper {10};
  int result;

  result = first_oper % second_oper;
  cout << "Your result is :" << result << endl;

  // Take input from keyboard
  int var {}; // Initialize var with value 0
  cout << "Please enter an integer value: ";
  cin >> var; //Extract the value according to the type of var
  cout << "Var is: " << var << endl;

  // Error-generating example
  int x;
  int y;
  double result;

  result = x / y;
  cout << result << endl;
  // NOTES: the result of an arithmetic operation is decided by (the highest precedence data type of) the operands 

  // Solution (by explicit casting)
  int x;
  int y;
  double result;
  result = (double)x / y;
*/
  // Understand pointers
  int temp1 = 300, temp2 = 351;
  cout << "Address of temp1: " << &temp1 << endl;
  cout << "Address of temp2: " << &temp2 << endl;
  int *pt2 = &temp2;
  cout << "Content of pt2: " << pt2 << endl;
  cout << "Content of the location: " << *pt2 << endl; 
  pt2 += 1;
  cout << "Content of pt2 now: " << pt2 << endl;
  cout << "Content of the location now: " << *pt2 << endl; 

  // Convert a character pointer to an integer pointer
  char *pk; // declare a character pointer pk
  pk = (char *)pt2; // assign the content of an integer pointer (pt2) to a character pointer (pk)
  cout << "Content of the location that pk is pointed to: " << *pk << endl;
  // NOTES: since pk is a character pointer (which only keep one byte),
  // it's now pointed to the first address of the value 351 (out of four addresses)
  // in which contains the value of 44 (in binary). So by ASCII table, the output of *pk is "," 





  return 0;

}



























