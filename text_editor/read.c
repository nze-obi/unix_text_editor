#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
int cpuread(char arg[]){

if((fptr= fopen(arg, "a+"))== NULL){
printf("\n failed\n");
exit(1);
}
system("clear");
i=1;
while(fgets(buffer,10000,fptr)){
	printf("%d. ",i++);  
	fputs(buffer,stdout);  
}

fclose(fptr);


bzero((char *)buffer, 10000);


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
else if((strncmp("da.",buffer,3))==0){
delete_all(arg);
continue;
}

fputs(buffer, fptr);
fclose(fptr);

}
return 0;
}

