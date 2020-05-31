#include<stdio.h>
// Write a program to count blanks, tabs, and newlines. 
int main(){
    int c, nl, tab, blank;
    nl = tab = blank = 0;
    while((c = getchar()) != EOF)
        if(c == '\n')
            ++nl;
        else if (c == ' ')
        {
            /* code */
            ++blank;
        }
        else if(c == '\t')
            ++ tab;
    printf("blanks: %d, newlines: %d,tab: %d", blank, nl, tab);
        
    
}
