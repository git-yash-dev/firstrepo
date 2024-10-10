#include<iostream>
#include<vector>
using namespace std;
void replace(vector<vector<int>> & mat){
  int x=mat.size();
  int var=x-1;
  vector<vector<int>> newmat(x-2,vector<int>(x-2));
  int g=1,h=1;
  for (int i=0;i<x-2;i++){  
    for (int f=0;f<x-2;f++){
      newmat[i][f]=mat[g][h];
      h++;
    }
    h=1;
    g++;
  }
  mat=newmat;

}
void output(vector<vector<int>> & mat){
  int x=mat.size();
  for (int i=0;i<x;i++){
    for(int f=0;f<x;f++){
      cout<<mat[i][f]<<" ";
    }
  cout<<endl;
  }

}
void spiralmat(const vector<vector<int>> & mat){
  int x =mat.size();
  for(int i =0 ;i==0;i++){
    for (int f=0;f<x;++f){
      cout<<mat[i][f]<<" ";
    }
  }
  for(int i=x ;i==x;i++){
    for(int f=1;f<x;f++){
      cout<<mat[f][i-1]<<" ";
    }
  }
  for(int i=x ;i==x;i++){
    for(int f=x;f!=0;f--){
      if (f==x){
        continue;
      }
      else{
      cout<<mat[i-1][f-1]<<" ";
      }
    }
  }
  for(int i=0 ;i==0;i++){
    for(int j=x-1;j!=1;--j){
      cout<<mat[j-1][i]<<" "; 
      }
    }
  }
int main(){
  int x;
  cin>>x;
  vector<vector<int>>mat(x,vector<int>(x));
  for (int i=0;i<x;++i){
    for(int f=0;f<x;++f){
      cin>>mat[i][f];
    }
    }
  output(mat);  
  if (x%2==0){
    for (int i=0;i<x/2;i++){
      spiralmat(mat);
      replace(mat);
      
    }
  }
  else{
    for (int i=0;i<x/2;i++){
      spiralmat(mat);
      replace(mat);
  }
    cout<<mat[0][0];
}
}