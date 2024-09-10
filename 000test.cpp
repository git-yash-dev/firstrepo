#include <iostream>
#include <vector>
using namespace std;
class Book{
private:
    string title;
    string author;
    string isbn;
    int price;
    bool borrowed;
public:
    Book(string t,string a, string i,int p,bool b=0): title(t),author(a),isbn(i),price(p),borrowed(b){}
    string gettitle(){return title;}
    string getauthor(){return author;}
    string getisbn(){return isbn;}
    int getprice(){return price;}
    bool getborrowed(){return borrowed;}
    
    void settitle(const string &tit){title=tit;}
    void setauthor(const string &aut){author=aut;}
    void setisbn(const string &is){isbn=is;}
    void setprice(const int &pr){price=pr;}
    void setborrowed(const bool &bo){borrowed=bo;}
    void display(){
        cout<<"Book Title : "<<gettitle()<<endl;
        cout<<"Author : "<<getauthor()<<endl;
        cout<<"Isbn : "<<getisbn()<<endl;
        cout<<"price : "<<getprice()<<endl;
        if (getborrowed()==0){
          cout<<"Book Status : Not Issued"<<endl;
        }
        else{cout<<"Book Status : Issued"<<endl;}
    }

};
class Member {
private:
    string name;
    int memberID;
    string borrowedBook;
public:

    Member(string n,int m,string b=""):name(n),memberID(m),borrowedBook(b){}
    string getname(){return name;}
    int getmemberID(){return memberID;}
    string getborrowedBook(){return borrowedBook;}
    
    void setname(const string &nam){name=nam;}
    void setmemberID(const int &num){memberID=num;}
    void setborrowedBook(const string &borrowedbook){borrowedBook=borrowedbook;}
    string borrbooks[5]={"","","","",""};
    void issuebook(const string &isbn){
        for(int i=0;i<5;++i){
            if(borrbooks[i]==""){
                borrbooks[i]=isbn;
                cout<<"Book issued sucessfully!"<<endl;
                return;
            }
        }
        cout<<"You already habe borrowed 5 books. Please return one of the to issue another one."<<endl;
    }
    void returnBook(const string &isbn){
        for(int i=0;i<5;i++){
            if (borrbooks[i]==isbn){
                cout<<"Thank you for returning book in time."<<endl;
                borrbooks[i]="";
                return; 
            }
        }
        cout<<"You have not issued this book.Check spelling or your borrowed list and try again!"<<endl;
    }
    void viewborrowedbook(){
        bool ch=0;
        for(int i=0;i<5;++i){
            if(borrbooks[i]==""){
                ch++;
            }
        }
        if (ch<5){
            cout<<"Books borrowed are:-"<<endl;
            for(auto &book:borrbooks){
                if (book!=""){
                    cout<<book<<endl;
                }
            }
        }
    }
};
class bookborrowsystem{
private:
    vector <Book> books;
    vector <Member> members;
public:
    void addBook(const Book &book){
        books.push_back(book);
        return;
        cout<<"There is an error in entered data.Try again!"<<endl;
    }
    void removeBook(const string isbn){
        for(auto it=books.begin();it!=books.end();++it){
            if (it->getisbn()==isbn){
                books.erase(it);
                return;
            }
        }
        cout<<"Book with isbn '"<<isbn<<"' not found. Try again!"<<endl;
    }
    void registerMember(const Member &member){
        members.push_back(member);
        return;
        cout<<"There is an error in entered data.Try again!"<<endl;
    }
    void removeMember(const int memberID){
        for(auto it=members.begin();it!=members.end();++it){
            if(it->getmemberID()==memberID){
                members.erase(it);
                return;
            }
        }
        cout<<"MemberID did not found!"<<endl;
    }
    void issueBook(const int &memberID,const string &isbn){
        for(auto member:members){
            if (member.getmemberID()==memberID){
                for(auto it=books.begin();it!=books.end();++it){
                    if(it->getisbn()==isbn){
                      if(it->getborrowed()==0){
                          member.issuebook(isbn);
                          it->setborrowed(1);
                          return;
                        }
                      else{cout<<"Book already issued to   another member."<<endl;
                        return;
                      }
                      }
                }
                cout<<"isbn not found.Try again!"<<endl;
            }
        }
        cout<<"Member not found.Try again!"<<endl;
    }
    void returnBook(const int memberID,const string &isbn){
        for(auto member:members){
            if (member.getmemberID()==memberID){
                for(auto it=books.begin();it!=books.end();++it){
                    member.returnBook(isbn);
                    it->setborrowed(0);
                    return;
                }
                cout<<"isbn not found.Try again!"<<endl;
                return;
            }
        }
        cout<<"Member not found.Try again!"<<endl;
    }
    void viewBorrowedbooks(const int memberID){
        for(auto member :members){
            if(member.getmemberID()==memberID){
                member.viewborrowedbook();
                return;
            }
        }
        cout<<"MemberId not found!"<<endl;
    }
    void checkbookavailability(const string isbn){
        for(auto it=books.begin();it!=books.end();++it){
            if (it->getborrowed()==1){
                cout <<"Sorry book with isbn : "<<isbn<< " is not available for issue!"<<endl;
                return;
            }
            else if(it->getborrowed()==0){
                cout<<"Book available for issue!"<<endl;
                return;
            }
        }
        cout<<"isbn : "<<isbn<<" does not exist."<<endl;
    }
    void searchbytitle(const string title){
        for(auto book:books){
            if (book.gettitle()==title){
                book.display();
                return;
            }
        }
        cout<<"Book with title "<<title<<" not found"<<endl;
    } 
    void searchbyauthor(const string author){
        for(auto book:books){
            if (book.getauthor()==author){
                book.display();
                return;
            }
        }
        cout<<"Book written by author "<<author<<" not found"<<endl;
    }
};
int main(){

  bookborrowsystem system;
  system.addBook(Book("The Catcher in the Rye","J.D Salinger","9780316769488",399));
  system.addBook(Book("To Kill a Mockingbird","Harper Lee","9780061120084",499));
  system.addBook(Book("1984","George Orwell","9780451524935",349));
  system.addBook(Book("The Great Gatsby","F. Scott Fitzgerald","9780743273565",299));
  system.addBook(Book("Pride and Prejudice","Jane Austen","9780141439518",399));
  system.addBook(Book("Moby-Dick","Herman Malville","9780142437247",299));
  system.registerMember(Member("Alice Jhonson",1));
  system.registerMember(Member("Bob Smith",2));
  system.issueBook(1,"9780316769488");
  system.issueBook(1,"9780061120084");
  system.issueBook(1,"9780451524935");
  system.issueBook(1,"9780743273565");
  system.issueBook(1,"9780141439518");
  system.issueBook(1,"9780142437247");//hetyhui
  system.issueBook(2,"9780743273565");
  system.viewBorrowedbooks(1);
  system.issueBook(2,"9780743273565");
  system.checkbookavailability("9780743273565");

}