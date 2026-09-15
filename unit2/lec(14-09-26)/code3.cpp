#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    float price;

public:
  
    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }

    Book(const Book &b) {
        title = b.title;
        author = b.author;
        price = b.price;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }

  
    ~Book() {
        cout << "Book object destroyed: " << title << endl;
    }
};

int main() {
  
    Book book1("C++ Programming", "Bjarne Stroustrup", 500);
    Book book2(book1);

    cout << "First Book:" << endl;
    book1.display();

    cout << "\nCopied Book:" << endl;
    book2.display();

    return 0;
}