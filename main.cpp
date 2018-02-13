//Authors:Yaneth Reyes Hinojosa
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables

  std::string FirstName;
  std::string LastName;
  int Lucky;
  //get user input

  cout<< "What is your first name? \n";
  cin>> FirstName; 
  
  cout<< "What is your last name? \n";
  cin>> LastName; 

  std::string word1 = FirstName;
  std::string word2 = LastName; 
  cout<< "Welcome, " <<word1[0]<< "." <<word2[0]<< "., here is your fortune, ";

  //tell fortune,
  Lucky = FirstName.length();
  //  cout<< "The variable has " <<FirstName.length() << " letters \n";
  cout<< "your lucky number is " << Lucky << ".\n";

  return 0;
}
