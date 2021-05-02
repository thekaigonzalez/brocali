//
// Created by Kai Gonzalez on 5/1/21.
//

#ifndef BROCALI_BUILD_H
#define BROCALI_BUILD_H
#include <stdio.h>
#include <string.h>

void printOK()
{
    printf("ok");
}


void print(char*C)
{
    for (int i = 0; i < strlen(C); ++i) {
        putchar(C[i]);
    }
}





#endif //BROCALI_BUILD_H
