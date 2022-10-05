#include <iostream>
using namespace std;

class PlayerOne
{
private:
    int health;
    // points to the bottom left most co-ord of the hurtbox (y always = 0 so using int)
    int positionX;

public:
    PlayerOne()
    {
        health = 100;
        positionX = 200;
        cout << "Creating player one" << endl;
        cout << "Player one health = " << health << endl;
        cout << "Player one position = " << positionX << endl;
    };

    void move(int units)
    {
        positionX += units;
        cout << "Moved " << units << " units along the X axis. New position = " << positionX << endl;
    };
};

int main()
{
    PlayerOne p1;
    p1.move(2);
    p1.move(100);
    p1.move(-40);
    p1.move(10000);
    return 0;
}