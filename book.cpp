#include <iostream>
#include "book.hpp"

// default constructor
Book::Book(){
    title = "unname";
    author = "unknown";
    pageCount = 0;
}

// parameterized constructor
Book::Book(std::string t, std::string a, int p){
    title = t;
    author = a;
    pageCount = p;
}

// destructor
Book::~Book(){
    std::cout << "Book object now destructed.\n";
}

// getters
std::string Book::getTitle() { 
        return title; 
    }

std::string Book::getAuthor(){
    return author;
}

int Book::getPageCount() { 
        return pageCount; 
}



