#include <stdio.h>
#include <string.h>

int main() {
    char * first_name = "William";
    char last_name[] = "Doe";
    char * another_name = "John";
    char * name_2 = "Zain";
    char name[100];
    
    last_name[0] = 'B';
    sprintf(name, "%s %s", first_name, last_name);
    if (strncmp(name, "William Boe", 100) == 0) {
        printf("Done!\n");
    }
    name[0]='\0';
    strncat(name,first_name,40);
    strncat(name," ",4);
    strncat(name,last_name,2);
    printf("%s \n",name);

    for (int i=0; i<100; i++) {
        printf("%d ",another_name[i]);   
    }
    
    printf("\n");
    return 0;
}
