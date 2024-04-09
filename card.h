//Sroth Sinha 
// Class (CECS 325-02)
// Project War  (Programming assignment 1)
// Due Date (02/15/2024)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program



#ifndef CARD_H
#define CARD_H

#include <iostream>
#include<map>

using namespace std;
class Card {
private:
  char rank;  // Helps with rank of card 
  char suit; // Helps with suit of card
         static std::map<char,int>rankValues;   //declaration for rank and values of the card helps.

public: 
 Card(char r, char s); // using for declaring rank and suit 
char Rank() const { return rank; } // Getting our rank 
char Suit() const { return suit; } // Suit 
  void display() const; // helps to display the card
 int compare(const Card& other) const; // helps to compare two cards
};

#endif 


