#include<iostream>
#include<vector>
using namespace std;


 void print( vector<int> &arr){
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
 }
 void merge(vector<int> &a, vector<int> &b, vector<int> &c){
    int i=0,j=0,k=0;
    int m=a.size();
    int n=b.size();
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    while(i<m){
        c[k++]=a[i++];
    }
    while(j<n){
        c[k++]=b[j++];
    }
     
 }
int main(){
  vector<int> a={2,3,6,8};
  vector<int> b={0,1,3,6,8};
  int m=a.size();
  int n=b.size();
  vector<int> c(m+n);
//    print(a);
  merge(a,b,c);
  print(c);

  return 0;

}