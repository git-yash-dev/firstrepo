#include <iostream>
#include<vector>
using namespace std;
class Movie{
private:
    string name;
    string director;
    int year;
    bool avl;
public:
    Movie(string n,string d,int y,bool a=true): name(n),director(d),year(y),avl(a){}
    string getname(){return name;}
    string getdirector(){return director;}
    int getyear(){return year;}
    bool getavl(){return avl;}
    void setname(string iname){name=iname;}
    void setdirector(string idirector){director=idirector;}
    void setyear(int iyear){year=iyear;}
    void setavl(bool ival){avl=ival;}
    void display(){
        cout<<"Movie name : "<<getname()<<endl;
        cout<<"Director name: "<<getdirector()<<endl;
        cout <<"Released year : "<<getyear()<<endl;
    }
};
class Member{
private:
    string name;
    string ID;
    string rented;
public:
    Member(string n,string e,string r="No movie rented yet"):name(n),ID(e),rented(r){}
    string getname(){return name;}
    string getID(){return ID;}
    string getrented(){return rented;}
    void setname(string iname){name=iname;}
    void setID(string iid){ID=iid;}
    void setrented(string irented){rented=irented;}
    void display(){
        cout<<"Name : "<<getname()<<endl;
        cout<<"ID : "<<getID()<<endl;
        cout<<"Movie Rented : "<<getrented()<<endl;
    }

};
class Movierental{
private:
    vector <Movie> movies;
    vector <Member> members;
public:
    void addmovie(const Movie &book){
        movies.push_back(book);
    }
    void addmember(const Member &member){
        members.push_back(member);
    }
    void rent_movie(string memberName,string title){
        for(auto &member:members){
            if(member.getname()==memberName){
                for(auto &movie:movies){
                    if(movie.getname()==title){
                        member.setrented(title);
                        movie.setavl(false);
                        cout<<"Movie rented successfully. Enjoy!";
                        return;
                    }
                }
                cout<<"Movie not found!";
            }
        }
        cout<<"Member not found!";
    }
    void return_movie(string name){
        for(auto &member:members){
            if (member.getname()==name){
                for(auto & movie:movies){
                    if(member.getrented()==movie.getname()){
                        cout<<"Thanks for returning "<<member.getrented()<<endl;
                        member.setrented("");
                        movie.setavl(true);
                        return;
                    }
                }
                cout<<"You have not rented a movie yet!";
                return;
            }
        }
        cout<<"no member with name '"<<name<<"'found. Try again!";
    }
};
int main(){
    
}