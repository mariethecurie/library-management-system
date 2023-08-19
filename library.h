#ifndef LIBRARY_H
#define LIBRARY_H

#include "reader.h"
#include "book.h"
#include <map>
#include <vector>

class Library {
public:
    void addBook (Book& book);
    void addReader (Reader& reader);
    void issueBook (Book& book, Reader& reader);
    void returnBook (Book& book, Reader& reader);
    void listBooks ();
    void listReaders ();
    Book searchBook (int id);
    Reader searchReader (int id);
private:
    std::map<int, Book> books;
    std::vector<Reader> readers;
};

#endif