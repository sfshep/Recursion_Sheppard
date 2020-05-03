/* AAssignment 4 - C++ Towers of Hanoi - Recursion
   Stewart Sheppard
   May 3, 2020
   Dr. Tyson McMillan
   Tarrant County College
   COSC 1437-58000
   Text Editor: Repl.it
Using knowledge of C++ and Recursion, solve the Towers of Hanoi Problem
Recursion can be used to solve an problem if it can be broken down into successive smaller problems that are identical to the overall problem. A recursive function one that calls itself.
Credit to https://www.geeksforgeeks.org/c-program-for-tower-of-hanoi/
For using name of rods, clarirty of outcome much clearer thatn Gaddis Book solution.
*/

/* Rules for solving the Towers of Hanoi 
1) Only one disc may be moved at a time.
2) A disc cannot be placed on top of a smaller disc.
3) All discs must be stored on a peg except while being moved. */



#include <iostream>
#include "Input_Validation_Extended.h"
using namespace std;

void discMove(int, char, char,char);
void factorialR(int);
int main()
{
  int n = 0; // Number of disks
  int f = 0; // factorial
  cout << "Enter the number of disks : " << endl;
  //cin >> n;
  n = validateInt(n);
  discMove(n, 'A', 'C', 'B');
  
  cout << "\n\n\n Enter a number to generate a factorial:  ";
  f= validateInt(f);
  factorialR(f);
  return 0;
}



void discMove(int n, char from_rod, char to_rod, char aux_rod)
{
  if (n == 1)
  {
    cout << "Move disk # 1 from rod " << from_rod << " to rod " << to_rod << endl;
    return;
  }
  discMove(n - 1, from_rod, aux_rod, to_rod);
  cout << "Move disk # " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
  discMove(n-1, aux_rod, to_rod, from_rod);
}


void factorialR (int f)
{
  cout << "\n \n \n Here's the factorial: " << f << endl;
}
