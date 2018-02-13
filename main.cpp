//Authors:Yaneth Reyes Hinojosa
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables

  std::string FirstName;
  std::string LastName;
  
  //get user input

  cout<< "What is your first name? \n";
  cin>> FirstName; 
  
  cout<< "What is your last name? \n";
  cin>> LastName; 

  std::string word1 = FirstName;
  std::string word2 = LastName; 
  cout<< "Welcome, " <<word1[0]<< "." <<word2[0]<< ". , here is your fortune... \n";
  //tell fortune,

  return 0;
}
