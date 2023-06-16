#include <iostream>
#include <list>
class Card
{
public:
    int AttackDmg;
    int Speed;
    int Happiness;
    std::string Tag;
    void CardMerge(Card Name) {
        AttackDmg = (AttackDmg + Name.AttackDmg) / 2;
        Speed = (Speed + Name.Speed) / 2;
        Happiness = (Happiness + Name.Happiness) / 2;
    }
    Card(int speed, int happiness, int attackDmg, std::string tag) {
        AttackDmg = attackDmg;
        Speed = speed;
        Happiness = happiness;
        Tag = tag;
    }
};