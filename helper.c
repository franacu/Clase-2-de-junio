//
// Created by Fran on 02/06/2023.
//

#include "helper.h"
#include <stdio.h>

int hash(char *nombre)
{
    int suma=0;

    for(int i=0;nombre[i] != '\0';i++)
    {
        suma=suma+nombre[i];
    }

}
