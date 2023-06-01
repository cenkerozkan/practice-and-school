#ifndef H_ULL
#define H_ULL
#include "linkedlist.h"
template <class T>
class Orderedlinkedlist:public Linkedlist<T>{
    public:
        // Function to determine whether the given parameter
        // is in the list.
        bool search(const T &_param_value){
            bool found = false;
            Node<T> *current;                   // Node pointer to iterate the list.
            current = Linkedlist<T>::first;     // Searching from the beginning the list.

            while(current != NULL && !found){
                // To searching if the next node is bigger than 
                // the value we are looking for.
                if(current -> info >= _param_value){
                    found = true;
                }
                else{
                    current = current->link;
                }
            }
            if(found){
                found = (current->info == _param_value);
            }
            return found;
        }

        void insert(const T &_param_value){
            Node<T> *current;       // Pointer to the current node.
            Node<T> *trail_current; // Pointer to the previous node.
            Node<T> *new_node;      // Pointer to create a node.

            bool found;

            new_node = new Node<T>;
            new_node -> info = _param_value;
            new_node -> link = NULL;

            // Case 1: If the list is empty.
            if(Linkedlist<T>::first == NULL){
                Linkedlist<T>::first = new_node;
                Linkedlist<T>::last = new_node;
                Linkedlist<T>::count++;
            }

            // If the list is not empty
            else{
                current = Linkedlist<T>::first;
                found = false;

                // Traversing the list
                while(current != NULL && !found){
                    if(current->info >= _param_value){
                        found = true;
                    }
                    else{
                        // trail_current and current are both pointers.
                        // So assigning trail_current as current is ok.
                        trail_current = current;
                        current = current->link;
                    }
                }
                // Case 2: If given value is equal or lower than the first node.
                if(current == Linkedlist<T>::first){
                    new_node -> link = Linkedlist<T>::first;
                    Linkedlist<T>::first = new_node;
                    Linkedlist<T>::count++;
                }

                // Case 3: If given value is bigger than the head node.
                else{
                    trail_current->link = new_node;
                    new_node->link = current;

                    // If the current is the last node of the list.
                    if(current == NULL){
                        Linkedlist<T>::last = new_node;
                    }
                    Linkedlist<T>::count++;
                }
            }
        }

        void insert_first(const T &_param_value){
            insert(_param_value);
        }

        void insert_last(const T &_param_value){
            insert(_param_value);
        }

        void delete_node(const T &_param_value){
            Node<T> *current;       // Pointer to traverse the list.
            Node<T> *trail_current; // Pointer to previous node
            bool found;

            // Case 1: If the list is empty.
            if(Linkedlist<T>::first == NULL){
                std::cout << "Cannot delete from an empty list!" << std::endl;
            }
            else{
                current = Linkedlist<T>::first; // Starting from the beginning.
                found = false;
                
                // Traverse code.
                while(current != NULL && !found){
                    if(current->info >= _param_value){
                        found=true;
                    }
                    else{
                        trail_current = current;
                        current = current->link;
                    }
                }

                // Case 4: If given value is not in the list.
                if(current == NULL){
                    std::cout << "The item to be deleted is not in the list." << std::endl;
                }

                else{
                    if(current->info == _param_value){
                        // Case 2: If given value to be deleted is the first node.
                        if(Linkedlist<T>::first == current){
                            Linkedlist<T>::first = Linkedlist<T>::first->link;

                            if(Linkedlist<T>::first == NULL){
                                Linkedlist<T>::last = NULL;
                            }
                            delete current;
                        }

                        // Case 3
                        else{
                            // Attaching trailer pointer to the node next to
                            // the node which will be deleted.
                            trail_current->link = current->link;

                            // If the given value is the last node.
                            if(current == Linkedlist<T>::last){
                                Linkedlist<T>::last = trail_current;
                            }
                            delete current;
                        }
                        Linkedlist<T>::count--;
                    }
                }
            }
        }


        void merge_list(Orderedlinkedlist<T> &_list){
            Node<T> *cursor = _list.first;      // Iterates the _list.
            Node<T> *current;
            Node<T> *trail_current;
            Node<T> *new_node;

            // This is basically does the same thing
            // as 'insert()' method does. But this time
            // in a while loop in order to iterate the 
            // given linked list parameter.
            while(cursor != NULL){
                // Case 1: If the current list is empty.
                if(Linkedlist<T>::first == NULL || cursor == NULL){
                    std::cout << "One or both lists are empty.\n";
                }

                // Case 2: Lists are not empty.
                else{
                    current = Linkedlist<T>::first;
                    // Traversing the current list.
                    while(current != NULL){
                        if(current->info >= cursor->info){
                            break;
                        }
                        else{
                            trail_current = current;
                            current = current->link;
                        }
                    }

                    // Case 3: Head value bigger than cursor value.
                    if(current == Linkedlist<T>::first){
                        new_node = new Node<T>;
                        new_node->info = cursor->info;

                        new_node->link = current;
                        Linkedlist<T>::first = new_node;
                    }

                    else{
                        new_node = new Node<T>;
                        new_node->info = cursor->info;

                        trail_current->link = new_node;
                        new_node->link = current;

                        // Case 4: Cursor value bigger than last value.
                        if(current == NULL){
                            Linkedlist<T>::last = new_node;
                        }
                    }
                }
                Linkedlist<T>::count++;
                cursor = cursor->link;
            }
        }

};
#endif