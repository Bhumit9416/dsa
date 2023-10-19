#include<iostream>
using namespace std;
int main(){
char a[]="hello";
string s(a);
cout<<s<<endl;
int q=s.length();
int r=s.find(a);
s.erase(r);

cout<<q<<endl<<r;
return 0;
}
