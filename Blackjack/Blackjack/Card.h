#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Card {
public:
    
    enum Suit { SPADE, HEART, DIAMOND, CLUB };
    enum Rank { ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING }; //ACE = 1�A�᭱����1���Ỽ�W

    Card(Suit suit = SPADE, Rank rank = ACE);
    Suit get_suit() const;
    Rank get_rank() const;

private:
    Suit suit;
    Rank rank;
};
