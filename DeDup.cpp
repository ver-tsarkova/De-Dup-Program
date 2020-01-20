/* 
Filename: DeDup.cpp
Assignment: HW12: De-Dup            
Description: A program that removes duplicates from an array.  
*/ 

#include<iostream>
#include<cstring>
using namespace std;

void removeDuplicates(int numbers[], int n = 10); // Function prototype removes duplicates 
void printWithoutDuplicates(int numbers[], int n = 10); // Function prototype displays distinct numbers 

int main ()
{
  int n = 10, numbers[11], i, j, x;
  
  cout << "Please enter 10 integers, hitting return after each one: \n";
  for (int i = 0; i < n; i++)
    cin >> numbers[i];
  
  cout << "You entered distinct numbers: \n";
  removeDuplicates(numbers, n); // Function call
  printWithoutDuplicates(numbers, n); // Function call 
  return 0;
}

void removeDuplicates(int numbers[], int n) // Function header removes duplicate numbers
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n;)
    {
      if (numbers[i] == numbers[j])
      {
        for (int x = j; x < n; x++)
        {
          numbers[x] = numbers[x + 1];
        }
        n--;
      }
      else
        j++;
    }
  }
}

void printWithoutDuplicates(int numbers[], int n) // Function header displays distinct numbers
{
  for (int i = 0; i < n; i++)
    cout << numbers[i] << " "; 
}

/*
[vtsarkov@hills cs110a]$ g++ DeDup.cpp
[vtsarkov@hills cs110a]$ ./a.out
Please enter 10 integers, hitting return after each one:
5
75
10
75
5
80
10
5
5
50
You entered distinct numbers:
5 75 10 80 50 4196224 4196224 4196224 4196224 4196224 
[vtsarkov@hills cs110a]$ ./a.out
Please enter 10 integers, hitting return after each one:
1
2
3
4
5
6
7
8
9
10
You entered distinct numbers:
1 2 3 4 5 6 7 8 9 10 
[vtsarkov@hills cs110a]$
*/
