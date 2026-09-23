// ==========================================
// SIMULATING: Book.hpp
// ==========================================
#include <iostream>
#include <string>

using namespace std;

class Book
{
    // atributes
    private:
    string title;
    string author;
    int pages;

    //methods
    public:
    void setBook(string newTitle, string newAuthor, int newPages);
    void showBook();
};


// ==========================================
// SIMULATING: Book.cpp
// ==========================================
    void Book::setBook(string newTitle, string newAuthor, int newPages)
    {
        title = newTitle;
        author = newAuthor;
        pages = newPages;
    }

    void Book::showBook()
    {
        cout << "Title: " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Pages: " << pages << "\n";
    }
// ==========================================
// SIMULATING: main.cpp
// ==========================================

int main()
{

    Book book1;
    book1.setBook("Rabbit", "libag", 300);
    book1.showBook();

    Book book2;
    book2.setBook("Dog", "liblib", 400);
    book2.showBook();

    return 0;
}

