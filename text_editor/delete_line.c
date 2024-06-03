#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>






int delete_line(char arg[]){
int ftr, new, rid;
int ft=0;
bzero((char *)buffer,3);

do{
ftr=ftell(fptr)-ft;
ft=ftell(fptr);
}
while(fgets(buffer, sizeof(buffer),fptr));
new= ftell(fptr)-ftr;
bzero((char *)buffer,ftell(fptr));
rewind(fptr);
rid=fread(buffer,1,new,fptr);
fclose(fptr);
if((fptr= fopen(arg, "w"))== NULL){
printf("\n failed\n");
exit(1);
}

int newwrite=fwrite(buffer,1,rid,fptr);
fclose(fptr);
printf("------------------------------------------------------------------\n");
printf("------------------------------------------------------------------\n");
printf("------------------------------------------------------------------\n");
int wr=write(1,buffer,newwrite);





	return 0;
}
