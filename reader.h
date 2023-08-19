#idndef READER_H
#define READER_H

#include <iostream>

class Reader {
public:
    Reader (int id, const std::string& name)
    : m_id {id}, m_name {name} {
    }
    void setId (int id) {
        m_id = id;
    }
    int id () const {
        return m_id;
    }
    void setName (const std::string& name) {
        m_name = name;
    }
    std::string name () const {
        return m_name;
    }
    void issueBook (int bookId) {
        issuedBooks[bookId] = true;
    }
    void returnBook (int bookId) {
        issuedBooks[bookId] = false;
    }
private:
    int m_id;
    std::string m_name;
    std::map<int, bool> issuedBooks;
};

#endif