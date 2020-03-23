#include <iostream>

#include "Argparse.h"


int main(int argc, char* argv[])
{
    ArgParse args(argc, argv);

    args.addArgument("name", true);
    args.addArgument("age", true);

    if (!args.parse()) {
        // display help here
        return 1;
    }

    Argument& arg1 = args.getArgument("name");
    Argument& arg2 = args.getArgument("age");
    
    std::cout << arg1.argValue << std::endl;
    std::cout << arg2.argValue << std::endl;

    return 0;
}
