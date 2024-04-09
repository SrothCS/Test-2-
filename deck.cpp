//Sroth Sinha 
// Class (CECS 325-02)
// Project War  (Programming assignment 1)
// Due Date (02/15/2024)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program


#include "deck.h"
#include <vector>
#include <cstdlib>  
#include <iostream> 
using namespace std;  


// Deck 
Deck::Deck() {
    const char suits[] = {'C', 'S', 'D', 'H'};
    const char ranks[] = {'A','2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};

    for (char suit : suits) {
        for (char rank : ranks) {
            cards.push_back(Card(rank, suit)); // It will add new cards in the deck. 
        }
    }
}

// Shuffle the deck
void Deck::shuffle() {
    for (size_t i = 0; i < cards.size(); i++) {
        int j = std::rand() % cards.size(); // It will Generate a random position
        std::swap(cards[i], cards[j]); // It will Swap the current card with the card at position j
    }
}

// Deal a card from the deck
Card Deck::deal() {
    if (cards.empty()) {
        std::cout << "Deck is empty!" << std::endl;
        //Usinh deck empty. 
        return Card('0', '0'); // it will Return a placeholder card
    }
    Card dealtCard = cards.back(); // It will Get the last card
    cards.pop_back(); // It will Remove the last card from the deck
    return dealtCard; // It will Return the dealt card
}

// Used to display all cards in the deck
void Deck::display() const {
    int count = 0;
  for (const Card& card : cards) {
      if (card.Rank() == 'T') {
        std::cout << "10" << card.Suit() << " ";
      }
      else {
        std::cout << card.Rank() << card.Suit() << " "; // 
        //Helps in adjusting the spacing between cards.
      }
      if ((count + 1) % 13 == 0) {
        std::cout << std::endl;
      }
      
      count += 1;
      
    }
    std::cout << std::endl;
}
