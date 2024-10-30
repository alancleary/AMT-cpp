#include <iostream>

#include "amt/set.hpp"

using namespace std;
using namespace amt;

void usage(int argc, char* argv[]) {
    cerr << "usage: " << argv[0] << "" << std::endl;
}

int main(int argc, char* argv[])
{
    usage(argc, argv);
    return 1;
}
