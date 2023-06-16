#include <iostream>
#include "Card.c++"

class Game
{

private:
    std::string Answer;
    std::string Answer2;
    std::string LevelAnswer;
    Card LevelCards1;
    Card LevelCards2;
    Card MyCard;
    Card TheirCard;

public:
    void Start()
    {
        App app;
        while (true)
        {
            std::cout << "Do you want to play? Y/N ";
            std::cin >> Answer2;
            if (Answer2 == "N" || Answer2 == "n")
            {
                break;
            }
            LevelCards1 = app.GetCard();
            LevelCards2 = app.GetCard();
            while (LevelCards1.Tag == LevelCards2.Tag)
            {
                LevelCards2 = app.GetCard();
            }

            Battle();
            AttributeSelect();
        }
    }
    void AttributeSelect()
    {
        std::cout << "Which attribute do you want to clash? You can choose Speed, Strength, or Happiness." << std::endl;
        std::cin >> Answer;
        if (Answer == "Speed" || Answer == "speed")
        {
            if (MyCard.Speed > TheirCard.Speed)
            {
                MyCard.CardMerge(TheirCard);
                std::cout << "I win!" << std::endl;
            }
            else
            {
                TheirCard.CardMerge(MyCard);
                std::cout << "I lost..." << std::endl;
            }
        }
        if (Answer == "Strength" || Answer == "strength")
        {
            if (MyCard.AttackDmg > TheirCard.AttackDmg)
            {
                MyCard.CardMerge(TheirCard);
                std::cout << "I win!" << std::endl;
            }
            else
            {
                TheirCard.CardMerge(MyCard);
                std::cout << "I lost..." << std::endl;
            }
        }
        if (Answer == "Happiness" || Answer == "happiness")
        {
            if (MyCard.Happiness > TheirCard.Happiness)
            {
                MyCard.CardMerge(TheirCard);
                std::cout << "I win!" << std::endl;
            }
            else
            {
                TheirCard.CardMerge(MyCard);
                std::cout << "I lost..." << std::endl;
            }
        }
    }
    void Battle()
    {
        std::cout << "The battle begins!" << std::endl;
        std::cout << "Do you want to fight the first cat or the second?" << std::endl;
        std::cin >> LevelAnswer;

        if (LevelAnswer == "first" || LevelAnswer == "First")
        {
            MyCard = LevelCards1;
            TheirCard = LevelCards2;
        }
        else
        {
            MyCard = LevelCards2;
            TheirCard = LevelCards1;
        }
        return;
    }
};