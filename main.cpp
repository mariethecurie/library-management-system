#include <iostream>
#include "library.h"

int main () {
    Library library;

    Book a{1, "Effective C++", "Scott Meyers", 3};
    Book b{2, "Effective Modern C++", "Scott Meyers", 5};
    Book c{3, "More Effective C++", "Scott Meyers", 1};

    Reader ayb{1, "effectiveMari"};
    Reader ben{2, "modernMari"};
    Reader gim{3, "moreMari"};
    Reader da{4, "notMari"};

    library.addBook(a);
    library.addBook(b);
    library.addBook(c);

    library.addReader(ayb);
    library.addReader(ben);
    library.addReader(gim);
    library.addReader(da);

    ayb.issueBook(3);
    ayb.issueBook(4);
    ben.issueBook(2);
    ben.issueBook(3);
    ben.issueBook(1);
    gim.issueBook(1);
    da.issueBook(2);

    gim.returnBook(1);

    library.listBooks();
    library.listReaders();

    return 0;
}