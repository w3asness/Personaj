#include "arc_warden.h"

arc_warden::arc_warden()
{
    strcpy(this->name, "Arc Warden");
    this->health = 450;
    this->damage =50;
}

void arc_warden::Spark(Unit &enemy)
{
    int uron = this->damage;
    //изменяем количество хп у врага
    enemy.health -= uron;
    //выводим сообщение
    cout << this->name << " castuet Spark v " << enemy.name
         << " i nanosit " << uron << " urona! " <<endl;
    cout << this->name << " (" << this->health << ") HP" << endl;
    cout << enemy.name << " (" << enemy.health << ") HP" << endl;
}
