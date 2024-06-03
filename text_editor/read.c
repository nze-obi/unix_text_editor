#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int cpuread(char arg[]){
int fd, sumread, sumfread,fritee;
if((fptr= fopen(arg, "a+"))== NULL){
printf("\n failed\n");
exit(1);
}

sumfread=fread(buffer,1, sizeof(*fptr), fptr);
fclose(fptr);
fritee=write(1,buffer,sizeof(buffer));
bzero((char *)buffer, sumfread);


while(1){
if((fptr= fopen(arg, "a+"))== NULL){
printf("\n failed\n");
exit(1);
}
fd=read(0,buffer,sizeof(buffer));
if((strncmp("quit.",buffer,5))==0){
        printf("\n exiting program\n");
        exit(1);
}
sumread=fwrite(buffer,1, fd,fptr);
fclose(fptr);
}
return 0;
}

