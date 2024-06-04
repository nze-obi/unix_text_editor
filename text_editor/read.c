#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int cpuread(char arg[]){
int n;


if((fptr= fopen(arg, "a+"))== NULL){
printf("\n failed\n");
exit(1);
}
system("clear");
fseek(fptr,0,SEEK_END);
n=ftell(fptr);

fseek(fptr,0,SEEK_SET);
i=1;
while(fgets(buffer,n,fptr)){
	printf("%d. ",i++);
	fputs(buffer,stdout);
}

fclose(fptr);


bzero((char *)buffer, n);


while(1<5){
bzero((char *)buffer,sizeof(buffer));
if((fptr= fopen(arg, "a+"))== NULL){
printf("\n failed\n");
exit(1);
}

printf("%d. ",i++);
fgets(buffer,4000,stdin);


if((strncmp("quit.",buffer,5))==0){
	system("clear");
	quit();
}
else if((strncmp("dl.",buffer,3))==0){
i=1;	
delete_line(arg);
continue;
}

fputs(buffer, fptr);
fclose(fptr);

}
return 0;
}

