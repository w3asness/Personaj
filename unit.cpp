#include "unit.h"

Unit::Unit()
{
    strcpy(this->name, "Unit");
    this->health = 100;
    this->damage =10;
}

Unit::Unit(char n[20], int h, int d)
{
strcpy(this->name, n);
this->health = h;
this->damage =d;
}

void Unit::attack(Unit &enemy)
{
    int uron = this->damage;
    //изменяем количество хп у врага
    enemy.health -= uron;
    //выводим сообщение
    cout << this->name << " atakuet " << enemy.name
         << " i nanosit " << uron << " urona! " <<endl;
    cout << this->name << " (" << this->health << ") HP" << endl;
    cout << enemy.name << " (" << enemy.health << ") HP" << endl;
}
