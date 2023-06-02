#include <stdio.h>
#include "helper.h"

int main()
{
    char * nombres[] = {
            "ignacio",
            "agustin",
            "sofia",
            "melina",
            "juana",
            "joana",
            "abril",
            "juan",
            "santiago",
            "francisco",
            "franco",
            "pablo",
            "romulo",
    };

    int cantidadDeNombres;
    cantidadDeNombres = sizeof(nombres) / sizeof(char *);


    for(int i=0;i<cantidadDeNombres;i++)
    {
        printf("%s \n %d",nombres[i],hash(nombres[i]));
    }
    return 0;
}
