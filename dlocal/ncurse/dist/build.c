//
// Created by Kai Gonzalez on 5/1/21.
//

#include "build.h"




void handler(int argc, char* args[]) {

    char* direc=args[1];

    if (strcmp( direc, "help") == 0)
    {
        print("brocali: The minimal compiler library\n\nArguments\n\tcompiler.1 help\n\t"
              "compiler.1 -compile cfile.c (cfile.c = your C / C++ file)\n");
    }
}