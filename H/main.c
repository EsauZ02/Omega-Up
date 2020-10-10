/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 8 de octubre de 2020, 10:22 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    
    int n, x, k=0, num;
scanf("%d", &n);
scanf("%d", &x);
while(n > 0){
scanf("%d",&num);
if(num == x)
k+=1;
n-=1;
}
printf("\n");
printf("%d",k);
    
    return (EXIT_SUCCESS);
}

