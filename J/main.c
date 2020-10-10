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
#include <math.h>
/*
 * 
 */
int main(int argc, char** argv) {

    float m,n;    
int a, b, c, cont=0;
float c2,c3;

scanf("%f",&n);
scanf("%f",&m);

for(n;n<=m;n+=1){
a=n;
b=n;
for(b;b<=m;b+=1){
c=sqrt(pow(b,2)+pow(a,2));
c2=sqrt(pow(b,2)+pow(a,2));
c2=c2/c;
if((c2==1) && (c<=m))
cont +=1;
}
}
printf("%d",cont);
    
    return (EXIT_SUCCESS);
}

