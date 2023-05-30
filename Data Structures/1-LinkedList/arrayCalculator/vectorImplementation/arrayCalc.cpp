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
#include <vector>
#include <algorithm>

int main(void){
    // Vectors.
    std::vector<int> vec1, vec2, result_vec;
    int size, temp;
    char c_operator;

    std::cout << "Enter the array size (1-30): "; std::cin >> size;

    // List 1.
    std::cout << "List 1\n";
    for(int i=0; i<size; i++){
        std::cout << "Enter number " << i+1 << ":";
        std::cin >> temp;
        vec1.push_back(temp);
    }

    std::cout << "\nList 2\n";
    for(int i=0; i<size; i++){
        std::cout << "Enter number " << i+1 << ":";
        std::cin >> temp;
        vec2.push_back(temp);
    }

    std::cout << "Enter an operator: "; std::cin >> c_operator;
   switch (c_operator){
      case '+':
         for(int i=0; i<size; i++){
            result_vec.push_back(vec1[i] + vec2[i]);
         }
         break;
      case '-':
         for(int i=0; i<size; i++){
            result_vec.push_back(vec1[i] - vec2[i]);
         }
         break;
      case '*':
         for(int i=0; i<size; i++){
            result_vec.push_back(vec1[i] * vec2[i]);
         }
         break;
      
      default:
         std::cout << "Invalid operator!" << std::endl;
   }
   std::cout << "Results:\n";
   for(int i=0; i<size; i++){
    std::cout << result_vec[i] << " ";
   }
   return 0;
}