#include <iostream>
using namespace std;

int main(){
    int grade;
    cout << "Enter your grade: ";
    cin >> grade;

    if (grade >= 95){
cout<< " congrate your grade is A+ "<<endl;
    }

    if (grade >= 90 && grade < 95){
cout<< " congrate your grade is A "<<endl;
    }

if (grade >= 85 && grade < 90){
cout<< " congrate your grade is B+ "<<endl;
    }

if (grade >= 80 && grade < 85){
cout<< " congrate your grade is B "<<endl;
    }

    if (grade >= 75 && grade < 80)
    {
  cout<< " Your grade is C+ "<<endl;
    }

    if (grade >= 70 && grade < 75)
    {
      cout<< " Your grade is C "<<endl;
    }

    if (grade >= 65 && grade < 70)
    {
      cout<< " Your grade is D+ "<<endl;
    }

    if (grade >= 60 && grade < 65)
    {
     cout<< " Your grade is D "<<endl;
    }

    if (grade >= 55 && grade < 60)
    {
      cout<< " Your grade is F "<<endl;
    }

    if (grade <= 54)
    {
        cout << " You didn't pass course " <<endl;
    }
    
return 0;
}