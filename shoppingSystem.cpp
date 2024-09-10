#include <iostream>
#include <vector>
using namespace std;

class Product {
private:
    string pname;
    string pbrand;
    string pID;
    string category;
    int quant;
    int price;

public:
    Product(string n, string b, string i, string c, int a, int p) 
        : pname(n), pbrand(b), pID(i), category(c), quant(a), price(p) {}

    string getpname() { return pname; }
    string getbrand() { return pbrand; }
    string getpID() { return pID; }
    string getcategory() { return category; }
    int getquantity() { return quant; }
    int getprice() { return price; }

    void setprice(int newprice) { price = newprice; }
    void restock(int added) { quant += added; }

    void display() {
        cout << "Product Name: " << getpname() << endl;
        cout << "Brand Name: " << getbrand() << endl;
        cout << "Product ID: " << getpID() << endl;
        cout << "Category: " << getcategory() << endl;
        cout << "Number of products available: " << getquantity() << endl;
        cout << "Price: " << getprice() << endl;
    }
};

class Admin {
private:
    vector<Product> product;
    int code = 5554;

public:
    void addproduct(int pin, const Product &item) {
        if (code == pin) {
            product.push_back(item);
            cout << "Product added successfully!" << endl;
        } else {
            cout << "Entered password is incorrect. Try again!" << endl;
        }
    }//what will happen when admin adds a product multiple times
    void removeproduct(int pin, string pname) {
        if (code == pin) {
            for (auto it = product.begin(); it != product.end(); ++it) {
                if (it->getpname() == pname) {
                    product.erase(it);
                    cout << "Product removed successfully!" << endl;
                    return;
                }
            }
            cout << "Product not found. Try again!" << endl;
        } else {
            cout << "Entered password is incorrect. Try again!" << endl;
        }
    }

    void restock(int pin, string pname, int qty) {
        if (code == pin) {
            for (auto &item : product) {
                if (item.getpname() == pname) {
                    item.restock(qty);
                    cout << "Item restocked successfully." << endl;
                    return;
                }
            }
            cout << "Product not found. Try again!" << endl;
        } else {
            cout << "Entered password is incorrect. Try again!" << endl;
        }
    }

    void changeprice(int pin, string pname, int newprice) {
        if (code == pin) {
            for (auto &item : product) {
                if (item.getpname() == pname) {
                    item.setprice(newprice);
                    cout << "Price changed successfully." << endl;
                    return;
                }
            }
            cout << "Product not found. Try again!" << endl;
        } else {
            cout << "Entered password is incorrect. Try again!" << endl;
        }
    }

};

class Shopping {
private:
    string pname;
    int quant;
    vector<Product> product;

public:
    Shopping(string p, int q) : pname(p), quant(q) {}

    string getpname() { return pname; }
    int getquant() { return quant; }

    void setpname(string name) { pname = name; }
    void setquan(int quan) { quant = quan; }

    void display(string name) {
        for (auto &item : product) {
            if (item.getpname() == name) {
                item.display();
                return;
            }
        }
        cout << "Product entered is not present in your cart. Try again!" << endl;
    }
};

class ShoppingCart {
private:
    vector<Shopping> cart;

public:
    void addtocart(const Shopping &item) {
        cart.push_back(item);
        cout << "Item added to cart successfully!" << endl;
    }

    void removefromcart(string pname) {
        for (auto it = cart.begin(); it != cart.end(); ++it) {
            if (it->getpname() == pname) {
                cart.erase(it);
                cout << "Item removed from cart successfully!" << endl;
                return;
            }
        }
        cout << "Product not found. Try again!" << endl;
    }

    void display(string pname) {
        for (auto &product : cart) {
            product.display(pname);
        }
    }
};
#include <iostream>
#include <vector>
using namespace std;

// Include the classes you've already defined above...

int main() {
    Admin admin;
    ShoppingCart cart;
    int choice, pin;
    string pname, pbrand, pID, category;
    int quant, price, newprice;
    int qty;
    
    // Sample products added by the admin for testing
    Product product1("Laptop", "Dell", "P001", "Electronics", 10, 50000);
    Product product2("Phone", "Samsung", "P002", "Electronics", 15, 30000);
    admin.addproduct(5554, product1);
    admin.addproduct(5554, product2);
    
    while (true) {
        cout << "Welcome to the Shopping System!\n";
        cout << "1. Admin Login\n";
        cout << "2. User Login\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: { // Admin Operations
            cout << "Enter Admin PIN: ";
            cin >> pin;
            if (pin == 5554) {
                cout << "Admin Access Granted!\n";
                int adminChoice;
                do {
                    cout << "1. Add Product\n";
                    cout << "2. Remove Product\n";
                    cout << "3. Restock Product\n";
                    cout << "4. Change Product Price\n";
                    cout << "5. Logout\n";
                    cout << "Enter your choice: ";
                    cin >> adminChoice;

                    switch (adminChoice) {
                    case 1: {
                        cout << "Enter Product Details:\n";
                        cout << "Product Name: ";
                        cin >> pname;
                        cout << "Brand: ";
                        cin >> pbrand;
                        cout << "Product ID: ";
                        cin >> pID;
                        cout << "Category: ";
                        cin >> category;
                        cout << "Quantity: ";
                        cin >> quant;
                        cout << "Price: ";
                        cin >> price;
                        Product newProduct(pname, pbrand, pID, category, quant, price);
                        admin.addproduct(pin, newProduct);
                        break;
                    }
                    case 2: {
                        cout << "Enter Product Name to Remove: ";
                        cin >> pname;
                        admin.removeproduct(pin, pname);
                        break;
                    }
                    case 3: {
                        cout << "Enter Product Name to Restock: ";
                        cin >> pname;
                        cout << "Enter Quantity to Add: ";
                        cin >> qty;
                        admin.restock(pin, pname, qty);
                        break;
                    }
                    case 4: {
                        cout << "Enter Product Name to Change Price: ";
                        cin >> pname;
                        cout << "Enter New Price: ";
                        cin >> newprice;
                        admin.changeprice(pin, pname, newprice);
                        break;
                    }
                    case 5: {
                        cout << "Logging out...\n";
                        break;
                    }
                    default: {
                        cout << "Invalid Choice. Try again.\n";
                        break;
                    }
                    }
                } while (adminChoice != 5);
            } else {
                cout << "Incorrect PIN. Access Denied.\n";
            }
            break;
        }
        case 2: { // User Operations
            int userChoice;
            do {
                cout << "1. Add to Cart\n";
                cout << "2. Remove from Cart\n";
                cout << "3. View Cart\n";
                cout << "4. Logout\n";
                cout << "Enter your choice: ";
                cin >> userChoice;

                switch (userChoice) {
                case 1: {
                    cout << "Enter Product Name: ";
                    cin >> pname;
                    cout << "Enter Quantity: ";
                    cin >> quant;
                    Shopping newItem(pname, quant);
                    cart.addtocart(newItem);
                    break;
                }
                case 2: {
                    cout << "Enter Product Name to Remove: ";
                    cin >> pname;
                    cart.removefromcart(pname);
                    break;
                }
                case 3: {
                    cout << "Enter Product Name to View: ";
                    cin >> pname;
                    cart.display(pname);
                    break;
                }
                case 4: {
                    cout << "Logging out...\n";
                    break;
                }
                default: {
                    cout << "Invalid Choice. Try again.\n";
                    break;
                }
                }
            } while (userChoice != 4);
            break;
        }
        case 3: {
            cout << "Exiting the system. Thank you!\n";
            return 0;
        }
        default: {
            cout << "Invalid choice. Try again.\n";
            break;
        }
        }
    }

    return 0;
}
