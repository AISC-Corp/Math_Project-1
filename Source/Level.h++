#include <iostream>
#include <list>
#include "Card.h++"
#include "Player.h++"
#include "Terms.h++"
#include "Random.h++"
#include "Game.h++"
int CatMonsAmount;
int CatMonRepeat;
std::string CatMonPriority;
std::string CatMon1;
std::string CatMon2;
std::string CatMon3;
std::string LevelAnswer;
bool BattleDone = true;
class Level {
    void Start() {
        print("The CatMons you're going up against are: ");
        print(LevelCards1.Tag);
        std::cout << ", " ;
        print(LevelCards2.Tag);
        std::cout << std::endl;
        std::cout << "You have these CatMons: "; 
        printlist(MyPlayer.CardInventory1);
        printlist(MyPlayer.CardInventory2);
        std::cout << "." << std::endl;
        std::cout << "How many CatMons do you want to use?";
        std::cin >> CatMonsAmount;
        for (CatMonRepeat = 1; CatMonRepeat != CatMonsAmount; CatMonRepeat++) {
            std::cin >> CatMonsAmount;
            if (CatMonRepeat == 1) {
                CatMonPriority = "first";
                std::cout << "What is the " << CatMonPriority << " CatMon you want to use?" << std::endl;
                std::cin >> CatMon1;
            }
            else if (CatMonRepeat == 2) {
                CatMonPriority = "second";
                std::cout << "What is the " << CatMonPriority << " CatMon you want to use?" << std::endl;
                std::cin >> CatMon2;
            }
            else if (CatMonRepeat = 3) {
                CatMonPriority = "third";
                std::cout << "What is the " << CatMonPriority << " CatMon you want to use?" << std::endl;
                std::cin >> CatMon3;
            }
            else {
                eprint("1 for one catmon, 2 for two catmons, 3 for three catmons");
            }
        };
        void Battle() {
            eprint("The battle begins!");
            while (BattleDone != true) {
                print("Do you want to fight the first cat or the second?");
                std::cin >> LevelAnswer;
                Card Any;
                if (LevelAnswer == "first") {
                    Any = LevelCards1;
                }
                else {
                    Any = LevelCards2;
                }
            Game MyGame = new Game();
            MyGame.Start(Any);
            }
        }
    }
};