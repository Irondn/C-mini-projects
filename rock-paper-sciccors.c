#include <stdio.h>
#include <stdlib.h>

char choose(){
    char arr[3] = {'r','p','s'};
    int ran = rand() % 3;
    return arr[ran];
}

char uchoose(){
    char choice;
    printf("Enter your choice:-");
    scanf(" %c",&choice);
    return choice;
}

int main(){
    int n;
    printf("Enter the Number of Rounds you want to play:-");
    scanf("%d",&n);
    int cscore =0,uscore =0;
    while(n!=0){
        char coption = choose();
        char uoption = uchoose();

        printf("Computer chose: %c\n", coption);
        printf("You chose: %c\n", uoption);


        if(uoption == coption) printf("Tie");
        else if((uoption == 'r' && coption == 'p')||
                (uoption == 'p' && coption == 's')||
                (uoption == 's' && coption == 'r')) printf("Computer Won \n Computer Score = %d\n",++cscore);


        else if((uoption == 'p' && coption == 'r')||
                (uoption == 's' && coption == 'p')||
                (uoption == 'r' && coption == 's')) printf("You Won \n Your Score = %d\n",++uscore);
        n--;


    }
    if(cscore==uscore) printf("Tie\ncscore = %d\nuscore = %d\n",cscore,uscore);
    else if(cscore>uscore) printf("C won\ncscore = %d\nuscore = %d\n",cscore,uscore);
    else printf("You won\ncscore = %d\nuscore = %d\n",cscore,uscore);
    return 0;

}

