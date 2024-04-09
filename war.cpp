//Sroth Sinha 
// Class (CECS 325-02)
// Project War  (Programming assignment 1)
// Due Date (02/15/2024)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program
#include "deck.h"
#include <iostream>
#include <string>
using namespace std;
int main() {
    std::string player1Name, player2Name;
    int player1Score = 0, player2Score = 0, ties = 0;  //Used scores and ties for 0 
     
    std::cout << "Enter the name of the first player: "; // The name of first player. 
    getline(std::cin, player1Name);
    std::cout << "Enter the name of the second player: ";   // The name of second player.
    getline(std::cin, player2Name);
     
  
  Deck deck;
  std::cout<<"\nOriginal Deck" << endl;   //Using Original deck. 
  deck.display();
   
    deck.shuffle();     //Doing shuffle 
    std::cout << "Shuffled Deck" << endl;
    deck.display();

    
    for (int i = 0; i < 26; ++i) {     //Using 26 games. 
        std::cout << "\nGame " << (i + 1) << std::endl;
        std::cout << "----------" << std::endl;

        Card card1 = deck.deal();     //Using deal 
        Card card2 = deck.deal();
       
        
        std::cout << player1Name << "=>" << card1.Rank() << card1.Suit() << std::endl;   
        std::cout << player2Name << "=>" << card2.Rank() << card2.Suit() << std::endl;

        //Output function for everything. 
        int comparison = card1.compare(card2);
        if (comparison > 0) {
            std::cout << player1Name << "=> Winner" << std::endl;
            player1Score++;
        } else if (comparison < 0) {
            std::cout << player2Name << "=> Winner" << std::endl;
            player2Score++;
        } else {
            std::cout << "It's a Tie" << std::endl;
            ties++;
        }
    }

  //The final output. 
    std::cout << "\n------Final Stats-------" << std::endl;
    std::cout << player1Name << " vs. " << player2Name << std::endl;
    std::cout << "Wins" << "\t" << player1Score << "\t\t" << player2Score << std::endl;
    std::cout << "Losses" << "\t" << (26 - player1Score - ties) << "\t\t" << (26 - player2Score - ties) << std::endl; 
    std::cout << "Ties" << "\t" << ties << "\t\t" << ties << std::endl;

    return 0;
}
