#ifndef BOOK_H
#define BOOK_H

#include <iostream>

class Book {
public:
    Book(int id, const std::string& title, const std::string& author, int numberOfBook)
    : m_id {id}, m_title {title}, m_author {author}, m_numberOfBook{numberOfBook} {
    }
    void setId (int id) {
        m_id = id;
    }
    int id () const {
        return m_id;
    }
    void setTitle (const std::string& title) {
        m_title = title;
    }
    std::string title () const {
        return m_title;
    }
    void setAuthor (const std::string& author) {
        m_author = author;
    }
    std::string author () const {
        return m_author;
    }
    void issueBook () {
        --m_numberOfBook;
    }
    void returnBook () {
        ++m_numberOfBook;
    }
    bool isAvailable () const {
        return m_numberOfBook;
    }
    void setNumberOfBook (int numberOfBook) {
        m_numberOfBook = numberOfBook;
    }
    int numberOfBook () const {
        return m_numberOfBook;
    }
private:
    int m_id;
    std::string m_title;
    std::string m_author;
    int m_numberOfBook;
};

#endif