#include<iostream>
using namespace std;
void issuebook(string borrbooks[5],const string isbn){
        for(int i=0;i<5;++i){
            if(borrbooks[i]==""){
                borrbooks[i]=isbn;
                cout<<"Book issued sucessfully!"<<endl;
                return;
            }
        }
        cout<<"not weorking";
}
int main(){
    string borrbooks[5]={"6455","","65456","65465","454654"};
    
    issuebook(borrbooks,"458755562");
    for(int i=0;i<5;i++){
        cout<<borrbooks[i]<<endl;
    }
}