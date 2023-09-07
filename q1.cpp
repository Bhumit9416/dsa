#include<iostream>
using namespace std;
void maxarray(int a[],int n){
    int maxsum= INT_FAST8_MIN;
    int wi , wj;
    int csum[1000]={0}; 
    for(int i=1;i<n;i++){
        csum[i]=csum[i-1]+a[i];
    }
    for(int i=0; i<n;i++){
        for(int j=i ; j<n;j++){
            int sum=0;
            sum=csum[j]-csum[i-1];
            if(maxsum<sum){
                maxsum=sum;
                wi=i;
                wj=j;
            }
        }
    }
    for(int i=wi;i<=wj;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<maxsum<<endl;
}


int main(){
    int a[]={0,-1,2,3,4,6,7,8,9};
    int n= sizeof(a)/sizeof(int);
    maxarray(a,n);
    return 0;
}