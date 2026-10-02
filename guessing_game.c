#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int random , guess;
int no_guesses=0;
srand(time(NULL));

printf("Welcome to the world of guessing numbers!\n");
random = rand()%100+1;// generates a random number between 1 to 100
do{
printf("\nplease enter your guess between (1 to 100):");
scanf("%d",&guess);
no_guesses++;

if (guess>random){
    printf("Please enter a smaller number\n");
}
else if (guess<random){
    printf("please enter a larger number\n");
}
else{
    printf("congratulations!!!\nYou guessed the number correctly after %d guesses\n", no_guesses);
}
}while(guess!=random);

printf("Thank you for playing the game\n");
printf("play again soon!\n");
printf("Developed : Bhumija Agnihotri\n");

return 0;
}