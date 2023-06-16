#include <iostream>
#include <list>
#include <Card.h++>
#include <stdlib.h>

class App
{
private:
    Card AllCard[11];

public:
    App();
    Card GetCard()
    {
        Card c1(10, 10, 10, "Cat");
        Card c2(40, 60, 70, "Water Cat");
        Card c3(10, 80, 90, "Wind Cat");
        Card c4(35, 20, 60, "Fire Cat");
        Card c5(10, 20, 60, "Earth Cat");
        Card c6(25, 90, 70, "Lightning Cat");
        Card c7(20, 120, 50, "Velocity Cat");
        Card c8(30, 90, 90, "Neon Cat");
        Card c9(10, 80, 99, "Magic Cat");
        Card c10(45, 99, 99, "Light Cat");
        Card c11(50, 70, 70, "Dark Cat");

        AllCard[0] = c1;
        AllCard[1] = c2;
        AllCard[2] = c3;
        AllCard[3] = c4;
        AllCard[4] = c4;
        AllCard[5] = c6;
        AllCard[6] = c7;
        AllCard[7] = c8;
        AllCard[8] = c9;
        AllCard[9] = c10;
        AllCard[10] = c11;
        int Index = RandNum();
        return AllCard[Index];
    }
    int RandNum()
    {
        return rand() % 10 + 1;
    }
};
