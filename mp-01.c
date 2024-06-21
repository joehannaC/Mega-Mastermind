//MP introductory

#include<stdio.h>
#include <stdlib.h>


void mmIntro(){ //option 1 -- introduction of the game
	
	char input,input1,input2,input3;
	
	
	system("Color F6");
	printf("Hello! Welcome to Mega Mastermind!"); //introductory message
	
	printf("\nEnter your name: "); //asks for the name of the player -- max 4 characters only
	scanf(" %c%c%c%c", &input,&input1,&input2,&input3);
	
	
}


void mmInstruc(){ //option 2 -- mechanics of the game
	
	
	system("Color F4");
	printf("Kindly read the mechanics before playing!");
	
	printf("\n\n                                      -- MECHANICS OF THE GAME --"); //displays the mechanics of the game (from the pdf)
	
	
	printf("\n\n1. The two players agree in advance to an even number of games that they will play Number. of games can be from 2 to 10 games maximum. ");
		printf("	      \n\n             a. The role of codemaker and codebreaker is switched between the players. ");
		printf("	      \n             b. For this project, the two players consist of a human player and a pseudo-AI player. ");
	
			printf("		      \n\n                  i. The pseudo-AI player will have the following abilities:");
			printf("		           \n                      1. Guess the pegs via randomization");
			printf("		           \n                      2. If the pegs guess by the pseudo-AI player is correct, it will have the ability to store the correct pegs and guess only the incorrect ones. ");

	printf("\n\n2. A pattern of four code pegs is selected by the codemaker.");
		printf("	      \n\n              a. In the traditional game, duplicate code pegs are allowed.  ");
		printf("	      \n              b. However, for this project, duplication of code pegs will not be allowed. ");
	
	printf("\n\n3. The chosen pattern is inserted into the four shield-covered holes by the codemaker, who can see it but not the codebreaker. ");
	
	printf("\n\n4. Within ten turns (or based on the number of games agreed upon), the codebreaker tries to predict the pattern�in both sequence and color. The number of turns can vary if the student opts to do the bonus points. ");
	
	printf("\n\n5. A row of code pegs is placed on the decoding board for each guess. ");
	
	printf("\n\n6. The codemaker then inserts one to four key pegs into the tiny holes of the row that contains the guess to offer feedback. ");
		printf("	      \n\n            a. For each code peg from the guess that is accurate in both color and position, a black key peg is inserted. ");
		printf("	      \n            b. A valid color code peg that has been misplaced is shown by a white key peg. ");
	
	printf("\n\n7. Once feedback is provided, another guess is made; guesses and feedback continue to alternate until either the codebreaker guesses correctly, or all rows on the decoding board are full. ");
	
	printf("\n\n8. Players can only earn points when playing as the codemaker. ");
		printf("	      \n\n            a. The codemaker gets one point for each guess the codebreaker makes.  ");
		printf("	      \n            b. An extra point is earned by the codemaker if the codebreaker is unable to guess the exact pattern within the given number of turns.");
	
	printf("\n\n9. The winner is the one who has the most points after the agreed-upon number of games are played. ");
	
	printf("\n\n----------------------------------------END OF MECHANICS-----------------------------------------");
	
}
int mmStart(){
	int  input, A, R, game;
	char choice;
	
	printf("\n\nReady? ");
	scanf(" %c", &choice);
	
	if(choice == 'Y' || choice == 'y'){
	printf("\n\nHow many rounds do you want to play? ");  //asks for the rounds that the player wants to play
	scanf("%d", &input);
	
	
	
	A = input % 2; //checks if the input is even 
	
	if(input >= 2 && input <= 10 && A == 0){
	printf("\n\nLet the game begin! "); //starts the game
	printf("\nGoodluck!");
	}
		else{
		printf("\n\nInvalid input!");  
		printf("\nEnter again: "); //asks the player to input another
		scanf("%d", &game);
		R = game % 2; //checks if the second input is even
	
			if(game >= 2 && game <= 10 && R == 0){	
			printf("\n\nGoodluck!");
			printf("\nLet the game begin! "); //starts the game
			}
	
				else{
				printf("\n\nInvalid input!");
				system("Color 04");
				printf("\n----PLEASE RESTART THE GAME!---"); //error -- restart the game 
				}
}
}	else if (choice == 'N' || choice == 'n'){
	
	system("Color 04");
	printf("\n----PLEASE RESTART THE GAME!---");
	
}
	return input;
}
/*int mmGame(){

	for

}*/

void mmEx(){ //option 4 -- exits the game
	system("Color 04");
	printf("--------GAME OVER!--------");
	printf("\n----THANKS FOR PLAYING!---");	//exits the game
}

int main(){
	int choice;
	printf("				   -- MEGA MASTERMIND GAME --              		");
	//choices at the very beginning
	system("Color E5");
	
	printf("\n\n[1] Mega mastermind introduction   ");   
	printf("\n\n[2] Mega mastermind game mechanics  ");
	printf("\n\n[3] Start the game                  ");
	printf("\n\n[4] Exit game                       \n\n");
	
	scanf("%d", &choice); 
	
	
	switch(choice){
		case 1: mmIntro(); 
		case 2: mmInstruc(); 
		case 3: mmStart(); break;
		case 4: mmEx(); break;
		default: printf("Invalid input!");
}
	
	return 0;
}
