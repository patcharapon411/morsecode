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
int i=0;  
int j=0;
int k=0;
int *index[100000];
scanf("%s",massage);
int z = strlen(massage);
for(j=0;j<z;j++){
while(toupper(massage[j])!=a[k])
{
 k++;
}
index[j]=k;
k=0;
}
//------------------
j=0;
for(j=0;j<z;j++)
{
  i=index[j];
  printf("%s",m[i]);
}

return 0;
}