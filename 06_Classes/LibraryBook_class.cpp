// ==========================================
// SIMULATING: LibraryBook.hpp
// ==========================================

#include <iostream>
#include <string>

using namespace std;

class LibraryBook
{
    string title;
    string author;
    bool available;

    public:
    
    void setBook(string bookTitle, string bookAuthor);
    
    void borrowBook();
    void returnBook();
    void showInfo();

};


// ==========================================
// SIMULATING: LibraryBook.cpp
// ==========================================
// #include "LibraryBook.hpp"
void LibraryBook::setBook(string bookTitle, string bookAuthor) 
{
    title = bookTitle;
    author = bookAuthor;
    available = true; 
}

void LibraryBook::borrowBook() 
{
    if (available) 
    {
        available = false; 
        cout << "Success: You checked out \"" << title << "\".\n";
    } else 
    {
        cout << "Error: \"" << title << "\" is already borrowed!\n";
    }
}
void LibraryBook::returnBook() 
{
    if (!available) 
    {
        available = true; 
        cout << "Success: You returned \"" << title << "\". Thank you!\n";
    } else 
    {
        cout << "Error: \"" << title << "\" is already on the shelf!\n";
    }
}
void LibraryBook::showInfo() 
{
    cout << "Title: " << title << " | Author: " << author << " | Status: ";
    if (available) 
    {
        cout << "Available\n";
    } else 
    {
        cout << "Borrowed\n";
    }
}
// ==========================================
// SIMULATING: main.cpp
// ==========================================
//#include "LibraryBook.hpp"

int main()
{

    LibraryBook book;
    book.setBook("The Hobbit", "J.R.R. Tolkien");

    // 1. Show starting status
    book.showInfo(); // Expected: Status: Available

    // 2. Try to borrow it
    cout << "\n--- Attempting to borrow ---" << "\n";
    book.borrowBook(); // Expected: Success
    book.showInfo();   // Expected: Status: Borrowed

    // 3. Try to borrow it AGAIN (should fail!)
    cout << "\n--- Attempting to borrow again ---" << "\n";
    book.borrowBook(); // Expected: Error (already borrowed)

    // 4. Return the book
    cout << "\n--- Returning the book ---" << "\n";
    book.returnBook(); // Expected: Success
    book.showInfo();   // Expected: Status: Available


    return 0;
}