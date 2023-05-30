/*
    Question:
        Merge two given linkedlists into one a single linked list.
        (Unordered)
*/

// My solution starts at line 118 in "unorderedlinkedlist.h" file
#include <iostream>
#include "unorderedlinkedlist.h"
int main(void){
    Unorderedlinkedlist<int> list1, list2;
    list1.insert_last(1);
    list1.insert_last(1);
    list1.insert_last(1);
    list1.insert_last(1);
    list1.insert_last(1);
    list1.insert_last(1);


    list2.insert_last(19);
    list2.insert_last(19);
    list2.insert_last(19);
    list2.insert_last(19);
    list2.insert_last(19);

    list1.merge_lists(list2);
    list1.print();
    return 0;
}