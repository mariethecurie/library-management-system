#include "library.h"

void Library::addBook (Book& book) {
    books[book.id()] = book;
}
void Library::addReader (Reader& reader) {
    readers[reader.id()] = reader;
}
void Library::issueBook (Book& book, Reader& reader) {
    if (book.isAvailable()) {
            book.issueBook();
            reader.issueBook(book.id());
    } else {
        std::cout << "The book is not available." << std::endl;
    }
}
void Library::returnBook (Book& book, Reader& reader) {
    book.returnBook();
    reader.returnBook(book.id());
}
void Library::listBooks () {
    std::cout << "Collection of the books:" << std::endl;
    for (const auto& pair : books) {
        std::cout << pair.second.author() << " - " << pair.second.title() << std::endl;
    }
}
void Library::listReaders () {
    std::cout << "Collection of the readers: " << std::endl;
    for (const Reader& reader : readers) {
        std::cout << "Name: " << reader.name() << ", ID: " << reader.id() << std::endl;
    }
}
Book Library::searchBook (int id) {
    return books[id];
} 
Reader Library::searchReader (int id) {
    return readers[id];
}