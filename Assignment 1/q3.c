#include<stdio.h>

int main (){

/* Wrong but creative 
printf("'");
printf("'");
printf("MySirG");
printf("'"); 
printf("");
 */

 /*First Method*/

 char c='"';
 printf("%c",c);
 printf("MySirG");
 printf("%c",c);

 printf("\n");
 
 /*Second Method*/

printf("\"MySirG\"");
    
return 0;

}   

