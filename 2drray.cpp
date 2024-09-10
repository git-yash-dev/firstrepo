#include <iostream>
using namespace std;
int main(){
  int arr[3][3];
  for(int i =0;i<3;++i){
    for (int f=0;f<3;++f){
      cout<<"enter element in "<<i+1<<" st row "<<f+1<<" column";
      cin>>arr[i][f];
    }

  }
  int var1=0;
  int var2=0;
  int var3=0;
  int var4=0;
  int var5=0;
  int var6=0;
  for (int i=0;i<3;++i){
    for(int f=0;f<3;++f){
      if (i==0){
        var1+=arr[i][f];
      }
      else if (i==1){
        var2+=arr[i][f];
      }
      else if (i==2){
        var3+=arr[i][f];
      }
    }}
    for (int i=0;i<3;++i){
      for(int f=0;f<3;++f){
        if (f==0){
          var4+=arr[i][f];
      }
        else if (f==1){
          var5+=arr[i][f];
      }
        else if (f==2){
          var6+=arr[i][f];}
    }
    }
  cout<<"sum of 1st column  "<<var1<<endl;
  cout<<"sum of 2nd column  "<<var2<<endl;
  cout<<"sum of 3rd column  "<<var3<<endl;
  cout<<"sum of 1st row  "<<var4<<endl;
  cout<<"sum of 2nd row  "<<var5<<endl;
  cout<<"sum of 3rd row  "<<var6<<endl;
  }
