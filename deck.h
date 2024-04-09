//Sroth Sinha 
// Class (CECS 325-02)
// Project War  (Programming assignment 1)
// Due Date (02/15/2024)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program


#ifndef DECK_H
#define DECK_H
#define DECK_H
#include "card.h" 
#include <vector>
using namespace std;
class Deck{
private:
std::vector<Card> cards;

public:
Deck();
Card deal();
void display() const;
void shuffle();
};
#endif 