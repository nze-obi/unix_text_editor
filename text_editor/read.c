#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int cpuread(char arg[]){
int fd,size,sumread, sumfread,fritee;

if((fptr= fopen(arg, "a+"))== NULL){
printf("\n failed\n");
exit(1);
}

sumfread=fread(buffer,1, sizeof(buffer), fptr);
fclose(fptr);
fritee=write(1,buffer,sumfread);
bzero((char *)buffer, sumfread);


while(1<5){
bzero((char *)buffer,size);
if((fptr= fopen(arg, "a+"))== NULL){
printf("\n failed\n");
exit(1);
}

fd=read(0,buffer,sizeof(buffer));

if((strncmp("quit.",buffer,5))==0){
	quit();
}
else if((strncmp("dl.",buffer,3))==0){
delete_line(arg);
continue;
}

sumread=fwrite(buffer,1, fd,fptr);
fclose(fptr);
}
return 0;
}

