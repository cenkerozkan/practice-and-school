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
                // Case 2: If given value is equal or lower than the head node.
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

        // A simple solution for the question asked 
        // in the main.cpp file. It simply deletes
        // the middle node. To decide which node should be
        // deleted, it checks the number of node via 'count'
        // variable at the beginning. 

        // If there odd number of nodes, the function is going to
        // delete the node at the middle of the list but if there
        // are even number of nodes, the function will delete the second
        // middle node since there is no actual middle node on the list.
        void delete_mid(){
            // Empty list.
            if(Linkedlist<T>::first == NULL){
                std::cout << "List is empty!\n";
            }

            // List has only one node.
            else if(Linkedlist<T>::first == Linkedlist<T>::last){
                Node<T> *temp;
                temp = Linkedlist<T>::first;
                Linkedlist<T>::first = NULL;
                Linkedlist<T>::last = NULL;
                delete temp;
                std::cout << "List has only one node, now it is empty.";
            }
            
            // List has more than one node.
            else{
                Node<T> *current;
                Node<T> *trailer_current;
                // Even & odd check.
                switch(Linkedlist<T>::count%2){
                    // Even.
                    case 0:
                        current = Linkedlist<T>::first;
                        // Traversing to the middle node.
                        for(int i=0; i<(Linkedlist<T>::count+1)/2; i++){
                            trailer_current = current;
                            current = current->link;
                        }
                        trailer_current->link = current->link;
                        delete current;
                        break;

                    // Odd.
                    default:
                        current = Linkedlist<T>::first;
                        for(int i=0; i<(Linkedlist<T>::count+1)/2; i++){
                            trailer_current = current;
                            current = current->link;
                        }
                        trailer_current->link = current->link;
                        delete current;
                        break;
                }
            }
        }
};
#endif