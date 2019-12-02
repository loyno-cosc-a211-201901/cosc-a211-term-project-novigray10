//Final Project
//a program that helps a student find grades and GPA
//Zenovia Gray
//Dec. 2nd.

#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;



int main()
{
int choice;



while (choice != 6){

// Menu For Choices
cout <<"*********************************************************\n";
cout <<"         Hello and Welcome to Grade Assist\n";
cout << " Please Choose From The Options Below To Get Started\n"; 
cout << "---------------------------------------------------------\n";
cout << " 1 - Grade Avergae Caculator\n";
cout << " 2 - GPA Caculator System \n";
cout<<  " 3 - Overall GPA Calculator\n";
cout << " 4 - Final Grade Calculator.\n";
cout << " 5 - Conversion Chart \n";
cout << " 6 - Exit.\n";
cout << "*********************************************************\n";
// Error Statment
while (cout << "Enter your choice and press return: " && !(cin >> choice))
{      cout << " \nError Please Try Again.\n";
       cin.clear();
       cin.ignore();}
cout << "\n";

 switch(choice)
{
// Grade Average Caculator
case 1:
    int grades1, i1;  
    float score, total, averageScore;
    cout << "Welcome to Grade Avergae Caculator! \n";
    cout << "This caculator will help you find the average of your grades.\n";
    cout << "Please enter percentages for each of your grades. \n";
    cout << "\n";
    
    // Input number of subjects 
     
    while (cout << "Enter the number of grades you'll enter: " && !( cin >> grades1)){
       cout << " \nError Please Try Again.\n";
       cin.clear();
       cin.ignore();
       
    }

    cout << "\n";
    //  Take marks of subjects as input 
   
    
    for(i1 = 1; i1 <= grades1; i1++){
       while (cout << "Enter Grade " << i1 << ": " && !(cin >> score))
       {cout << " \nError Please Try Again.\n";
        cin.clear();
        cin.ignore();}
       total += score; 
    }
     
    // Calculate Average
   averageScore = total / grades1;
   cout << "\n";
   cout << "Your avergae grade in the class will be: " << averageScore;  
   cout << "\n";
   cout << "\n";
   break;

// GPA Caculator
case 2:
int numsemester, i2;  
    float point, total2, GPA;
    cout << "Welcome to GPA Caculator! \n";
    cout << "This caculator will help you find your GPA. \n";
    cout << "\n";
    // Input number of subjects 
     
    while (cout << "Enter the number of classes you had this semester: " && !(cin >> numsemester))  
    {cout << " \nError Please Try Again.\n";
    cin.clear();
    cin.ignore();}
    //  Take marks of subjects as input 
   
    total2 = 0;
    for(i2 = 1; i2 <= numsemester; i2++){
       while (cout << "Enter Grade Point " << i2 << ": " && !(cin >> point))
       {cout << " \nError Please Try Again.\n";
        cin.clear();
        cin.ignore();}
       total2 += point; 
    }
     
    // Calculate Average
    GPA = total2 / numsemester;
   cout << "\n";
   cout << "Your avergae grade in the class will be: " << setprecision(2) << GPA;  
   cout << "\n";
   cout << "\n";
break;

// Overall GPA Caculator
case 3:
float sem,i,total3,average_gpa,result;
cout << "Welcome To Overall GPA Caculator\n";
cout << "Find your GPA over the course of the semesters\n";
cout << "\n";
// Gets Input
while (cout << "Enter the number of semesters you want to enter a GPA for:  " && !(cin>>sem))
      {cout << " \nError Please Try Again.\n";
       cin.clear();
       cin.ignore();}
// Does Caculation
total2 = 0;
	for (int i=1; i<=sem;i++)
	{
	   while (cout << "What was your GPA for semester " << i << ": " && !(cin >> total3))
      {cout << " \nError Please Try Again.\n";
       cin.clear();
       cin.ignore();}
	   result += total3;
	   average_gpa = result/sem;


}
// Output
cout << "\n";
cout << "Your average GPA would be: " << fixed << setprecision(2) << average_gpa;
cout << "\n";
cout << "\n";

break;

// Final Grade Calculator
case 4:
float current, weight, desired , final ,step2 ,step1;
cout << "Welcome To Final Grade Calculator \n";
cout << "This will give you the grade you need on your final exam, \n";
cout << "to get the final grade you want in a class. \n";
cout << "\n";
// Getting Input
while (cout << "Please Enter Your Current Grade: " && !(cin >> current))
{      cout << " \nError Please Try Again.\n";
       cin.clear();
       cin.ignore();}
while (cout << "Next, Enter The Weight Of The Final Exam: " && !(cin >> weight))
{      cout << " \nError Please Try Again.\n";
       cin.clear();
       cin.ignore();}
while (cout << "Finally, Enter the Desired Grade You Want In The Class: " && !(cin >> desired))
{      cout << " \nError Please Try Again.\n";
       cin.clear();
       cin.ignore();}
cout << "\n";
// Does Caculations
step1 = weight / 100;
step2 = (1 - step1) * current;
final = (desired - step2) / step1;
// Output
cout << "The Grade You Would Need On The Final To Get An " << desired << "% In the class, Is an " << final << "% Or Higher. \n";
cout << "\n";
break;

// Conversion Chart
case 5:
cout << "Welcome to The Conversion Chart! \n";
cout << "This chart will show you grade conversions. \n";
cout << "\n";
cout << "Letter Conversion Chart \n";
cout << "A = 100-90\n";
cout << "B = 89-80\n";
cout << "C = 79-70\n";
cout << "D = 69-60\n";
cout << "F = 59-0\n";
cout << "AP/Dual Classes Chart \n";
cout << "A = 5\n";
cout << "B = 4\n";
cout << "C = 3\n";
cout << "D = 2\n";
cout << "F = 0\n";
cout << "Regular Classes Chart\n";
cout << "A = 4\n";
cout << "B = 3\n";
cout << "C = 2\n";
cout << "D = 1\n";
cout << "F = 0\n";
cout << "\n";

break;

// Closes The Program
case 6:
cout << "Have A Great Day And Thanks For Using Grade Assist :)!\n";

break;
}



}while (choice !=6);
return 0;
}
// End Of Program