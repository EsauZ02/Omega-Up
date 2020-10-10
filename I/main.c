/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int num, x, acom=0, acom2=0, y1=0, y2=0;
scanf("%d", &num);
while(num > 0){
scanf("%d", &x);
if(x%2 == 0){
acom = acom + x;
y1 +=1;
}else{
acom2 = acom2 + x;
y2 +=1;
}
num -=1;
}
acom = acom / y1;
acom2 = acom2 / y2;
if(acom > acom2)
printf("APARICIO");
if(acom2 > acom)
printf("NONILA");
if(acom == acom2)
printf("EMPATE!");
    
    return (EXIT_SUCCESS);
}

