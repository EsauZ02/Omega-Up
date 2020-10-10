/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 23 de septiembre de 2020, 09:27 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Acomoda el número
 */
int main(int argc, char** argv) {

int n,x1,x2,a=0;
    
    scanf("%d",&n);
    scanf("%d",&x1);
    while(n>1){
        scanf("%d",&x2);
        if(x1>x2){
            a++;
        }
        n--;
    }
    printf("\n");
    printf("%d",a);
    
    return (EXIT_SUCCESS);
}

