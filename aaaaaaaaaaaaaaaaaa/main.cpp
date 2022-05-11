#include "Classes.h"


int main()
{
    Parrot a("Volodya", 10);
    a.sound();
    a.howage();

    Cat b("Genya", 8);
    b.sound();
    b.howage();

    Dog c("Morti", 2);
    c.sound();
    c.howage();
    return 0;
}