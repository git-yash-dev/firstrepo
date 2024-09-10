//20:15chatgpttime = 4:45pm 5:20--going out for a bit
#include<iostream>
#include<vector>
using namespace std;
class Game{
private:
  string title;
  string developer;
  string genre;
  float rating;
public:
  Game(string t,string d,string g,float r) : title(t),developer(d),genre(g),rating(r){}
  string gettitle(){return title;}
  string getdeveloper(){return developer;}
  string getgenre(){return genre;}
  float getrating(){return rating;}
  void display(){
    cout<<"Game title : "<<gettitle()<<endl;
    cout<<"developer : "<<getdeveloper()<<endl;
    cout<<"genre : "<<getgenre()<<endl;
    cout<<"ratingb : "<<getrating()<<endl;
  }
};
class Customer{
private:
  string name;
  int customerID;
  string rentedgame;
public:
  Customer(string n,int c,string r="") : name(n),customerID(c),rentedgame(r){}
  string getname(){return name;}
  int getcustomerid(){return customerID;}
  string getrentedgame(){return rentedgame;}
  void issuegame(const string &game){
    if (rentedgame==""){
      rentedgame=game;
      cout<<"Thanks for renting "<<game<<"."<<endl;
      return;
    }
    cout<<"You already have a game rented.Return it before borrowing another one"<<endl;
  }
  void returngame(){
    if(rentedgame==""){
      cout<<"You don't have any game to return."<<endl;
    }
    else{
      cout<<"thanks for returning "<<rentedgame<<" .\n";
      rentedgame="";
    }
  }
  void display(){
    cout<<"Customer Name: "<<name;
    cout<<"Customer ID: "<<customerID;
    cout<<"Issued Game"<<rentedgame;
  }
};
class Rentalsystem{
private:
  vector <Game> games;
  vector <Customer> customers;
public:
  void addgame(const Game &game){
    games.push_back(game);
  }
  void removegame(const string game){
    for(auto it=games.begin();it!=games.end();++it){
      if(it->gettitle()==game){
        games.erase(it);
        return;
      }
    }
    cout<<"Entered game does not exist.Try again!"<<endl;
  }
  void addcustomer(const Customer & customer){
    customers.push_back(customer);
  }
  void removecustomer(const string name){
    for(auto it = customers.begin();it!=customers.end();++it){
      if (it->getname()==name){
        customers.erase(it);
        return;
      }
    }
    cout<<"customer "<<name<<" not found."<<endl;
  }
  void issuegame(const int customerid,const string game){
    for(auto customer:customers){
      if (customer.getcustomerid()==customerid){
        for(auto it=games.begin(); it != games.end();++it){
          if (it->gettitle()==game){
            customer.issuegame(game);
            return;
          }
      }
        cout<<"Requested game not found."<<endl;
        return;
    }
  }
    cout<<"Customer entered not found."<<endl;
    return;
}
 void returngame(const int customerid){
  for(auto it=customers.begin(); it != customers.end();++it){
    if (it->getcustomerid()==customerid){
      it->returngame( b);
      return;
    }
  }
  cout<<"Customer ID not found.Try again!"<<endl;
 }
 void displaygames(){
  cout<<"Games in rental store are:-"<<endl;
  for(auto &game:games){
    cout<<game.gettitle()<<endl;
  }
 }
 void displaycustomer(){
  cout<<"customer associated with rental store are:-"<<endl;
  for(auto &customer:customers){
    cout<<customer.getname()<<endl;
  }
 }
};
int main(){
 Rentalsystem system;
 system.addgame(Game("Cyberpunk 2077","CD Projekt Red","sci-fi",8.1));
 system.addgame(Game("Witcher 3","CD Projekt Red","historical",9.5));
 system.addcustomer(Customer("Charlie",1));
 system.addcustomer(Customer("Diana",2));
 system.issuegame(1,"Witcher 3");
 system.issuegame(2,"Cyberpunk 2077");
 system.returngame(1);
 system.displaygames();
 system.displaycustomer();
}