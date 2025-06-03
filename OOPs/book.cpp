#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string name;
    int price;
    int pages;

public:
    // Constructor
    Book(string n, int p, int pg) {
        name = n;
        price = p;
        pages = pg;
    }

    // Function to check if this book is more expensive than the given price
    int countBooks(int p) {
        return (price > p) ? 1 : 0;
    }

    // Function to check if a book with given name is present
    bool isBookPresent(string bookName) {
        return (bookName == name);
    }

    // Display book details
    void display() {
        cout << "Name: " << name << ", Price: " << price << ", Pages: " << pages << endl;
    }
};

int main() {
    // Create a Book object
    Book b1("Harry Potter", 450, 350);
    b1.display();

    // Example usage of countBooks
    int priceLimit = 300;
    cout << "Book is more expensive than " << priceLimit << "? "
         << (b1.countBooks(priceLimit) ? "Yes" : "No") << endl;

    // Example usage of isBookPresent
    string search = "Harry Potter";
    cout << "Is book '" << search << "' present? "
         << (b1.isBookPresent(search) ? "Yes" : "No") << endl;

    return 0;
}
