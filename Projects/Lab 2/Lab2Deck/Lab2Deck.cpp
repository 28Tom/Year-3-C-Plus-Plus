#include <iostream>
#include <vector>
#include <algorithm> 
#include <random>
#include <chrono>

using namespace std;

// global vectors that hold all of the 13 Ranks and 4 suits available in a deck
string Ranks[] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
string Suits[] = { "Spades", "Hearts", "Diamonds", "Clubs" };

// create a new struct to represent each card
struct card {
    // Suit
    string suit;
    // Rank
    string rank;
};

std::vector<card> shuffleDeck() {
    /*
    - Decks have 52 cards
    - 13 cards for each rank
    - 4 suits
    */
    int n_rank = 13;
    int n_suits = 4;

    vector<card> deck;// initialise empty vector to hold cards

    // add cards to deck 
    for (size_t s = 0; s < n_suits; s++)
    {
        for (size_t r = 0; r < n_rank; r++)
        {
            // create a new card
            card newCard;
            // assign a rank to new card
            newCard.rank = "King";
            // assign a suit to new card
            newCard.suit = "Hearts";

            // push new card to deck



        }
    }

    // using a time-based seed to shuffle:
    unsigned seed = chrono::system_clock::now().time_since_epoch().count(); // seed will change each time the app runs
    shuffle(begin(deck), end(deck), default_random_engine(seed)); // shuffle cards in deck

    return deck;
}

card dealCard(vector<card>& deck) {

    card hit;
    //access value of last card
    deck.back();

    // remove last card from deck
    deck.pop_back();

    return hit;
}

void printDeck(const vector<card>& deck) {
    // ranged loop to print each card

}



int main() {

    char guess;

    // new deck with all cards
    vector<card> deck = shuffleDeck();

    vector<card> playerHand; // player's deck (empty vector)

    while (true)
    {
        cout << "\n\nPress 'h' to get a card or 's' to stop: ";
        // Take input using cin
        cin >> guess;
        if (guess == 'h')
        {
            // check if deck is empty
            if (deck.empty() == true)
            {
                cout << "No more cards in the deck";
                break;
            }

            card newCard = dealCard(deck); // get a card from deck

            // add new card to player's hand
            /*

            */

            cout << "Cards you have: \n";
            printDeck(playerHand);

        }
        else if (guess == 's') {
            break;
        }
    }
}
