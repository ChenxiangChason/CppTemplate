#include "hello.h"
#include "hello_sub.h"
#include "../world/world.h"

int hello()
{
    std::cout << "hello subdirectory\n";
    std::cout << return_4() << std::endl;
    std::cout << return_8() << std::endl;
    return 1;
}