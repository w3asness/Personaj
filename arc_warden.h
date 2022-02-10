#ifndef ARC_WARDEN_H
#define ARC_WARDEN_H

#include <unit.h>

class arc_warden : public Unit
{
public:
    arc_warden();
    void Spark(Unit&);
};

#endif // ARC_WARDEN_H
