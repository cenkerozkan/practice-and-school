#ifndef H_LL
#define H_LL
#include <iostream>
#include <cassert>

template <class T>
struct Node{
    T info;         // Node value.
    Node<T> *link;  // Next node link.
};

//*************************************************************
// Author: Cenker Ozkan
//
// Implementation of a linked list class in C++
// I benefited from D.S Malik's linked list implementation.
//*************************************************************


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
            current = current->link;
            return *this;
        }
        bool operator== (const LL_iterator<T> &_param){
            return (current == _param.current);
        }

        bool operator!= (const LL_iterator<T> &_param){
            return (current != _param.current);
        }
};

//*********** LINKED LIST ************//
template <class T>
class Linkedlist{
    protected:
        int count;  // Length of the list & Number of nodes.
        Node<T> *first; // Pointer to the first node.
        Node<T> *last;  // Pointer to the last node.

    private:
        // Function to make a copy of the given _param_list.
        // Takes a linked list reference as parameter.
        void copy_list(const Linkedlist<T> &_param_list){
            Node<T> *new_node;  // Pointer to create a node.
            Node<T> *current;   // To traverse the list.

            if(first != NULL){
                destroy_list();
            }

            if(_param_list.first == NULL){
                first = NULL;
                last = NULL;
                count = 0;
            }
            else{
                // Beginning from the head node of the _param_list.
                current = _param_list.first;
                count = _param_list.count;

                // Copying of the first node.
                first = new Node<T>;
                first->info = current->info;
                last = first;
                current = current->link;

                // If current == NULL It means the end of the _param_list.
                while(current != NULL){
                    new_node = new Node<T>;
                    new_node->info = current->info;
                    new_node->link = NULL;
                    
                    last->link = new_node;
                    last = new_node;

                    current = current->link;
                }
            }
        }

    public:
        // Assignment operator is overloaded
        // to use copy constructor.
        const Linkedlist<T> &operator= (const Linkedlist<T> &_param_list){
            if (this != &_param_list){
                copy_list(_param_list);
            }
            return *this;
        }

        void initialize_List(){
            destroy_list(); // If the list has any nodes, delete them.
        }

        // If the first node of a linked list is NULL
        // that means the linked list is empty.
        bool is_empty(){
            return (first == NULL);
        }

        // Function to output the data contained in each node.
        void print(){
            Node<T> *current;
            current = first;
            while(current != NULL){
                std::cout << current->info << " ";
                current = current->link;
            }
        }

        // Function to return the number of nodes in the list.
        int length(){
            return count;
        }

        // Function to delete all the nodes from the list.
        void destroy_list(){
            // Temp node pointer to deallocate the memory occupied
            // by the node.
            Node<T> *temp;
            while(first != NULL){
                temp = first;
                first = first->link;
                delete temp;
            }
            last = NULL;
            count = 0;
        }

        // Function to return the first element of the list:
        // Precondition: the list must exist and must not be empty.
        // Postcondition: If the list is empty, the program terminates.
        //                otherwise, the first element of the list is
        //                returned.
        T front() const{
            assert(first != NULL);
            return first->info;
        }

        // Function to return the last element of the list.
        // Precondition: The list must exist and must not be empty.
        // Postcondition: If the list is empty, the program terminates
        //                otherwise, the last element of the list is
        //                returned.
        T back() const{
            assert(last != NULL);
            return last-> info;
        }

        // Pure virtual methods.
        virtual bool search(const T &_param_item) = 0;
        virtual void insert_first(const T &_param_item) = 0;
        virtual void insert_last(const T &_param_item) = 0;
        virtual void delete_node(const T &_param_item) = 0;

        LL_iterator<T> begin(){
            LL_iterator<T> temp(first);
            return temp;
        }

        LL_iterator<T> end(){
            LL_iterator<T> temp(NULL);
            return temp;
        }

        // Default constructor.
        // Creates an empty linked list.
        Linkedlist(){
            first = NULL;
            last = NULL;
            count = 0;
        }

        // Copy constructor.
        Linkedlist(const Linkedlist<T> &_param_list){
            first = NULL;
            copy_list(_param_list);
        }

        // Destructor.
        ~Linkedlist(){
            destroy_list();
        }
};
#endif