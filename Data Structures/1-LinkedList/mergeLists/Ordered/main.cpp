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

    list1.insert_first(1);
    list1.insert_first(2);
    list1.insert_first(16);
    list1.insert_first(7);
    list1.insert_first(9);
    list1.insert_first(10);
    list1.insert_first(21);

    list2.insert_first(6);
    list2.insert_first(3);
    list2.insert_first(7);
    list2.insert_first(11);
    list2.insert_first(29);
    list2.insert_first(16);
    list2.insert_first(88);
    list2.insert_first(103);
    list2.insert_first(102);
    list2.insert_first(211);


    //std::cout << list1.search(1002);
    list1.merge_list(list2);
    //std::cout << (nullptr == NULL);
    list1.print();
    //list2.print();
}