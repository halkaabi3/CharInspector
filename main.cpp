//Author:
#include<iostream>

using namespace std;

int main()
{
char x;


  cout<<"What character do you want to know about?\n";

cin>>x;


if(isupper(x)){
  //when user's entry is between A-Z...
  cout<<x<<" is an upper case letter!\n";
}
  
else if(islower(x)){
  //when user's entry is between a-z...
  cout<<x<<" is a lower case letter!\n";
}

else{
//in all other cases...
  cout<<x<<"?! Pssh. What are you talking about?\n";
  }
  //no matter what they enter...
  cout<<"The ASCII value is: "<<(int)x<<endl;

  return 0;
}
