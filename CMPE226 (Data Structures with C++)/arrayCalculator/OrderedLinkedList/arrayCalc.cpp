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
 *
 * Sample run:
 *  Enter the array size (1-30): 6
 *  Enter 6 integers: 15 20 11 5 8 10
 *  Enter 6 integers: 1 12 3 4 -2 4
 *  Enter an operator: -
 *  Result: 14 8 8 1 10 14
 * */

 #include <iostream>
 #include "orderedlinkedlist.h"

int main(void){
   // Linkedlists.
   Orderedlinkedlist<int> list1, list2, result_list;
   int size=0, temp=0;
   char c_operator;

   // Input.
   std::cout << "Enter the array size(1-30):"; std::cin >> size;
   std::cout << "Enter " << size << " integers for list 1: " ;
   for(int i=0; i<size; i++){
      std::cin >> temp;
      list1.insert_last(temp);
   }

   std::cout << "Enter " << size << " integers for list 2: " ;
   for(int i=0; i<size; i++){
      std::cin >> temp;
      list2.insert_last(temp);
   }

   // Operator.
   LL_iterator<int> cursor1 = list1.begin(); 
   LL_iterator<int> cursor2 = list2.begin();
   std::cout << "Enter an operator: "; std::cin >> c_operator;
   switch (c_operator){
      case '+':
         for(int i=0; i<size; i++){
            result_list.insert_last(*cursor1 + *cursor2);
            ++cursor1;
            ++cursor2;
         }
         break;
      case '-':
         for(int i=0; i<size; i++){
            result_list.insert_last(*cursor1 - *cursor2);
            ++cursor1;
            ++cursor2;
         }
         break;
      case '*':
         for(int i=0; i<size; i++){
            result_list.insert_last(*cursor1 * *cursor2);
            ++cursor1;
            ++cursor2;
         }
         break;
      
      default:
         std::cout << "Invalid operator!" << std::endl;
   }
   
   std::cout << "Results are: "; result_list.print();
   return 0;
 }