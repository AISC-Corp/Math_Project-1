#include <iostream>
#include <list>
#include <Card.h++>
#include <stdlib.h>

class App
{
private:
    Card* AllCard[11];
public:
    Card* GetCard()
    {
        AllCard[0] = new Card(10, 10, 10, "Cat");
        AllCard[1] = new Card(40, 60, 70, "Water Cat");
        AllCard[2] = new Card(10, 80, 90, "Wind Cat");
        AllCard[3] = new Card(35, 20, 60, "Fire Cat");
        AllCard[4] = new Card(10, 20, 60, "Earth Cat");
        AllCard[5] = new Card(25, 90, 70, "Lightning Cat");
        AllCard[6] = new Card(20, 120, 50, "Velocity Cat");
        AllCard[7] = new Card(30, 90, 90, "Neon Cat");
        AllCard[8] = new Card(10, 80, 99, "Magic Cat");
        AllCard[9] = new Card(45, 99, 99, "Light Cat");
        AllCard[10] = new Card(50, 70, 70, "Dark Cat");
        int Index = RandNum();
        return AllCard[Index];
    }
    int RandNum() {
        return rand() % 10 + 1;
    }
};
