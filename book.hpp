#pragma once

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int pageCount;

public:
    // TODO: Add a default constructor
    Book ();
    // TODO: Add a parameterized constructor
    Book (std::string t, std::string a, int p);
    // TODO: Add a destructor
    ~Book();

    // Getters
    std::string getTitle();
    std::string getAuthor();
    int getPageCount();
};