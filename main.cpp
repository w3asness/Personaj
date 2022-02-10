#include <unit.h>
#include <pudge.h>
#include <arc_warden.h>
#include "slark.h"

int main(int argc, char *argv[])
{
    Unit u1;
    pudge u2;
    arc_warden u3;
    Slark u4;

    u1.attack(u2);
    u2.MeatHook(u3);
    u3.Spark(u4);
    u4.pauns(u1);


    return 0;
}
