#include <iostream>
using namespace std;
double volume(int l)
{
    return (l*l*l);
}
double volume(double r,double h)
{
    return(3.14*r*r*h);
}
double volume(int l,int b,int h)
{
    return(l*b*h);
}
int main()
{
    int ch,result,length,breth,height,radius;
    cout<<"enter no of inputs";
    cin>>ch;
   if(ch==1){
    cout<<"enter the length of cube";
    cin>>length;
    result=volume(length);
   }
   if(ch==3){
    cout<<"enter lenrht breth height";
    cin>>length>>breth>>height;
    result=volume(length,breth,height);
   }
   if(ch==2){
     cout<<"enter radius height";
    cin>>radius,height;
    result=volume(radius,height);
   }
}
