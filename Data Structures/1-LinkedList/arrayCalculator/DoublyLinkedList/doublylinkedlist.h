//***********************************************************
// Author: Cenker Ozkan
//
// Implementation of a doubly linked list class in C++
// I benefited from D.S Malik's linked list implementation.
//***********************************************************
#ifndef H_DLL
#define H_DLL
#include <iostream>
#include <cassert>
//*********** NODE ************//
template <class T>
struct Node{
    T info;
    Node<T> *next;
    Node<T> *back;
};

//*********** ITERATOR ************//
template <class T>
class LL_iterator{
    private:
        Node<T> *current; // Pointer to point to the current node 
                          // in the linked list.
    public:
        // CONSTRUCTORS.
        LL_iterator(){
            current = NULL; // If no parameters given.
        }

        LL_iterator(Node<T> *_param){
            current = _param;   // Constructor with parameter.
        }

        // METHODS.
        // Returns the info contained in the node.
        T operator*(){
            return current->info;
        }

        // Overloaded preincrement operator.
        // 
        LL_iterator<T> operator++(){
            current = current->next;
            return *this;
        }
        bool operator== (const LL_iterator<T> &_param){
            return (current == _param.current);
        }

        bool operator!= (const LL_iterator<T> &_param){
            return (current != _param.current);
        }
};


//*********** DOUBLY LINKED LIST ************//
template <class T>
class Doublylinkedlist{
    private:
        // Function to make a copy of _param_list
        void copy_list(Doublylinkedlist<T> &_param_list);

    protected:
        int count;
        Node<T> *first;
        Node<T> *last;
  
    public:
        Doublylinkedlist<T> &operator=(Doublylinkedlist<T> &_param_list);
        // Function to initialize the list to an empty state.
        void initialize_list(){
            first = NULL;
            last = NULL;
            count = 0;
        }

        bool is_empty(){
            return (first == NULL);
        }

        // Function to delete the list node by node.
        void destroy_list(){
            Node<T> *temp;
            while(first != NULL){
                temp = first;
                first = first->next;
                delete temp;
            }
            last = NULL;
            count = 0;
        }

        // Function to print the list from first to last.
        void print(){
            Node<T> *current;
            current = first;
            while(current != NULL){
                std::cout << current->info << std::endl;
                current = current->next;
            }
        }

        // Function to print the list from last to first. 
        void reverse_print(){
            Node<T> *current;
            current = last;
            while(current->back != NULL){
                std::cout << current->info << std::endl;
                current = current->back;
            }
        }

        int length(){
            return count;
        }

        T front(){
            assert(first != NULL);
            return first->info;
        }

        T back(){
            assert(last != NULL);
            return last->info;
        }

        LL_iterator<T> begin(){
            LL_iterator<T> temp(first);
            return temp;
        }

        bool search(T &_param_value){
            Node<T> *current;
            bool found = false;
            // If list is empty.
            if(first == NULL){
                std::cout << "Given list is empty" << std::endl;
            }
            else{
                current = first;
                while(current->next != NULL && !found){
                    if(current->info >= _param_value){
                        found = true;
                    }
                    else{
                        current = current->next;
                    }
                }
                if(found){
                    found = (current->info == _param_value);
                }
            }
            return found;
        }

        void delete_node(T &_param_value){
            Node<T> *current;
            Node<T> *trail_current;
            bool found;

            // If given value is empty.
            if(first == NULL){
                std::cout << "Cannot delete from an empty list" << std::endl;
            }
            // If given value equals to first node info.
            else if(first->info == _param_value){
                current = first;
                first = first->next;
                if(first != NULL){
                    first->back = NULL;
                }
                else{
                    last = NULL;
                }
                count--;
                delete current;
            }

            else{
                found = false;
                current = first;
                while(current->next != NULL && !found){
                    if(current->info >= _param_value){
                        found = true;
                    }
                    else{
                        current = current->next;
                    }
                }
                if(current == NULL){
                    std::cout << "The item to be deleted is not in the list." << std::endl;
                }

                else if(current->info == _param_value){
                    trail_current = current->back;
                    trail_current->next = current->next;
                    if(current->next != NULL){
                        current->next->back = trail_current;
                    }
                    if(current == last){
                        last=trail_current;
                    }
                    count--;
                    delete current;
                }
                else{
                    std::cout << "The item to be deleted is not in the list." << std::endl;
                }
            }
        }

        void insert(T _param_value){
            Node<T> *current;
            Node<T> *trail_current;
            Node<T> *new_node;
            bool found;

            new_node = new Node<T>;
            new_node->info = _param_value;
            new_node->next = NULL;
            new_node->back = NULL;

            // If the list is empty.
            if(first == NULL){
                first = new_node;
                last = new_node;
                count++;
            }

            else{
                found = false;
                current = first;
                while(current != NULL && !found){
                    if(current->info >= _param_value){
                        found = true;
                    }
                    else{
                        trail_current = current;
                        current = current->next;
                    }
                }
                if(current == first){
                    first->back = new_node;
                    new_node->next = first;
                    first = new_node;
                    count++;
                }
                else{
                    // Insert new_node between trail_current and current.
                    if(current != NULL){
                        trail_current->next = new_node;
                        new_node->back = trail_current;
                        new_node->next = current;
                        current->back = new_node;
                    }
                    else{
                        trail_current->next = new_node;
                        new_node->back = trail_current;
                        last = new_node;
                    }
                    count++;
                }
            }
        }

        // Default constructor.
        Doublylinkedlist(){
            first = NULL;
            last = NULL;
            count = 0;
        }

        Doublylinkedlist(Doublylinkedlist<T> &_param_list);

        // Destructor.
        ~Doublylinkedlist(){
            destroy_list();
        }
};
#endif