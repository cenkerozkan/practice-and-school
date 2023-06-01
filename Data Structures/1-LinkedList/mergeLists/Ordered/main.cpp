/*
    Question:
        Merge two given linkedlists into one a single linked list.
        (Unordered)
*/

// Solution starts at line 156 on orderedlinkedlist.h

#include <iostream>
#include "orderedlinkedlist.h"

int main(void){
    Orderedlinkedlist<int> list1, list2;

    list1.insert(3);
    list1.insert(7);
    list1.insert(8);
    list1.insert(19);
    list1.insert(40);
    list1.insert(44);
    list1.insert(53);
    list1.insert(60);



    list2.insert(1);
    list2.insert(2);
    list2.insert(9);
    list2.insert(11);
    list2.insert(15);
    list2.insert(20);
    list2.insert(23);
    list2.insert(31);
    list2.insert(45);
    list2.insert(57);

    //list2.print();


    //std::cout << list1.search(1002);
    list1.merge_list(list2);
    //std::cout << (nullptr == NULL);
    list1.print();
    //list2.print();
}