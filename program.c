#include <stdio.h>

int main() {

   int vitesse=110;
   int altitude=2000;
    printf("     _____________________________________________       \n");
    printf(" %d| %d  |                              |  %d | %d    \n", vitesse+20,vitesse,altitude,altitude+200);
    printf("    |__kts_|               |              |__ft___|      \n");
    printf(" %d|                   ___|___                   | %d    \n", vitesse+10, altitude+100);
    printf("    |                  |       |                  |      \n");                                         
    printf(" %d|<         --------|   ¤   |--------         >| %d    \n", vitesse+0, altitude+0);
    printf("    |                  |___ ___|                  |      \n");
    printf(" %d|                      |                      | %d    \n", vitesse-10, altitude-100);
    printf("    |_____________________________________________|      \n");  
    printf(" %d |                     180                     | %d    \n", vitesse-20, altitude-200);
    printf("    |                    ° ° °                    |      \n");
    printf(" %d |                  °        °                 | %d    \n",vitesse-30, altitude-300);
    printf("    |           270- °   __|__   ° -360           |      \n");
    printf(" %d |                °     |     °                | %d    \n", vitesse-40, altitude-400);
    printf("    |                 °         °                 |      \n");
    printf("    |                    ° ° °                    |      \n");                    
    printf("    |                      90                     |      \n"); 
    printf("    |_____________________________________________|      \n");
   
                                     
    return 0;
}