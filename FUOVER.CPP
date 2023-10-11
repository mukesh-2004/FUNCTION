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
    cout<<"volume of"<<endl<<"1.cube"<<endl<<"2.cuboid"<<endl<<"3.cylinder";
    cin>>ch;
    switch(ch) {
  case 1:
    cout<<"enter the length of cube";
    cin>>length;
    result=volume(length);
    break;
  case 2:
    cout<<"enter lenrht breth height";
    cin>>length>>breth>>height;
    result=volume(length,breth,height);
    break;
    case 3:
     cout<<"enter radius height";
    cin>>radius,height;
    result=volume(radius,height);
    break;
  default:
   cout<<" wrong choice";
}
}
