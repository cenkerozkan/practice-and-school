/*
    Question:
        Given a singly linked list, delete the middle of the linked list.
        For example, if the given linked list is 1->2->3->4->5 then the linked list
        should be modified to 1->2->4->5


        If there are even nodes, then there would be two middle nodes, we need to delete
        the second middle element. For example, if given linked list is 1->2->3->4->5->6
        then it should be modified to 1->2->3->5->6. If the input linked list is NULL, 
        then it should remain NULL.

        If the input linked list has 1 node, then this node should be deleted and a new head should be returned.
*/



#include <iostream>
#include "orderedlinkedlist.h"
// My solution starts from line 163 in 'orderedlinkedlist.h'

int main(void){
    // list1 has even number of nodes.
    // list2 has odd number of nodes.
    // list3 has one node.
    // list4 is empty.
    Orderedlinkedlist<int> list1, list2, list3, list4;

    // list1
    list1.insert(1);
    list1.insert(2);
    list1.insert(3);
    list1.insert(4);
    list1.insert(5);
    list1.print();
    list1.delete_mid();
    std::cout << "\n";
    list1.print();

    std::cout << "\n\n";

    // List2
    list2.insert(1);
    list2.insert(2);
    list2.insert(3);
    list2.insert(4);
    list2.insert(5);
    list2.insert(6);
    list2.print();
    list2.delete_mid();
    std::cout << "\n";
    list2.print();

    std::cout << "\n\n";

    // List3
    list3.insert(1);
    list3.print();
    list3.delete_mid();
    std::cout << "\n";
    list3.print();

    std::cout << "\n\n";

    // List4
    list4.delete_mid();


    list1.destroy_list();
    list2.destroy_list();
    list3.destroy_list();
    list4.destroy_list();

    return 0;
}