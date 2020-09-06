#include<iostream>
  using namespace std;
  class Operation
   { 
    public:
    
    int a,b;
   int choice;

    void put()
     {
      cout<<"num is  "<<b;
      cout<<"num is "<<a;
     }
    
    void add()
     {
      cout<<"addition of two no is "<<a+b<<".\n";
     }
    void sub()
     {
      cout<<"substraction is "<<a-b<<".\n";

     }
    void mul()
     {
      cout<<"multiplication is "<<a*b<<".\n";

     }
    void div()
     {
      cout<<"division is "<<a/b<<".\n";

     }
   };

 int main()
   {
    Operation Opp;
   int choice;


     cout<<"enter the value of a and b";
     cin>>Opp.a>>Opp.b;
     Opp.add();
     cout<<"enter your choice\n"
     "1.Addition\n"
     "2.Substraction\n"
     "3.multiplication\n"
     "4.Division\n"
     "enter your choice\n";
     cin>>choice;
      
   switch (choice)
      {
          case 1:
           cout<<"Addition is \n";
           Opp.add();
          break;

          case 2:
           cout<<"Substraction  is \n";
           Opp.sub();
          break;

          case 3:
           cout<<"Multiplication is \n";
           Opp.mul();
          break;

          case 4:
           cout<<"Division is \n";
          Opp.div();
          break;

         default: 
cout<<"Enter valid option\n";
       // break;
     }
}
