//Authors: 
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name1;
    string adjective;
    string name2;
    string noun1;
    string name3;
    string noun2;
    string noun3;

  cout << "Welcome to Mad Libs!\n"; 
  cout << "Please Enter a Name:\n";
  cin >> name1;
  cout << "Now enter an adjective:\n";
  cin >> adjective;
  cout << "Enter another name:\n";
  cin >> name2;
  cout << "Enter a noun:\n";
  cin >> noun1;
  cout << "Enter a name:\n";
  cin >> name3;
  cout << "Enter a noun:\n";
  cin >> noun2;
  cout << "Last one! Enter a noun:\n";
  cin >> noun3;
  cout<<endl<< "According to Principal "; cout<< name1; cout<< ", the science fair this year was "; cout<< adjective;
  cout<<".";
  cout<<endl;
  cout<< name2;
  char a;
  a='"';
  cout<< " won second place with an experiment that asked ";
  cout<< a;
  cout<<"Can ";
  cout<< noun1;
  cout<< " learn karate?";
  cout<< a;
  cout<<endl;
  cout<< "(The answer was yes). ";
  cout<<name3;
  cout<< " won first place with her TNT ";
  cout<<noun2;
  cout<< ".";
  cout<< "By planting";
  cout<<endl;        
  cout<< "seeds in gunpowder and watering them with ";
  cout<< noun3;
  cout<< ", she grew plants that explode";
  cout<< endl;        
  cout<< "when you drop them.";
cout<<endl; 
  return 0;
}
