#include "slark.h"

Slark::Slark()
{
    strcpy(this->name, "Slark");
    this->health = 400;
    this->damage =20;
}

void Slark::pauns(Unit &enemy)
{
    int uron = this->damage;
    //изменяем количество хп у врага
    enemy.health -= uron;
    //выводим сообщение
    cout << this->name << " pauns " << enemy.name
         << " i nanosit " << uron << " urona! " <<endl;
    cout << this->name << " (" << this->health << ") HP" << endl;
    cout << enemy.name << " (" << enemy.health << ") HP" << endl;
}
