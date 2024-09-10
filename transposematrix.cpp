#include <iostream>
using namespace std;
void interchange(int mat[3][3],int matx[3][3]){
  for(int i =0 ;i<3;++i){
    for(int f =0 ;f<3;++f){
      matx[f][i]=mat[i][f];
    }
  }
}

int main(){
  int mat[3][3];
  int matx[3][3];
  for(int i =0 ;i<3;++i){
    for(int f =0 ;f<3;++f){
      cout<<"enter number in row "<<i+1<<" and column "<<f+1<<endl;
      cin>>mat[i][f];
    }
  }
  interchange(mat,matx);
  for(int i =0 ;i<3;++i){
    for(int f =0 ;f<3;++f){
      cout<<matx[i][f]<<" ";
    }
    cout<<endl;
  }
  int sum=0;
  for(int i =0 ;i<3;++i){
    for(int f =0 ;f<3;++f)
    if (i==f){
      sum+=mat[i][f];
    }
    else{continue;}
  }
  cout<<"sum of diagonal element :"<<sum;
}