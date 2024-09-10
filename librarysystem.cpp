#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Book {
private:
    string title;
    string author;
    string ISBN;
    int quant;
    bool avl;

public:
    Book(string t, string a, string i, int q, bool l = true)
        : title(t), author(a), ISBN(i), quant(q), avl(l) {}

    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    string getISBN() const { return ISBN; }
    int getQuant() const { return quant; }
    bool isAvailable() const { return avl; }

    void setTitle(const string& t) { title = t; }
    void setAuthor(const string& a) { author = a; }
    void setISBN(const string& i) { ISBN = i; }
    void setQuant(int q) { quant = q; }
    void setAvailable(bool l) { avl = l; }

    void display() const {
        cout << "Title: " << getTitle() << endl;
        cout << "Author: " << getAuthor() << endl;
        cout << "ISBN: " << getISBN() << endl;
        cout << "Quantity: " << getQuant() << endl;
        cout << "Availability: " << (isAvailable() ? "Available" : "Not Available") << endl;
    }
};

class User {
private:
    string name;
    string uid;
    vector<Book> borrowedBooks;

public:
    User(string n, string u) : name(n), uid(u) {}

    string getName() const { return name; }
    string getUid() const { return uid; }

    void borrowBook(Book& book) {
        if (book.isAvailable()) {
            borrowedBooks.push_back(book);
            book.setQuant(book.getQuant() - 1);
            if (book.getQuant() <= 0) {
                book.setAvailable(false);
            }
            cout << "Book borrowed successfully!" << endl;
        } else {
            cout << "Book is not available." << endl;
        }
    }

    void returnBook(Book& book) {
        auto it = find_if(borrowedBooks.begin(), borrowedBooks.end(), [&book](const Book& b) {
            return b.getISBN() == book.getISBN();
        });

        if (it != borrowedBooks.end()) {
            borrowedBooks.erase(it);
            book.setQuant(book.getQuant() + 1);
            book.setAvailable(true);
            cout << "Book returned successfully!" << endl;
        } else {
            cout << "You did not borrow this book." << endl;
        }
    }

    void display() const {
        cout << "Name: " << getName() << endl;
        cout << "UID: " << getUid() << endl;
    }

    void displayBorrowedBooks() const {
        if (borrowedBooks.empty()) {
            cout << "No borrowed books." << endl;
            return;
        }
        cout << "Borrowed Books:" << endl;
        for (const auto& book : borrowedBooks) {
            book.display();
            cout << "-----------------" << endl;
        }
    }
};

class Admin {
private:
    vector<Book> books;
    string password = "admin123"; // Default password, change as needed

public:
    void addBook(const Book& book) {
        books.push_back(book);
        cout << "Book added successfully!" << endl;
    }

    void removeBook(const string& ISBN) {
        auto it = remove_if(books.begin(), books.end(), [&ISBN](const Book& book) {
            return book.getISBN() == ISBN;
        });

        if (it != books.end()) {
            books.erase(it, books.end());
            cout << "Book removed successfully!" << endl;
        } else {
            cout << "Book with ISBN " << ISBN << " not found." << endl;
        }
    }

    void editBookDetails(const string& ISBN) {
        auto it = find_if(books.begin(), books.end(), [&ISBN](const Book& book) {
            return book.getISBN() == ISBN;
        });

        if (it != books.end()) {
            Book& book = *it;
            string title, author;
            int quant;
            bool avl;

            cout << "Enter new title (or press Enter to keep current): ";
            getline(cin, title);
            if (!title.empty()) book.setTitle(title);

            cout << "Enter new author (or press Enter to keep current): ";
            getline(cin, author);
            if (!author.empty()) book.setAuthor(author);

            cout << "Enter new quantity (or enter -1 to keep current): ";
            cin >> quant;
            if (quant != -1) book.setQuant(quant);

            cout << "Enter new availability (1 for available, 0 for not available, or enter -1 to keep current): ";
            cin >> avl;
            if (avl != -1) book.setAvailable(avl);

            cin.ignore(); // Ignore remaining newline character

            cout << "Book details updated successfully!" << endl;
        } else {
            cout << "Book with ISBN " << ISBN << " not found." << endl;
        }
    }

    void displayBooks() const {
        if (books.empty()) {
            cout << "No books in inventory." << endl;
            return;
        }
        cout << "Books in Inventory:" << endl;
        for (const auto& book : books) {
            book.display();
            cout << "-----------------" << endl;
        }
    }

    bool authenticate() {
        string inputPassword;
        cout << "Enter admin password: ";
        cin >> inputPassword;
        cin.ignore(); // Ignore remaining newline character
        return inputPassword == password;
    }
};

int main() {
    Admin admin;
    User user("John Doe", "user123");
    bool loggedIn = false;
    int choice;

    while (true) {
        cout << "Hello! How would you like to log in?" << endl;
        cout << "1. Admin" << endl;
        cout << "2. User" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore(); // Ignore remaining newline character

        switch (choice) {
            case 1: { // Admin
                if (admin.authenticate()) {
                    cout << "Admin logged in successfully!" << endl;
                    int adminChoice;
                    do {
                        cout << "Admin Menu:" << endl;
                        cout << "1. Add Book" << endl;
                        cout << "2. Remove Book" << endl;
                        cout << "3. Edit Book Details" << endl;
                        cout << "4. Display All Books" << endl;
                        cout << "5. Exit" << endl;
                        cout << "Enter choice: ";
                        cin >> adminChoice;
                        cin.ignore(); // Ignore remaining newline character

                        switch (adminChoice) {
                            case 1: {
                                string title, author, ISBN;
                                int quant;
                                cout << "Enter book title: ";
                                getline(cin, title);
                                cout << "Enter book author: ";
                                getline(cin, author);
                                cout << "Enter book ISBN: ";
                                getline(cin, ISBN);
                                cout << "Enter book quantity: ";
                                cin >> quant;
                                cin.ignore(); // Ignore remaining newline character
                                admin.addBook(Book(title, author, ISBN, quant));
                                break;
                            }
                            case 2: {
                                string ISBN;
                                cout << "Enter ISBN of book to remove: ";
                                getline(cin, ISBN);
                                admin.removeBook(ISBN);
                                break;
                            }
                            case 3: {
                                string ISBN;
                                cout << "Enter ISBN of book to edit: ";
                                getline(cin, ISBN);
                                admin.editBookDetails(ISBN);
                                break;
                            }
                            case 4:
                                admin.displayBooks();
                                break;
                            case 5:
                                cout << "Exiting Admin Menu." << endl;
                                break;
                            default:
                                cout << "Invalid choice. Please try again." << endl;
                        }
                    } while (adminChoice != 5);
                } else {
                    cout << "Authentication failed!" << endl;
                }
                break;
            }
            case 2: { // User
                int userChoice;
                do {
                    cout << "User Menu:" << endl;
                    cout << "1. Display User Information" << endl;
                    cout << "2. Display Borrowed Books" << endl;
                    cout << "3. Exit" << endl;
                    cout << "Enter choice: ";
                    cin >> userChoice;
                    cin.ignore(); // Ignore remaining newline character

                    switch (userChoice) {
                        case 1:
                            user.display();
                            break;
                        case 2:
                            user.displayBorrowedBooks();
                            break;
                        case 3:
                            cout << "Exiting User Menu." << endl;
                            break;
                        default:
                            cout << "Invalid choice. Please try again." << endl;
                    }
                } while (userChoice != 3);
                break;
            }
            case 3:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
