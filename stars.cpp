#include<iostream>
using namespace std; //using namespace i have founded from google and i like it:)
int main()
{

	cout<<"\"Hi Arman see my triangle 7x7\"\n\n";


  int w=7;

   for(int g=0;g<7;g++)
 {
	 cout<<"* ";
 }
  cout<<endl;

  for(int a=1;a<=5;a++)
 {

    for(int b=0;b<a;b++)
   {
    cout<<" ";
   }
    cout<<"* ";


     for(int c=0;c<=w;c++)
     {
      cout<<" ";
     }
      cout<<"*"<<endl;
      w=w-2;
 }

  for(int e=1;e<=1;e++)
 {

    for(int f=4;f>=e;f--)
   {
    cout<<" ";
   }
    cout<<"  *";
 }
  cout<<endl;

  return 0;
}
