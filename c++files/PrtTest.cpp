// Example program Pointer
#include <iostream>
#include <string>

int main()
{
  int i = 5;
  int& ref = i;
  int *ptr = &i;
  int **ptr2 = &ptr;
  std::cout << "Value of i:" << i << "\n";
  std::cout << "Adress of i:" << &i << "\n";
  std::cout << "Value of ref:" << ref << "\n";
  std::cout << "Adress of ref:" << &ref << "\n";
  std::cout << "Value of ptr:" << ptr << "\n";
  std::cout << "Adress of ptr: " << &ptr << "\n";
  std::cout << "Value ptr points to:" << *ptr << "\n";
  std::cout << "value of pointer ptr2 is pointing to:" << **ptr2 << "\n";
  std::cin.ignore();
}
