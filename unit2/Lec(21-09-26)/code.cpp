#include <bits/stdc++.h>
using namespace std;

class Library {
public:
    class Book {
        int id;
        string title;
        float price;

    public:
        Book(int i, string t, float p) {
            id = i;
            title = t;
            price = p;
        }

        int getId() {
            return id;
        }

        void display() {
            cout << "\nBook Details:\n";
            cout << "Book ID    : " << id << endl;
            cout << "Book Title : " << title << endl;
            cout << "Book Price : " << price << endl;
        }
    };

    Book books[5] = {
        Book(101, "C++ Programming", 450),
        Book(102, "Data Structures", 500),
        Book(103, "Operating System", 550),
        Book(104, "Computer Networks", 600),
        Book(105, "Database Management", 650)
    };

    void searchBook(int id) {
        for (int i = 0; i < 5; i++) {
            if (books[i].getId() == id) {
                books[i].display();
                string d;
                cout<<"if y0u want another book enter another id(yes/no)";
                cin>>d;
            if(d=="yes")
            {
                int newwid;
                cout<<"enter another id: ";
                cin>>newwid;
                searchBook(newwid);
            }
                return;
            }
        }

        cout << "\nBook with ID " << id << " not found." << endl;

        string c;
        cout << "Do you want to search another book? (yes/no): ";
        cin >> c;

        if (c == "yes") {
            int newId;
            cout << "Enter another Book ID: ";
            cin >> newId;
            searchBook(newId);
        }
    }
};

int main() {
    Library library;
    int id;

    cout << "Enter Book ID: ";
    cin >> id;

    library.searchBook(id);

    return 0;
}
