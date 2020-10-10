/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 24 de septiembre de 2020, 06:42 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Apilando Dígitos
 */
int main(int argc, char** argv) {

    int n,i=1,i2;
    scanf("%d",&n);
    while(i<=n){
        i2=i;
        while(i2>0){
            printf("%d",i);
            i2--;
        }
        i++;
        printf("\n");
    }
    i--;
    i--;
    while(i>0){
        i2=i;
        while(i2>0){
            printf("%d",i);
            i2--;
        }
        i--;
        printf("\n");
    }
    
    return (EXIT_SUCCESS);
}

