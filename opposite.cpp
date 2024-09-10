#include<iostream>
#include<limits>

using namespace std;
int main(){
  int no1,no2;
  string fun;
  cout<<"Loading program to do simple operation on 2 numbers "<<endl;
  cout<<"Listed below are the operation that can be performed--\n ";
  cout<<"For addition enter- add"<<endl;
  cout<<"For substraction enter- sub"<<endl;
  cout<<"For multiplication enter- mul"<<endl;
  cout<<"For division enter- div"<<endl;
  cout<<"enter first number"<<endl;
  cin>>no1;
  while(cin.fail()){
    cin.clear();
    cin.ignore(100, '\n');
    cout <<"you have entered non-numerical number! try again ";
  }
  cout<<"enter second number"<<endl;
  cin>>no2;
  while (cin.fail()){
    cin.clear();
    cin.ignore(100, '\n');
    cout <<"you have entered non-numerical number! try again ";
}
  cout<<"enter operation code to perform "<<endl;
  cin>>fun;
  if (fun=="add"){
    cout<<"sum of given number is-"<<no1+no2;}
  else if (fun=="sub"){
    cout<<"difference of given number is-"<<no1-no2;}
  else if (fun=="mul"){
    cout<<"multiplication of given number is-"<<no1*no2;}
  else if (fun == "div") {
    while (no2 == 0) {
      cout << "Division by zero is not allowed. Please enter a non-zero second number: ";
      cin >> no2;}
    while (cin.fail()) {
      cin.clear();
      cin.ignore(100, '\n');
      cout << "You have entered a non-numerical number! Try again: ";
      cin >> no2;}
    cout << "Division of given numbers is: " << no1 / no2 << endl;
    } 
  else{
    cout<<"INPUT INVALID \n PLEASE TRY AGAIN ";} 
}