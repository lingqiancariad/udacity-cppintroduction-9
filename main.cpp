/*
Update your Book class to support:

    A default constructor that initializes the book with empty/default values

    A parameterized constructor that sets the book’s title, author, and page count

    A destructor that prints a message when a Book object is destroyed "Destorying book : <title>"

Then update your main() function to create books using both constructors.
*/
#include <iostream>
#include <string>
#include "book.hpp"

int main() {
    //TODO: Use the default constructor to initialize a defaultBook
    Book defaultBook;

    //TODO: Use the parametrized constructor to initialize b1 and b2
    Book b1("The falling of big to fall", "Marin S", 499);
    Book b2("The arising of nothing", "Stefan S", 501);
    Book* b1_p = &b1;
    Book* b2_p = &b2;
    
    std::cout << "Default Book:\n";
    std::cout << "Title: " << defaultBook.getTitle() << "\n";
    std::cout << "Author: " << defaultBook.getAuthor() << "\n";
    std::cout << "Pages: " << defaultBook.getPageCount() << "\n\n";

    std::cout << "Book 1:\n";
    std::cout << "Title: " << (*b1_p).getTitle() << "\n";
    std::cout << "Author: " << (*b1_p).getAuthor() << "\n";
    std::cout << "Pages: " << (*b1_p).getPageCount() << "\n\n";

    std::cout << "Book 2:\n";
    std::cout << "Title: " << b2_p->getTitle() << "\n";
    std::cout << "Author: " << b2_p->getAuthor() << "\n";
    std::cout << "Pages: " << b2_p->getPageCount() << "\n\n";

    return 0;
}