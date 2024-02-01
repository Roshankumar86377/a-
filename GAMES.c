/* WAP to play a game */

# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int main(){
    int number,n=1,guess;
    srand(time (0));
    number=rand()%100+1;// generate a random number between 1 and 100//
    printf("%d\n", number);
    while(guess!=number){
    printf("Guess the number n:\n");
    scanf("%d", &guess);
    if(guess>number){
        printf("Lower number please!\n");
    }
    else if(guess<number){
        printf("Higher number please!\n");
    }
    else{
        printf("You guess it in %d attempts\n", n);
    }
    n++;
    }
    return 0;
}