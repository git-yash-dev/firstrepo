#include <iostream>
#include <vector>
using namespace std;
void rotate90clockwise(vector<vector<int>> &mat){
  int x=mat.size();
  cout<<"matrix rotated 90 degree clockwise:-\n";
  for (int i=0;i<x;i++){
    for (int f=x;f>=1;f--){
      cout<<mat[f-1][i]<<" ";}
  cout<<endl;}}
int main(){
  int x;
  cout<<"enter rows or columns :";
  cin>>x;
  vector<vector<int>> mat(x,vector<int>(x));
  cout<<"program started:- \n";
  for (int i=0;i<x;i++){
    for (int f=0;f<x;f++){
      cout<<"enter element in column "<<i+1<<" row "<<f+1<<" :";
      cin>>mat[i][f];
    }
  }
  cout<<"orignsl matrix-:\n";
  for (int i=0;i<x;i++){
    for (int f=0;f<x;f++){
      cout<<mat[i][f]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  rotate90clockwise(mat);}