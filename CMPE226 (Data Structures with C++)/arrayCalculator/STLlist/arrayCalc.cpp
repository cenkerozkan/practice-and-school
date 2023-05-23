/*
 * Question:
 *  Write a program that inputs
 *      - An integer N(N<=30)
 *      - A two dimensional array of integers of sizes N.
 *      - An operator (+, -, *)
 *
 *  If the operator is '+' add the corresponding elements of the arrays, if
 *  the operator is '-', substract the corresponding elements of the second array
 *  from the first array and if the operator is '*', multiply the corresponding
 *  elements. For each operation, write a function. Each function should recieve
 *  two dimensional array, the size and return the resultant array.
 *
 * Sample run:
 *  Enter the array size (1-30): 6
 *  Enter 6 integers: 15 20 11 5 8 10
 *  Enter 6 integers: 1 12 3 4 -2 4
 *  Enter an operator: -
 *  Result: 14 8 8 1 10 14
 * */


#include <iostream>
#include <list>         // Linked list STL header.
#include <iterator>     // STL iterator.

int main(void){
    // Linked lists.
    std::list<int> list1, list2, result_list;
    std::list<int>::iterator it1, it2;
    int size;
    char c_operator;

    std::cout << "Enter the array size(1-30): "; std::cin >> size;

    // List 1.
    std::cout << "List 1\n";
    for(int i=0; i<size; i++){
        int temp;
        std::cout << "Enter number " << i+1 << ": "; std::cin >> temp;
        list1.push_back(temp);
    }


    // List 2.
    std::cout << "\nList 2\n" ;
    for(int i=0; i<size; i++){
        int temp;
        std::cout << "Enter number " << i+1 << ": "; std::cin >> temp;
        list2.push_back(temp);
    }
    
    // Iterator.
    it1 = list1.begin();
    it2 = list2.begin();


    std::cout << "Enter an operator: "; std::cin >> c_operator;
   switch (c_operator){
      case '+':
         for(int i=0; i<size; i++){
            result_list.push_back(*it1 + *it2);
            it1++;
            it2++;
         }
         break;
      case '-':
         for(int i=0; i<size; i++){
            result_list.push_back(*it1 - *it2);
            it1++;
            it2++;
         }
         break;
      case '*':
         for(int i=0; i<size; i++){
            result_list.push_back(*it1 * *it2);
            it1++;
            it2++;
         }
         break;
      
      default:
         std::cout << "Invalid operator!" << std::endl;
   }
   std::cout << "Results:\n";
   std::list<int>::iterator ptr = result_list.begin();
   for(int i=0; i<size; i++){
    std::cout << *ptr << " ";
    ptr++;
   }
   return 0;
}