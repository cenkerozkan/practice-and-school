/*
 * Question:
 *  Write a class called "DigitalBookArchive"
 *  "DigitalBookArchive" class should have the following private member variables:
 *      - name(string)
 *      - type(string)
 *      - digitalBookCount(integer)
 *
 *  In the beginning, there are 20 books in the digital book archive.
 *  The constructor of the class should get the digital book archive name
 *  and set it to the member variable. Then, use an overloaded constructor for
 *  getting both the name and the type of the book.
 *
 *  "DigitalBookArchive" class accepts new digital books via a member function
 *  called "addBook()". "addBook()" function increments the digitalBookCount
 *  variable in this class. Added to this, the "DigitalBookArchive" class also has
 *  a "readBook()" member function. This function decrements the digitalBookCount
 *  when the user selects to read a digital book.
 *
 *  You should defina a "getName()" function to return the name of the "DigitalBookArchive".
 *  Finally, the "DigitalBookArchive" class also has a "print()" function that prints
 *  out the number of the digital books in this archive.
 *
 *  (Declare your member functions outside of the class.)
 *
 *  In the main function.
 *      - Your program should ask the user the selection type that (a) for adding a
 *        digital book to the archive or (r) for reading the digital book from the
 *        archive, or the user can cancel the system by entering (C).
 *
 *
 * Sample run 1:
 *
 *  Enter the name of the Digital Book Archive:
 *  MyStore
 *  Enter the type of the digital book:
 *  Horror
 *  Digital Book Archive name set to MyStore
 *  Digital Book type is: Horror
 *  Do you want to add or read a digital book (a/r),
 *  or enter (C) for exit the system: a
 *  A new digital book is added.
 *  Do you want to add or read a digital book (a/r),
 *  or enter (C) for exit the system: a
 *  A new digital book is added.
 *  Do you want to add or read a digital book (a/r),
 *  or enter (C) for exit the system: r
 *  You've read a digital book.
 *  Do you want to add or read a digital book (a/r),
 *  or enter (C) for exit the system: C
 *  The number of remaining digital book is 21.
 *
 *
 *
 * Sample run 2:
 *  Enter the name of the Digital Book Archive:
 *  Cmpe225
 *  Enter the type of the digital book:
 *  animation
 *  Digital Book Archive name set to Cmpe225
 *  Digital Book type is: animation
 *  Do you want to add or read a digital book (a/r),
 *  or enter (C) for exit the system: r
 *  You've read a digital book.
 *  Do you want to add or read a digital book (a/r),
 *  or enter (C) for exit the system: r
 *  You've read a digital book.
 *  Do you want to add or read a digital book (a/r),
 *  or enter (C) for exit the system:C
 *  the number of remaining digital book is 18.
 * */


#include <iostream>
#include <string.h>
#define __DEFAULT__ 20; // Default book count at the beginning.
using namespace std;
class DigitalBookArchive{
    private:
        // Required attributes.
        string s_name;  // Book name.
        string s_type;  // Book type.
        int i_count;    // Book counter.


    public:
        // CONSTRUCTORS.
        DigitalBookArchive(string arch_name){
            this->s_name = arch_name;
            this->i_count = __DEFAULT__;
        }

        DigitalBookArchive(string arch_name, string book_type){
            this->s_type=book_type;
            this->s_name = arch_name;
            this->i_count = __DEFAULT__;
        }


        // METHODS.
        void addBook();
        void readBook();
        string getName();
        void print();
};


// Outline class methods.
void DigitalBookArchive::addBook(){
    i_count++;
}

void DigitalBookArchive::readBook(){
    i_count--;
}

string DigitalBookArchive::getName(){
    return s_name;
}

void DigitalBookArchive::print(){
    cout << "The number of remaining digital book is " << i_count << endl;
}


int main(void){
    // Required variables.
    string obj_name;
    string obj_type;
    char c_flag;

    // Object declaration.
    cout << "Enter the name of the Digital Book Archive: " << endl;     cin >> obj_name;
    DigitalBookArchive archive_f(obj_name);

    cout << "Enter the type of the digital book: " << endl;     cin >> obj_type;
    DigitalBookArchive archive(obj_name,obj_type);

    // Object information.
    cout << "Digital Book Archive name set to " << archive.getName() << endl;
    cout << "Digital Book type is: " << obj_type << endl;

    // Menu-driven loop
    while(true){
        cout << "Do you want to add or read a digital book (a/r),\nor enter (C) for exit the system: ";     cin >> c_flag;
        strlwr(&c_flag);

        // If user wants to exit.
        if(c_flag == 'c'){
            archive.print();
            break;
        }
        else{
            switch (c_flag) {
                case 'a':
                    archive.addBook();
                    cout << "A new digital book is added." << endl;
                    break;
                case 'r':
                    archive.readBook();
                    cout << "You've read a digital book." << endl;
                    break;
                default:
                    cout << "Invalid argument!" << endl;
                    break;
            }
        }
    }
    return 0;
}