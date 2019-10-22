#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <ctime>

int main(){

srand(time(NULL));
int deck[52];


std::string suit[4]={"spades", "diamonds", "clubs", "hearts"};
std::string cards[13]={"ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "jack", "queen", "king"};

for(int i=0; i<52; i++)
    {
        deck[i] = i;
    }


for (int i = 0; i<52; i++){
    int suit_card = deck[i] / 13;
    int cards_card = deck[i] % 13;
    //std::cout<< suit[suit_card] << " of " << cards[cards_card] << "\n";
}


std::vector<std::string> card1 =  {"spades of ace ", "hearts of ace", "clubs of ace", "diamond of ace",
                                    "spades of 2 ", "hearts of 2", "clubs of 2", "diamond of 2",
                                    "spades of 3 ", "hearts of 3", "clubs of 3", "diamond of 3",
                                    "spades of 4 ", "hearts of 4", "clubs of 4", "diamond of 4",
                                    "spades of 5 ", "hearts of 5", "clubs of 5", "diamond of 5",
                                    "spades of 6 ", "hearts of 6", "clubs of 6", "diamond of 6",
                                    "spades of 7 ", "hearts of 7", "clubs of 7", "diamond of 7",
                                    "spades of 8 ", "hearts of 8", "clubs of 8", "diamond of 8",
                                    "spades of 9 ", "hearts of 9", "clubs of 9", "diamond of 9",
                                    "spades of 10 ", "hearts of 10", "clubs of 10", "diamond of 10",
                                    "spades of Jack ", "hearts of Jack", "clubs of Jack", "diamond of Jack",
                                    "spades of  Queen", "hearts of Queen", "clubs of Queen", "diamond of Queen",
                                    "spades of King ", "hearts of King", "clubs of King", "diamond of KIng"};


std::mt19937 generator(std::time(nullptr));

std::shuffle(card1.begin(), card1.end(), generator);

for (const auto& n : card1) {
        std::cout << n << std::endl;
    //std::string r = card1[rand() % 3 + 1];
    //std::cout << "yours cards are" << r << "\n";
    }

    return 0;
}