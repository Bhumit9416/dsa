#include<iostream>
using namespace std;
void merge(int*a,int*b,int*c,int s,int e){
  int mid=(s+e)/2;
  int i=s;
  int j=mid+1;
  int k=s;
  while(i<=mid and j<=e){
    if(b[i]<=c[j]){
        a[k]=b[i];
        k++;
        i++;
    }
    else{
        a[k]=c[j];
        k++;
        j++;
        }
  }
  while(i<=mid){
    a[k]=b[i];
    k++;
    i++;
  }
  while(j<=e){
    a[k]=c[j];
    k++;
    j++;
   
  }
void mergesort(int*a,int s,int e){
if(s>=e){
    return;
}
int b[100],c[100];
int mid=(s+e)/2;
for (int i = s; i <=mid; i++)
{
    b[i]=a[i];
}
for (int i =mid+1; i <=e; i++)
{
    c[i]=a[i];
}
mergesort(b,s,mid);
mergesort(c,mid+1,e);

merge(a,b,c,s,e);

}
 



 




int main()
{
    int a[]={1,4,3,6,1,48,5,87,8};
    mergesort(a,0,8);
    for(int i=0; i<=8;i++){
        cout<<a[i]<<" ";
    }
return 0;
}