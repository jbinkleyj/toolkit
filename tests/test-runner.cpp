#include "serialization.h"
#include "nfa.h"
#include "lest/lest.hpp"

int main(int argc, char * argv[])
{
    return lest::run( serialization, argc, argv );
}
