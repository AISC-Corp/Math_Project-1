#include <iostream>
#include <list>
#include "Player.h++"
#include "Terms.h++"
#include "Card.h++"
#include "Card.c++"
bool Game_Done = false;
std::string Answer;
std::string Answer2;
class Game
{
private:
    Card* LevelCards1;
    Card* LevelCards2;
    Card MyCard;
    Card TheirCard;
public:
    void Start(Card TheirCard, Card MyCard)
    {
        App* app = new App();
        while (Game_Done == false)
        {
            std::cout << "Do you want to continue? Y/N";
            std::cin >> Answer2;
            if (Answer2 == "N") {
                break;
            }
            LevelCards1 = app->GetCard();
            LevelCards2 = app->GetCard();
            while (LevelCards1->Tag == LevelCards2->Tag)
            {
                LevelCards2 = app->GetCard();
            }
            
            Battle();
            AttributeSelect();
        }
    }
    void AttributeSelect() {
        std::cout << "Which attribute do you want to clash? You can choose Speed, Strength, or Happiness." << std::endl;
        std::cin >> Answer;
        if (Answer == "Speed") {
            if (MyCard.Speed > TheirCard.Speed) {
                MyCard.CardMerge(TheirCard);
                std::cout << "I win!" << std::endl;
            }
            else {
                TheirCard.CardMerge(MyCard);
                std::cout << "I lost..." << std::endl;
            }
        }
        if (Answer == "Strength") {
            if (MyCard.AttackDmg > TheirCard.AttackDmg) {
                MyCard.CardMerge(TheirCard);
                std::cout << "I win!" << std::endl;
            }
            else {
                TheirCard.CardMerge(MyCard);
                std::cout << "I lost..." << std::endl;
            }
        }
        if (Answer == "Happiness") {
            if (MyCard.Happiness > TheirCard.Happiness) {
                MyCard.CardMerge(TheirCard);
                std::cout << "I win!" << std::endl;
            }
            else {
                TheirCard.CardMerge(MyCard);
                std::cout << "I lost..." << std::endl;
            }
        }
    }
    void Battle() {
            eprint("The battle begins!");
                print("Do you want to fight the first cat or the second?");
                std::cin >> LevelAnswer;
                if (LevelAnswer == "first") {
                    MyCard = LevelCards1;
                    TheirCard = LevelCards2;
                }
                else {
                    MyCard = LevelCards2;
                    TheirCard = LevelCards1;
                }
                return;
            }
};