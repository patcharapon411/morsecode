#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main() {
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ/"; 
char *m[] = {
            ".-",        //a
            "-...",      //b
            "-.-.",      //c
            "-..",       //d
            ".",         //e
            "..-.",      //f
            "--.",       //g
            "....",      //h
            "..",        //i
            ".---",      //j
            "-.-",       //k
            ".-..",      //l
            "--",        //m
            "-.",        //n 
            "---",       //o
            ".--.",      //p
            "--.-",      //q
            ".-.",       //r
            "...",       //s
            "-",         //t
            "..-",       //u   
            "...-",      //v
            ".--",       //w
            "-..-",      //x
            "-.--",      //y
            "--..",      //z,
            "/"
           
    };
char massage[100000];    
int j=0;
int k=0;
scanf("%s",massage);
int c = strlen(massage);
for(int i=0;i<strlen(massage);i++)
{

 while(toupper(massage[j])!=a[k])
 {
   k++;
 }
 printf("%s ",m[k]);
 j++;
 k=0;
}
return 0;
}