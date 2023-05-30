#ifndef H_ULL
#define H_ULL
#include "linkedlist.h"

//*********** UNORDERED LINKED LIST ************//
template <class T>
class Unorderedlinkedlist:public Linkedlist<T>{
    public:
        bool search(const T &_param_value){
            Node<T> *current;
            bool found = false;

            current = Linkedlist<T>::first;

            while(current != NULL && !found){
                if(current->info == _param_value){
                    found = true;
                }

                else{
                    current = current->link;
                }
            }
            return found;
        }

        // Insert from the beginning.
        void insert_first(const T &_param_value){
            Node<T> *new_node;
            new_node = new Node<T>;
            new_node->info = _param_value;
            new_node->link = Linkedlist<T>::first;

            Linkedlist<T>::first = new_node;
            Linkedlist<T>::count++;
            
            if(Linkedlist<T>::last == NULL){
                Linkedlist<T>::last = new_node;
            }
        }

        // Insert from the ending.
        void insert_last(const T &_param_value){
            Node<T> *new_node;
            new_node = new Node<T>;

            new_node->info = _param_value;
            new_node->link = NULL;

            // If list is empty.
            if(Linkedlist<T>::first == NULL){
                Linkedlist<T>::first = new_node;
                Linkedlist<T>::last = new_node;
                Linkedlist<T>::count++;
            }

            // If list is not empty.
            else{
                Linkedlist<T>::last->link = new_node;
                Linkedlist<T>::last = new_node;
                Linkedlist<T>::count++;
            }
        }

        void delete_node(const T &_param_value){
            Node<T> *current;
            Node<T> *trail_current;
            bool found;
            
            // If the given list is empty
            if(Linkedlist<T>::first == NULL){
                std::cout << "Cannot delete from an empty list" << std::endl;
            }

            else{
                if(Linkedlist<T>::first->info == _param_value){
                    current = Linkedlist<T>::first;
                    Linkedlist<T>::first = Linkedlist<T>::first->link;
                    Linkedlist<T>::count--;

                    // The list has only one node.
                    if(Linkedlist<T>::first == NULL){
                        Linkedlist<T>::last = NULL;
                        delete current;
                    }

                    else{
                        found = false;
                        trail_current = Linkedlist<T>::first;
                        current = Linkedlist<T>::first->link;

                        while(current != NULL && !found){
                            if(current->info != _param_value){
                                trail_current = current;
                                current = current->link;
                            }
                            else{
                                found = true;
                            }
                        }
                        if(found){
                            trail_current->link = current->link;
                            Linkedlist<T>::count--;

                            if(Linkedlist<T>::last == current){
                                Linkedlist<T>::last = trail_current;
                                delete current;
                            }
                            else{
                                std::cout << "The item to be deleted is not in the list." << std::endl;
                            }
                        }
                    }
                }
            }
        }
};
#endif