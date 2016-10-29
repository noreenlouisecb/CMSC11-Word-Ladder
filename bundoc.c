// APRIL 1, 2014

#include<stdio.h>
#include<string.h>

typedef struct {
	char dictionary[100];
} checkword;

typedef struct{
	char name[100];
	int score[1000];
}scoresheet;

//Function Headings
void welcome();
void puzzles();
void instructions();
void easy();
void normal();
void hard();
void complete();
void printSG();
void caseexit();
void save();
void login();
void listhighscores();
int easyone();
int easytwo();
int easythree();
int easyfour();
int easyfive();
int aveone();
int avetwo();
int avethree();
int avefour();
int avefive();
int diffone();
int difftwo();
int diffthree();
int difffour();
int difffive();
int lvl1();
int lvl2();
int lvl3();
int lvl4();
int lvl5();
int forReset();
int strcompare();
void dictionarychecker();

//GLOBAL VARIABLES
int count=0, score=0, player=0;
int a[5], b[5], c[5];
scoresheet x[1000];
checkword dichecker[60000];

main(){
	FILE *user;
	int i;

	user=fopen("highscore.txt", "a");

    dictionarychecker();
	welcome(); //Calls welcome().

	fclose(user);
}

void dictionarychecker(){
	FILE *checker;

	checker = fopen("Adictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Bdictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Cdictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Ddictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Edictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}
	fclose(checker);

	checker = fopen("Fdictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Gdictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Hdictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Idictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Jdictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Kdictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Ldictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Mdictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Ndictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Odictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Pdictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Qdictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Rdictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Sdictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Tdictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Udictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Vdictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("Wdictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}

	checker = fopen("XYZdictionary.txt","r");

	//Reads the text in the file, and store it in the array of structures dichecker[i].dictionary.
	while( !feof(checker) ){
		fscanf(checker, "%s", dichecker[count].dictionary);
		count++;	//counts the number of words scanned on the file
	}
}

void login(){
	//Declaration of variables.
	FILE *user;
	char username[10];
	int i, j;

	user = fopen("highscore.txt", "r");

	i=0;
	player=0;
	//Scans the text in the text file and stores it in structure scoresheet.
	while(!feof(user)){
		fscanf(user, "%s", x[i].name);
		fscanf(user, "%d", &x[i].score);
		i++;
		player++;
	}

	//Asks the players name and stores it in variable username.
	printf("Enter player's name: ");
	scanf("%s", username);

	//It Will execute if record(player) scanned is more than one.
	if(player>1){

		user = fopen("highscore.txt", "w");

		//Compares the typed username to every scanned name stored in x[i].name
		for(i=0; i<player; i++){
			//If same username was found, the loop will stop its execution.
			if(strcmp(x[i].name, username)==0){
					break;
			}
		}

		user = fopen("highscore.txt", "a");

		//If i is greater than or equal to player, it means that it did not find any username on the file
		if(i>=player ){
				//It will print the existing records and append the new player record
				for(j=0; j<player-1; j++){
					fprintf(user, "%s\n", x[j].name );
					fprintf(user, "%d\n", *x[j].score);
				}
				fprintf(user, "%s\n", username);
				fprintf(user, "%d\n", score);
		}
		//Else if i is less than player, it means it found same record on the file.
		else{
			//Prints the record on the file
			for(j=0; j<player-1; j++){
				//Finds the same username you entered.
				if(strcmp(x[j].name, username)==0){
					fprintf(user, "%s\n", x[j].name );
					//If your new score is lower than the recorded one, it will not change else if it higher, it will overwrite the old score.
					if( score < *x[j].score){
						fprintf(user, "%d\n", *x[j].score);
					} else {
						fprintf(user, "%d\n", score);
					}
			}
		}

		}//it will execute if number of player is one or zero.
	} else {

		user = fopen("highscore.txt", "w");
		fprintf(user, "%s\n", username);
		fprintf(user, "%d\n", score);
	}

	fclose(user);

	}

void save(){
	//Declaration of variable
	int i;

	//Ask the user if he/she want to save her score.
	printf("\nSAVE SCORE? [0] YES [1] NO\n\n");
		scanf("%d", &i);
		switch(i){
			case 0: login(); break; //If user chooses 0, it will execute login(), and  then stops the switch.
			case 1: break; //If user chooses 1, it will stop the switch.
			default: save(); break; //If user entered number that is not 0 or 1, it will execute the save() again.
		}
}

void listhighscores(){
	//Declaration of variables
	int i, j, temp, choice;
	char tempname[100];
	FILE *user;


	user=fopen("highscore.txt", "r");

	i=0;
	player=0;
	while(!feof(user)){
		fscanf(user, "%s", x[i].name);
		fscanf(user, "%d", &x[i].score);
		i++;
		player++;
	}

	//BUBBLE SORT
	if(player>1){
		for(i=0; i<player-1; i++){
			for(j=0; j<player-i-1; j++){
				if(*x[j].score < *x[j+1].score){
					temp = *x[j].score;
					strcpy(tempname, x[j].name);
					*x[j].score = *x[j+1].score;
					strcpy(x[j].name, x[j+1].name);
					*x[j+1].score = temp;
					strcpy(x[j+1].name, tempname);
				}
			}
		}
	}
	//Prints the top five high scores
		printf("\n\n\tRank\t\tName\t\tScore\n\n");
		for(i=0; i<5; i++){
			printf("\t %d \t\t %s\t\t %d \n",i+1, x[i].name, *x[i].score);
		}


	//Displays the only option the user can do.
	printf("\n\t _ _ _ _ _ _ _ _    _ _ _ _ _ _ _ _\n");
	printf("\t|               |  |               |\n");
	printf("\t|[0]Back to Menu|  |[1] START GAME |\n");
	printf("\t|_ _ _ _ _ _ _ _|  |_ _ _ _ _ _ _ _|\n\n");
	//Scans the choice of the user and stored it on int choice.
	scanf("%d", &choice);

	switch(choice){
		case 0: welcome(); break; //if the user chooses 0, the program will execute welcome().
		case 1: puzzles(); break; //if the user chooses 1, the program will execute puzzles().
		default: listhighscores();break; //if the user's input is not 0 or 1, the program will print the instructions again.
	}

	fclose(user);
}

void welcome(){
	//declaration of variable choice as integer
	int choice;

		//It prints the name of the game.
		printf("\n\n");
		printf("\t\t    _       _   _ _ _ _   _ _ _      _\n");
		printf("\t\t   | |     | | |  _ _  | |  _ _|    | |\n");
		printf("\t\t   | |  _  | | | |   | | | |     _ _| |\n");
		printf("\t\t   | | | | | | | |   | | | |    |  _  |\n");
		printf("\t\t   | |_| |_| | | |_ _| | | |    | |_| |\n");
		printf("\t\t   |_ _ _ _ _| |_ _ _ _| |_|    |_ _ _|\n");
		printf("\t\t _      _ _ _      _      _  _ _ _  _ _ _\n");
		printf("\t\t| |    |  _  |    | |    | ||  _ _||  _ _|\n");
		printf("\t\t| |    | |_| | _ _| | _ _| || |_   | |\n");
		printf("\t\t| |    |  _  ||  _  ||  _  ||  _|  | |\n");
		printf("\t\t| |_ _ | | | || |_| || |_| || |_ _ | |\n");
		printf("\t\t|_ _ _||_| |_||_ _ _||_ _ _||_ _ _||_|\n");
		printf("\n\n");

		//It displays the options on what the user can do.
		printf("    _ _ _ _ _ _  _ _ _ _ _ _ _ _ _ _  _ _ _ _ _ _ _ _   _ _ _ _ _ _ \n");
		printf("   |           ||                   ||                ||           |\n");
		printf("   | [1] PLAY  || [2] INSTRUCTIONS  || [3] HIGHSCORES || [4] EXIT  |\n" );
		printf("   |_ _ _ _ _ _||_ _ _ _ _ _ _ _ _ _||_ _ _ _ _ _ _ _ ||_ _ _ _ _ _|\n");
		printf("\n\n");
		//Scans the choice of the user and stored it on int choice.
		scanf("%i", &choice);


  		switch(choice){
  				//If the user chooses 1,  the program will execute puzzles().
    			case 1:	puzzles(); break;
				//If the user chooses 2, the program will execute instructions().
				case 2:	instructions(); break;
				//If the user chooses 3, the program will execute listhighscores().
				case 3: listhighscores();break;
				//If the user chooses 4, it will stop the execution.
				case 4: save(); break;
				//If the user entered number not on [1,3], the program will just reprint the name of the game and let the user choose an option again.
				default: welcome(); break;
		}
}


void puzzles(){
	//Declaration of variable choice as integer
	int choice;

	//It displays the option on the level difficulty of the game.
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("\t  _ _ _ _ _ _ \t _ _ _ _ _ _ _ _    _ _ _ _ _ _\n");
	printf("\t |           |\t|               |  |           |\n");
	printf("\t |[1] E A S Y|\t|[2] N O R M A L|  |[3] H A R D|\n");
	printf("\t |_ _ _ _ _ _|\t|_ _ _ _ _ _ _ _|  |_ _ _ _ _ _|\n");
	printf("\t\t\t[0] Back to Menu\n\n");
	//Scans the choice of the user and stored it on int choice.
	scanf("%d", &choice);

	switch(choice){
			case 1: easy(); break;//if the user chooses 1, the program will execute easy().
			case 2: normal(); break;  //if the user chooses 2, the program will execute normal().
			case 3: hard();  break; //if the user chooses 3, the program will execute hard().
			case 0: welcome(); break; //if the user chooses 0, the program will execute welcome().
	 		default: puzzles(); break; //if the user enter numbered not on [0,3], the program will reexecute the puzzles();
	 }

}

void instructions(){
	//Declaration of variable choice as integer
	int choice;

	//It prints the instruction of the game.
	printf("\nStart a Game: \n\n Select any puzzles that comes in three difficulty levels to begin playing. You  can start with any difficulty you want. However, your progress will be deleted  once you finished the five levels of each difficulty stages and decided not to  continue. \n\n");
	printf("\n\nHow To Play: \n\n START word and GOAL word will be given in the start of each puzzle.\n The goal of the game is to change the START word to the GOAL word\n by changing only one letter at a time wherein it should form a valid new word   at each step.\n\n");

	//Displays the only option the user can do.
	printf("\n _ _ _ _ _ _ _ _    _ _ _ _ _ _ _ _\n");
	printf("|               |  |               |\n");
	printf("|[0]Back to Menu|  |[1] START GAME |\n");
	printf("|_ _ _ _ _ _ _ _|  |_ _ _ _ _ _ _ _|\n\n");
	//Scans the choice of the user and stored it on int choice.
	scanf("%d", &choice);

	switch(choice){
		case 0: welcome(); break; //if the user chooses 0, the program will execute welcome().
		case 1: puzzles(); break; //if the user chooses 1, the program will execute puzzles().
		default: instructions(); break; //if the user's input is not 0 or 1, the program will print the instructions again.
	}
}

int lvl1(){
	//declaration of variable starter as integer
	int starter;

	//Prints level 1 and the only option the user can do.
	printf(" _ _        _ _ _ _ _  _ _      _ _  _ _ _ _ _  _ _         _ _ _ _ _ _\n");
	printf("|   |      |         ||   |    |   ||         ||   |       |           |\n");
	printf("|   |      |    _ _ _||   |    |   ||    _ _ _||   |       |_ _     _ _|\n");
	printf("|   |      |   |_ _   |   |    |   ||   |_ _   |   |           |   |\n");
	printf("|   |      |       |  |   |    |   ||       |  |   |           |   |\n");
	printf("|   |      |    _ _|  |   |    |   ||    _ _|  |   |           |   |\n");
	printf("|   |_ _ _ |   |_ _ _ |   |_ _ |   ||   |_ _ _ |   |_ _ _   _ _|   |_ _ \n");
	printf("|         ||         ||            ||         ||         | |           | \n");
	printf("|_ _ _ _ _||_ _ _ _ _||_ _ _ _ _ _ ||_ _ _ _ _||_ _ _ _ _| |_ _ _ _ _ _|\n");
	printf(" _ _ _ _ _ _ _ _ _ _ _ _ _  _ _ _ \n");
	printf("|                                 |\n");
	printf("| [0] S T A R T / C O N T I N U E |\n");
	printf("|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n");
	//Scans the choice of the user and stored it on int starter.
	scanf("%d", &starter);

	//returns the value of starter to the function who called it.
	return starter;
}

int lvl2(){
	//declaration of variable starter as integer
	int starter;

	//Prints level 2 and the only option the user can do
	printf(" _ _        _ _ _ _  __     __  _ _ _ _  _ _         _ _ _ _ _ _   _ _ _ _ _ _\n");
	printf("|   |      |       ||  |   |  ||       ||   |       |           | |           |\n");
	printf("|   |      |    _ _||  |   |  ||    _ _||   |       |_ _     _ _| |_ _     _ _|\n");
	printf("|   |      |   |_   |  |   |  ||   |_   |   |           |   |         |   |\n");
	printf("|   |      |     |  |  |   |  ||     |  |   |           |   |         |   |\n");
	printf("|   |      |    _|  |  |   |  ||    _|  |   |           |   |         |   |\n");
	printf("|   |_ _ _ |   |_ _ |  |_ _|  ||   |_ _ |   |_ _ _   _ _|   |_ _   _ _|   |_ _\n");
	printf("|         ||       ||         ||       ||         | |           | |           |\n");
	printf("|_ _ _ _ _||_ _ _ _||_ _ _ _ _||_ _ _ _||_ _ _ _ _| |_ _ _ _ _ _| |_ _ _ _ _ _|\n");
	printf(" _ _ _ _ _ _ _ _ _ _ _ _ _  _ _ _ \n");
	printf("|                                 |\n");
	printf("| [0] S T A R T / C O N T I N U E |\n");
	printf("|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n");
	//Scans the choice of the user and stored it on int starter.
	scanf("%d", &starter);

	//returns the value of starter to the function who called it.
	return starter;

}

int lvl3(){
	//declaration of variable starter as integer
	int starter;

	//Prints level 3 and the only option the user can do
	printf(" _ _        _ _ _ _  __     __  _ _ _ _  _ _         _ _ _   _ _ _  _ _ _\n");
	printf("|   |      |       ||  |   |  ||       ||   |       |     | |     ||     |\n");
	printf("|   |      |    _ _||  |   |  ||    _ _||   |       |_   _| |_   _||_   _|\n");
	printf("|   |      |   |_   |  |   |  ||   |_   |   |         | |     | |    | |\n");
	printf("|   |      |     |  |  |   |  ||     |  |   |         | |     | |    | |\n");
	printf("|   |      |    _|  |  |   |  ||    _|  |   |         | |     | |    | |\n");
	printf("|   |_ _ _ |   |_ _ |  |_ _|  ||   |_ _ |   |_ _ _   _| |_   _| |_  _| |_\n");
	printf("|         ||       ||         ||       ||         | |     | |     ||     |\n");
	printf("|_ _ _ _ _||_ _ _ _||_ _ _ _ _||_ _ _ _||_ _ _ _ _| |_ _ _| |_ _ _||_ _ _|\n");
	printf(" _ _ _ _ _ _ _ _ _ _ _ _ _  _ _ _ \n");
	printf("|                                 |\n");
	printf("| [0] S T A R T / C O N T I N U E |\n");
	printf("|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n");
	//Scans the choice of the user and stored it on int starter.
	scanf("%d", &starter);

	//returns the value of starter to the function who called it.
	return starter;

}

int lvl4(){
	//declaration of variable starter as integer
	int starter;

	//Prints level 4 and the only option the user can do
	printf(" _ _        _ _ _ _  __     __  _ _ _ _  _ _         _ _ _ _ _ _   __     __\n");
	printf("|   |      |       ||  |   |  ||       ||   |       |           | |  |   |  |\n");
	printf("|   |      |    _ _||  |   |  ||    _ _||   |       |_ _     _ _| |  |   |  |\n");
	printf("|   |      |   |_   |  |   |  ||   |_   |   |           |   |     |  |   |  |\n");
	printf("|   |      |     |  |  |   |  ||     |  |   |           |   |     |  |   |  |\n");
	printf("|   |      |    _|  |  |   |  ||    _|  |   |           |   |     |  |   |  |\n");
	printf("|   |_ _ _ |   |_ _ |  |_ _|  ||   |_ _ |   |_ _ _   _ _|   |_ _  |  |_ _|  |\n");
	printf("|         ||       ||         ||       ||         | |           | |         |\n");
	printf("|_ _ _ _ _||_ _ _ _||_ _ _ _ _||_ _ _ _||_ _ _ _ _| |_ _ _ _ _ _| |_ _ _ _ _|\n");
	printf(" _ _ _ _ _ _ _ _ _ _ _ _ _  _ _ _ \n");
	printf("|                                 |\n");
	printf("| [0] S T A R T / C O N T I N U E |\n");
	printf("|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n");
	//Scans the choice of the user and stored it on int starter.
	scanf("%d", &starter);

	//returns the value of starter to the function who called it.
	return starter;

}

int lvl5(){
	//declaration of variable starter as integer
	int starter;

	//Prints level 5 and the only option the user can do
	printf(" _ _        _ _ _ _  __     __  _ _ _ _  _ _         __     __\n");
	printf("|   |      |       ||  |   |  ||       ||   |       |  |   |  |\n");
	printf("|   |      |    _ _||  |   |  ||    _ _||   |       |  |   |  |\n");
	printf("|   |      |   |_   |  |   |  ||   |_   |   |       |  |   |  |\n");
	printf("|   |      |     |  |  |   |  ||     |  |   |       |  |   |  |\n");
	printf("|   |      |    _|  |  |   |  ||    _|  |   |       |  |   |  |\n");
	printf("|   |_ _ _ |   |_ _ |  |_ _|  ||   |_ _ |   |_ _ _  |  |_ _|  |\n");
	printf("|         ||       ||         ||       ||         | |         |\n");
	printf("|_ _ _ _ _||_ _ _ _||_ _ _ _ _||_ _ _ _||_ _ _ _ _| |_ _ _ _ _|\n");
	printf(" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
	printf("|                                 |\n");
	printf("| [0] S T A R T / C O N T I N U E |\n");
	printf("|_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n");
	//Scans the choice of the user and stored it on int starter.
	scanf("%d", &starter);

	//returns the value of starter to the function who called it.
	return starter;

}

int forReset(){
	//declaration of variable change as integers
	int change;

	//asks the user what letter he/she want to replace by entering its corresponding number
	printf("Enter the corresponding number of the letter you want to change: ");
	//or to reset the level or choose another level.
	printf("\n or [0] TRY AGAIN or [9] CHOOSE ANOTHER LEVEL\n");
	//Scans the choice of the user and stored it on int change.
	scanf("%d", &change);

	//returns the value of change to the function who called it.
	return change;

}

void printSG(char start[], char goal[], int b){
	//Declaration of variable i as integer
	int i;

	//Prints the "START WORD:" and "GOAL WORD:"
	printf("\n\n\tSTART WORD:\t\t GOAL WORD:\n\n\t");
	//Prints the start word.
	for(i=0; i<b; i++){
		printf(" %c ", start[i]);
	}
	printf("\t\t");

	//Prints the goal word.
	for(i=0; i<b; i++){
		printf(" %c ", goal[i]);
	}

	printf("\n");
	printf("\t");

	//Prints the corresponding number of each letter in the start word
	for(i=0; i<b; i++){
		printf("[%d]", i+1);
	}
}


void complete(){
	//Prints "COMPLETE".
	printf("\n\n\n\n");
	printf("   _ _ _  _ _ _  _ _ _ _ _  _ _ _  _      _ _ _  _ _ _  _ _ _  _ _ _\n");
	printf("  |  _ _||  _  ||  _   _  ||  _  || |    |  _ _||_   _||  _ _||  _  |\n");
	printf("  | |    | | | || | | | | || |_| || |    | |      | |  | |    | | | |\n");
	printf("  | |    | | | || | | | | ||  _ _|| |    | |_     | |  | |_   | | | |\n");
	printf("  | |    | | | || | | | | || |    | |    |  _|    | |  |  _|  | | | |\n");
	printf("  | |    | | | || | |_| | || |    | |    | |      | |  | |    | | | |\n");
	printf("  | |_ _ | |_| || |     | || |    | |_ _ | |_ _   | |  | |_ _ | |_| |\n");
	printf("  |_ _ _||_ _ _||_|     |_||_|    |_ _ _||_ _ _|  |_|  |_ _ _||_ _ _|\n");
}

int strcompare(char start[], char goal[], char temp[], checkword dichecker[], int b){
	//Declaration of variable change and j as variable.
	int change, j;

	printf("\n\n\n");

	//Executes until the start word is the same to goal word.
		while( strcmp(start, goal) != 0){
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
			//Perform forReset() and stores the return value to change.
			change = forReset();

			//if change is equal to 0 or 9, it stops the while loop.
		if(change == 0 || change == 9){
			break;
		}

			//Asks the user what letter he/she want to replace it with
			printf("\nWhat letter do you want to replace it? ");
			getchar();
			//Scans the choice of the user and stores it on start[change-1].
			scanf("%c", &start[change-1]);
			//If ever the user entered a lowercase letter, "toupper" changes it to capital letter.
			start[change-1] = toupper(start[change-1]);

			printf("\n\t");

		//Performs the loop while j is not greater than or equal global variable count.
		//the global variable count is the number of words in the text file of the dictionary
		for(j=0; j<count; j++){
			//It will only execute if the word you made is the same on one of the word in the dictionary.
			if(strcmp(start, dichecker[j].dictionary)==0){
				strcpy(temp, start); //Copies the start to temp.
				printSG(start, goal, b); //Calls the printSG() and passes the value of start, goal and b.
				break; //Stops the execution of for loop.
			}
		}

		//If j is equal or greater than to count, it means that the formed word does not exist on the dictionary
		if(!(j<count)){
			//Prints that the word does not exist
			printf("\n\n\nWORD DOES NOT EXIST! Try Again! :)");
			strcpy(start, temp); //Copies temp to start.
			printf("\n\n\t");
			printSG(start, goal, b);//Calls the printSG() and passes the value of start, goal and b.
		}
	}

		return change; //Returns the value of change to the function who called it.

}


void caseexit(int level, int num){
	//Declares the variable j and k as integer
	int k;


	switch(level){
		case 0: //Ask the user if he/she is sure on exiting.
				printf("Are you sure you want to exit? \n\t\t [1] YES \t\t[2] NO\n");
				//Scans the choice of the user and store it on variable k.
				scanf("%d", &k);
				//If the choice of the user is 1, it will execute welcome().
					if(k==1){
						welcome(); //Calls welcome().
					}else if(k==2){ //If the user choice is 2, it will execute the switch depends on num.
						switch(num){
							case 5: easy(); break;  //Call easy(), then break.
							case 6: normal(); break; //Call normal(), then break.
							case 7: hard(); break; //Call hard(), then break.
						}
					}else{ //Else, if the user's choice is not 1 or 2, it is an invalid choice! It reexecute caseexit().
						printf("\n\nInvalid Choice!\n\n"); //Prints that user's choice is invalid!
						caseexit(level, num); //calls the caseexit()
					}
				break;
		default: puzzles(); break;
	}
}

void easy(){
	//Declaration of variables
	int i, level, num = 5;

	do{
		//Prints the current score
		printf("\n\nS C O R E : %d", score);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t");
		//Prints the level in easy stage
		for(i=0; i<5; i++){
			if(a[i]==1){
				printf("[ X ]\t");
			} else{
				printf("[ %d ]\t", i+1  );
			}
		}

		//Needs to satisfy the condition to ask the user what level to perform
		if(level!=0 || a[0]!=2 || a[1] != 2 || a[2]!=2|| a[3]!=2 || a[4]!=2){
				printf("\n\n\nWhat level do you want: \n or [0] Back to Menu:\n");
				scanf("%d", &level);
		}


		switch(level){
			case 1: if(a[0]!=1){
						a[0] = easyone();
						if(a[0]==1){
						score=score+3;
						complete();
						lvl1();
						}
					} else{
						printf("\nFINISHED ALREADY. CHOOSE ANOTHER LEVEL! \n");
						easy();
					}
					break;
			case 2: if(a[1]!=1){
						a[1] = easytwo();
						if(a[1]==1){
						score=score+5;
						complete();
						lvl2();
						}
					} else{
						printf("\nFINISHED ALREADY. CHOOSE ANOTHER LEVEL! \n");
						easy();
					}
					break;
		    case 3: if(a[2]!=1){
			    		a[2] = easythree();
						if(a[2]==1){
						score=score+7;
						complete();
						lvl3();
						}
					} else{
						printf("\nFINISHED ALREADY. CHOOSE ANOTHER LEVEL! \n");
						easy();
					}
					break;
			case 4: if(a[3]!=1){
						a[3] = easyfour();
						if(a[3]==1){
						score=score+9;
						complete();
						lvl4();
						}
					} else{
						printf("\nFINISHED ALREADY. CHOOSE ANOTHER LEVEL! \n");
						easy();
					}
					break;
			case 5: if(a[4]!=1){
						a[4] = easyfive();
						if(a[4]==1){
						score=score+11;
						complete();
						lvl5();
						}
					} else{
						printf("\nFINISHED ALREADY. CHOOSE ANOTHER LEVEL! \n");
						easy();
					}
					break;
		}
	if(level==0){
		break;
	}

	}while(a[0] != 1 || a[1] !=1 || a[2] !=1 || a[3] !=1 || a[4] !=1  );

	caseexit(level, num);

}

void normal(){
		//Declaration of variables
		int i, level, num=6;

		do{
		//Prints the current score
		printf("\n\nS C O R E : %d", score);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t");
		//Prints the level in normal stage
		for(i=0; i<5; i++){
			if(b[i]==1){
				printf("[ X ]\t");
			} else{
				printf("[ %d ]\t", i+1  );
			}
		}

		//Needs to satisfy the condition to ask the user what level to perform
		if(level!=0 || b[0]!=2 || b[1] != 2 || b[2]!=2|| b[3]!=2 || b[4]!=2){
			printf("\n\n\nWhat level do you want: \n or [0] Back to Menu:\n");
			scanf("%d", &level);
		}

		switch(level){
			case 1: if(b[0]!=1){
						b[0] = aveone();
						if(b[0] == 1){
						score=score+13;
						complete();
						lvl1();
						}
					} else{
						printf("\nFINISHED ALREADY. CHOOSE ANOTHER LEVEL! \n");
						normal();
					}
					break;
			case 2: if(b[1]!=1){
						b[1] = avetwo();
						if(b[1] == 1){
						score=score+15;
						complete();
						lvl2();
						}
					} else{
						printf("\nFINISHED ALREADY. CHOOSE ANOTHER LEVEL! \n");
						normal();
					}
					break;
		    case 3: if(b[2]!=1){
			    		b[2] = avethree();
						if(b[2] == 1){
						score=score+17;
						complete();
						lvl3();
						}
					} else{
						printf("\nFINISHED ALREADY. CHOOSE ANOTHER LEVEL! \n");
						normal();
					}
					break;
			case 4: if(b[3]!=1){
						b[3] = avefour();
						if(b[3] == 1){
						score = score+19;
						complete();
						lvl4();
						}
					} else{
						printf("\nFINISHED ALREADY. CHOOSE ANOTHER LEVEL! \n");
						normal();
					}
					break;
			case 5: if(b[4]!=1){
						b[4] = avefive();
						if(b[4] ==1){
						score=score+21;
						complete();
						lvl5();
						}
					} else{
						printf("\nFINISHED ALREADY. CHOOSE ANOTHER LEVEL! \n");
						normal();
					}
					break;
		}

		if(level==0){
			break;
		}

	}while(b[0] != 1 || b[1] !=1 || b[2] !=1 || b[3] !=1 || b[4] !=1  );

	caseexit(level, num);

}


void hard(){
		//Declaration of variabls
		int i, level, num=7;

		do{
		//Prints the current score
		printf("\n\nS C O R E : %d", score);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t");
		//Prints the levels in hard stage
		for(i=0; i<5; i++){
			if(c[i] == 1){
				printf("[ X ]\t");
			} else{
				printf("[ %d ]\t", i+1  );
			}
		}

		//Needs to satisfy the condition to ask the user what level to perform
		if(level!=0 || c[0]!=2 || c[1] != 2 || c[2]!=2|| c[3]!=2 || c[4]!=2){
			printf("\n\n\nWhat level do you want: \n or [0] Back to Menu:\n");
			scanf("%d", &level);
		}


		switch(level){
			case 1: if(c[0]!=1){
						c[0] = diffone();
						if(c[0] == 1){
						score=score+23;
						complete();
						lvl1();
						}
					} else{
						printf("\nFINISHED ALREADY. CHOOSE ANOTHER LEVEL! \n");
						hard();
					}
					break;
			case 2: if(c[1]!=1){
						c[1] = difftwo();
						if(c[1] == 1){
						score=score+25;
						complete();
						lvl2();
						}
					} else{
						printf("\nFINISHED ALREADY. CHOOSE ANOTHER LEVEL! \n");
						hard();
					}
					break;
		    case 3: if(c[2]!=1){
			    		c[2] = diffthree();
						if(c[2] == 1){
						score=score+27;
						complete();
						lvl3();
						}
					} else{
						printf("\nFINISHED ALREADY. CHOOSE ANOTHER LEVEL! \n");
						hard();
					}
					break;
			case 4: if(c[3]!=1){
						c[3] = difffour();
						if(c[3] == 1){
						score=score+29;
						complete();
						lvl4();
						}
					} else{
						printf("\nFINISHED ALREADY. CHOOSE ANOTHER LEVEL! \n");
						hard();
					}
					break;
			case 5: if(c[4]!=1){
						c[4] = difffive();
						if(c[4] == 1){
						score=score+31;
						complete();
						lvl5();
						}
					} else{
						printf("\nFINISHED ALREADY. CHOOSE ANOTHER LEVEL! \n");
						hard();
					}
					break;
		}

		if(level==0){
			break;
		}

	}while(c[0] != 1 || c[1] !=1 || c[2] !=1 || c[3] !=1 || c[4] !=1  );

	caseexit(level, num);

}

int easyone(){
	//Declaration of variables
	char start[6], goal[6], temp[6];
	int change, i, j, a, b;

	//initialization of string which is terminated by the null character.
	//start is to print if ever the word input exist
	//temp is to print if ever the word input does not exist
	//goal is the goal word
	start[0] = 'C';
	start[1] = 'R';
	start[2] = 'E';
	start[3] = 'E';
	start[4] = 'P';
	start[5] = '\0';

	temp[0] = 'C';
	temp[1] = 'R';
	temp[2] = 'E';
	temp[3] = 'E';
	temp[4] = 'P';
	temp[5] = '\0';

	goal[0] = 'D';
	goal[1] = 'R';
	goal[2] = 'I';
	goal[3] = 'E';
	goal[4] = 'D';
	goal[5] = '\0';

	b = strlen(start); //gets the string length of start and stores it in int b.

	do{
	printf("\n\n\n\n\n\n\n\n\n\n\n");
	  a = lvl1(); //executes lvl1 function and stores the return value to a while a is not 0.
	}
	while(a != 0);

	printSG(start, goal, b); //Calls printSG().

	change = strcompare(start, goal, temp, dichecker, b); //performs strcompare() and stores the return value to change.

	if(change==0){
		easyone();  //if change is zero, it will perform easyone()
	} else if(change==9){
		return 2; //if change is 9, it wil return 2 to easy().
		easy();	//and performs easy().
	} else{
		return 1; //else if change is not zero nor 9, it will return 1 to easy().
	}

}

int easytwo(){
	//Declaration of variables
	char start[5], goal[5], temp[5];
	int change, i, j, a, b;

	//initialization of string which is terminated by the null character.
	//start is to print if ever the word input exist
	//temp is to print if ever the word input does not exist
	//goal is the goal word
	start[0] = 'S';
	start[1] = 'H';
	start[2] = 'A';
	start[3] = 'M';
	start[4] = '\0';

	temp[0] = 'S';
	temp[1] = 'H';
	temp[2] = 'A';
	temp[3] = 'M';
	temp[4] = '\0';

	goal[0] = 'F';
	goal[1] = 'L';
	goal[2] = 'I';
	goal[3] = 'P';
	goal[4] = '\0';

	b=strlen(start); //Gets the string length of start and stores it in int b.

	do{
	  printf("\n\n\n\n\n\n\n\n\n\n\n");
	  a = lvl2(); //executes lvl2 function and stores the return value to a while a is not 0.
	}
	while(a != 0);

	printSG(start, goal, b); //Calls printSG().

	change = strcompare(start, goal, temp, dichecker, b); //Performs strcompare() and stores the return value to change.

	if(change==0){
		easytwo(); //If change is zero, it will execute easytwo().
	} else if(change==9){
		return 2; //if change is nine, it will return 2 to easy().
		easy(); // and it will execute easy().
	} else{
		return 1; //if change is not nine nor zero, it will return 1 to easy().
	}
}

int easythree(){
	//Declaration of variables
	char start[5], goal[5], temp[5];
	int change, i, j, a, b;

	//initialization of string which is terminated by the null character.
	//start is to print if ever the word input exist
	//temp is to print if ever the word input does not exist
	//goal is the goal word
	start[0] = 'S';
	start[1] = 'O';
	start[2] = 'M';
	start[3] = 'E';
	start[4] = '\0';

	temp[0] = 'S';
	temp[1] = 'O';
	temp[2] = 'M';
	temp[3] = 'E';
	temp[4] = '\0';

	goal[0] = 'N';
	goal[1] = 'O';
	goal[2] = 'N';
	goal[3] = 'E';
	goal[4] = '\0';

	b=strlen(start); //gets the string length of start and stores it value to b.

	do{
	  printf("\n\n\n\n\n\n\n\n\n\n\n");
	  a = lvl3(); //executes lvl3 function and stores the return value to a while a is not 0.
	}
	while(a != 0);


	printSG(start, goal, b); //Calls printSG().

	change = strcompare(start, goal, temp, dichecker, b); //Performs strcompare() and stores the return value to change.

	if(change==0){
		easythree(); //If change is 0, it will perform easythree()
	} else if(change==9){
		return 2; //If change is 9, it will return 2 to easy().
		easy(); //and perform easy().
	} else{
		return 1; //If change is not 0 or 9, it will return 1 to easy().
	}
}

int easyfour(){
	//Declaration of variables
	char start[5], goal[5], temp[5];
	int change, i, j, a, b;

	//initialization of string which is terminated by the null character.
	//start is to print if ever the word input exist
	//temp is to print if ever the word input does not exist
	//goal is the goal word
	start[0] = 'G';
	start[1] = 'N';
	start[2] = 'A';
	start[3] = 'T';
	start[4] = '\0';

	temp[0] = 'G';
	temp[1] = 'N';
	temp[2] = 'A';
	temp[3] = 'T';
	temp[4] = '\0';

	goal[0] = 'B';
	goal[1] = 'U';
	goal[2] = 'G';
	goal[3] = 'S';
	goal[4] = '\0';

	b=strlen(start); //stores the string length of start in int b.

	do{
	  printf("\n\n\n\n\n\n\n\n\n\n\n");
	  a = lvl4(); //executes lvl4 function and stores the return value to a while a is not 0.
	}
	while(a != 0);


	printSG(start, goal, b); //Calls printSG().

	change = strcompare(start, goal, temp, dichecker, b); //performs strcompare and stores the return value to change.

	if(change==0){
			easyfour(); //if change is 0, executes easyfour()
		} else if(change == 9){  //if change is 9...
			return 2; //returns 2 to easy().
			easy(); //performs easy().
		} else{
			return 1; //if change is not 0 or 9, it will return 1 to easy().
		}
}

int easyfive(){
	//Declaration of variables
	char start[4], goal[4], temp[4];
	int change, i, j, a, b;

	//initialization of string which is terminated by the null character.
	//start is to print if ever the word input exist
	//temp is to print if ever the word input does not exist
	//goal is the goal word
	start[0] = 'O';
	start[1] = 'N';
	start[2] = 'E';
	start[3] = '\0';

	temp[0] = 'O';
	temp[1] = 'N';
	temp[2] = 'E';
	temp[3] = '\0';

	goal[0] = 'T';
	goal[1] = 'W';
	goal[2] = 'O';
	goal[3] = '\0';

	b=strlen(start); //gets the string length of start and stores it in b.

	do{
	  printf("\n\n\n\n\n\n\n\n\n\n\n");
	  a = lvl5(); //executes lvl4 function and stores the return value to a while a is not 0.
	}
	while(a != 0);


	printSG(start, goal, b); //Calls printSG().

	change = strcompare(start, goal, temp, dichecker, b); //performs strcompare() and stores the return value to change

	if(change==0){
		easyfive(); //if change is zero, it will perform easyfive()
	} else if(change == 9){
		return 2; //if change is 9, it will return 2 to easy()
		easy(); //then it will execute easy()
	} else{
		return 1; //if change is not 0 or 9, it will return 1 to easy().
	}
}

int aveone(){
	//Declaration of variables
	char start[5], goal[5], temp[5];
	int change, i, j, a, b;

	//initialization of string which is terminated by the null character.
	//start is to print if ever the word input exist
	//temp is to print if ever the word input does not exist
	//goal is the goal word
	start[0] = 'H';
	start[1] = 'A';
	start[2] = 'R';
	start[3] = 'E';
	start[4] = '\0';

	temp[0] = 'H';
	temp[1] = 'A';
	temp[2] = 'R';
	temp[3] = 'E';
	temp[4] = '\0';

	goal[0] = 'S';
	goal[1] = 'O';
	goal[2] = 'U';
	goal[3] = 'P';
	goal[4] = '\0';

	b=strlen(start); //stores string length of start to b.

	do{
	  printf("\n\n\n\n\n\n\n\n\n\n\n");
	  a = lvl1(); //executes lvl2 function and stores the return value to a while a is not 0.
	}
	while(a != 0);

	printSG(start, goal, b); //calls printSG()

	change = strcompare(start, goal, temp, dichecker, b); //performs strcompare() then stores return value to change

	if(change==0){ //
		aveone();
	} else if(change==9){
		return 2;
		normal();
	} else{
		return 1;
	}
}

int avetwo(){
	//Declaration of variables
	char start[5], goal[5], temp[5];
	int change, i, j, a, b;

	//initialization of string which is terminated by the null character.
	//start is to print if ever the word input exist
	//temp is to print if ever the word input does not exist
	//goal is the goal word
	start[0] = 'H';
	start[1] = 'A';
	start[2] = 'I';
	start[3] = 'R';
	start[4] = '\0';

	temp[0] = 'H';
	temp[1] = 'A';
	temp[2] = 'I';
	temp[3] = 'R';
	temp[4] = '\0';

	goal[0] = 'N';
	goal[1] = 'E';
	goal[2] = 'C';
	goal[3] = 'K';
	goal[4] = '\0';

	b=strlen(start);

	do{
	  printf("\n\n\n\n\n\n\n\n\n\n\n");
	  a = lvl2(); //executes lvl2 function and stores the return value to a while a is not 0.
	}
	while(a != 0);

	printSG(start, goal, b);

	change = strcompare(start, goal, temp, dichecker, b);

	if(change==0){
		avetwo();
	} else if(change==9){
		return 2;
		normal();
	} else{
		return 1;
	}
}

int avethree(){
	char start[5], goal[5], temp[5];
	int change, i, j, a, b;

	//initialization of string which is terminated by the null character.
	//start is to print if ever the word input exist
	//temp is to print if ever the word input does not exist
	//goal is the goal word
	start[0] = 'K';
	start[1] = 'N';
	start[2] = 'E';
	start[3] = 'E';
	start[4] = '\0';

	temp[0] = 'K';
	temp[1] = 'N';
	temp[2] = 'E';
	temp[3] = 'E';
	temp[4] = '\0';

	goal[0] = 'S';
	goal[1] = 'H';
	goal[2] = 'I';
	goal[3] = 'N';
	goal[4] = '\0';

	b=strlen(start);

	do{
	  printf("\n\n\n\n\n\n\n\n\n\n\n");
	  a = lvl3(); //executes lvl2 function and stores the return value to a while a is not 0.
	}
	while(a != 0);

	printSG(start, goal, b);

	change = strcompare(start, goal, temp, dichecker, b);

	if(change==0){
		avethree();
	} else if(change==9){
		return 2;
		normal();
	} else{
		return 1;
	}
}

int avefour(){
	char start[5], goal[5], temp[5];
	int change, i, j, a, b;

	//initialization of string which is terminated by the null character.
	//start is to print if ever the word input exist
	//temp is to print if ever the word input does not exist
	//goal is the goal word
	start[0] = 'C';
	start[1] = 'H';
	start[2] = 'I';
	start[3] = 'N';
	start[4] = '\0';

	temp[0] = 'C';
	temp[1] = 'H';
	temp[2] = 'I';
	temp[3] = 'N';
	temp[4] = '\0';

	goal[0] = 'N';
	goal[1] = 'O';
	goal[2] = 'S';
	goal[3] = 'E';
	goal[4] = '\0';

	b=strlen(start);

	do{
	  printf("\n\n\n\n\n\n\n\n\n\n\n");
	  a = lvl4(); //executes lvl2 function and stores the return value to a while a is not 0.
	}
	while(a != 0);

	printSG(start, goal, b);

	change = strcompare(start, goal, temp, dichecker, b);

	if(change==0){
		avefour();
	} else if(change==9){
		return 2;
		normal();
	} else{
		return 1;
	}
}

int avefive(){
	char start[5], goal[5], temp[5];
	int change, i, j, a, b;

	//initialization of string which is terminated by the null character.
	//start is to print if ever the word input exist
	//temp is to print if ever the word input does not exist
	//goal is the goal word
	start[0] = 'B';
	start[1] = 'L';
	start[2] = 'U';
	start[3] = 'E';
	start[4] = '\0';

	temp[0] = 'B';
	temp[1] = 'L';
	temp[2] = 'U';
	temp[3] = 'E';
	temp[4] = '\0';

	goal[0] = 'J';
	goal[1] = 'A';
	goal[2] = 'Y';
	goal[3] = 'S';
	goal[4] = '\0';

	b=strlen(start);

	do{
	  printf("\n\n\n\n\n\n\n\n\n\n\n");
	  a = lvl5(); //executes lvl2 function and stores the return value to a while a is not 0.
	}
	while(a != 0);

	printSG(start, goal, b);

	change = strcompare(start, goal, temp, dichecker, b);

	if(change==0){
		avefive();
	} else if(change==9){
		return 2;
		normal();
	} else{
		return 1;
	}
}

int diffone(){
	char start[7], goal[7], temp[7];
	int change, i, j, a, b;

	//initialization of string which is terminated by the null character.
	//start is to print if ever the word input exist
	//temp is to print if ever the word input does not exist
	//goal is the goal word
	start[0] = 'W';
	start[1] = 'I';
	start[2] = 'N';
	start[3] = 'T';
	start[4] = 'E';
	start[5] = 'R';
	start[6] = '\0';

	temp[0] = 'W';
	temp[1] = 'I';
	temp[2] = 'N';
	temp[3] = 'T';
	temp[4] = 'E';
	temp[5] = 'R';
	temp[6] = '\0';

	goal[0] = 'S';
	goal[1] = 'U';
	goal[2] = 'M';
	goal[3] = 'M';
	goal[4] = 'E';
	goal[5] = 'R';
	goal[6] = '\0';

	b=strlen(start);

	do{
	  printf("\n\n\n\n\n\n\n\n\n\n\n");
	  a = lvl1(); //executes lvl2 function and stores the return value to a while a is not 0.
	}
	while(a != 0);

	printSG(start, goal, b);

	change = strcompare(start, goal, temp, dichecker, b);

	if(change==0){
		diffone();
	} else if(change==9){
		return 2;
		hard();
	} else{
		return 1;
	}
}

int difftwo(){
	char start[5], goal[5], temp[5];
	int change, i, j, a, b;

	//initialization of string which is terminated by the null character.
	//start is to print if ever the word input exist
	//temp is to print if ever the word input does not exist
	//goal is the goal word
	start[0] = 'L';
	start[1] = 'I';
	start[2] = 'O';
	start[3] = 'N';
	start[4] = '\0';

	temp[0] = 'L';
	temp[1] = 'I';
	temp[2] = 'O';
	temp[3] = 'N';
	temp[4] = '\0';

	goal[0] = 'L';
	goal[1] = 'A';
	goal[2] = 'M';
	goal[3] = 'B';
	goal[4] = '\0';

	b=strlen(start);

	do{
	  printf("\n\n\n\n\n\n\n\n\n\n\n");
	  a = lvl2(); //executes lvl2 function and stores the return value to a while a is not 0.
	}
	while(a != 0);

	printSG(start, goal, b);

	change = strcompare(start, goal, temp, dichecker, b);

	if( change==0 ){
		difftwo();
	} else if(change==9){
		return 2;
		hard();
	} else{
	       return 1;
	}
}

int diffthree(){
	char start[6], goal[6], temp[6];
	int change, i, j, a, b;

	//initialization of string which is terminated by the null character.
	//start is to print if ever the word input exist
	//temp is to print if ever the word input does not exist
	//goal is the goal word
	start[0] = 'S';
	start[1] = 'P';
	start[2] = 'O';
	start[3] = 'R';
	start[4] = 'T';
	start[5] = '\0';

	temp[0] = 'S';
	temp[1] = 'P';
	temp[2] = 'O';
	temp[3] = 'R';
	temp[4] = 'T';
	temp[5] = '\0';

	goal[0] = 'C';
	goal[1] = 'O';
	goal[2] = 'A';
	goal[3] = 'C';
	goal[4] = 'H';
	goal[5] = '\0';


	b=strlen(start);

	do{
	  printf("\n\n\n\n\n\n\n\n\n\n\n");
	  a = lvl3(); //executes lvl2 function and stores the return value to a while a is not 0.
	}
	while(a != 0);

	printSG(start, goal, b);

	change = strcompare(start, goal, temp, dichecker, b);

	if(change==0){
		diffthree();
	} else if(change==9){
		return 2;
		hard();
	} else{
		return 1;
	}
}

int difffour(){
	char start[7], goal[7], temp[7];
	int change, i, j, a, b;

	//initialization of string which is terminated by the null character.
	//start is to print if ever the word input exist
	//temp is to print if ever the word input does not exist
	//goal is the goal word
	start[0] = 'G';
	start[1] = 'A';
	start[2] = 'R';
	start[3] = 'D';
	start[4] = 'E';
	start[5] = 'N';
	start[6] = '\0';

	temp[0] = 'G';
	temp[1] = 'A';
	temp[2] = 'R';
	temp[3] = 'D';
	temp[4] = 'E';
	temp[5] = 'N';
	temp[6] = '\0';

	goal[0] = 'S';
	goal[1] = 'H';
	goal[2] = 'O';
	goal[3] = 'V';
	goal[4] = 'E';
	goal[5] = 'L';
	goal[6] = '\0';

	b=strlen(start);

	do{
	  printf("\n\n\n\n\n\n\n\n\n\n\n");
	  a = lvl4(); //executes lvl2 function and stores the return value to a while a is not 0.
	}
	while(a != 0);

	printSG(start, goal, b);

	change = strcompare(start, goal, temp, dichecker, b);

	if(change==0){
		difffour();
	} else if(change==9){
		return 2;
		hard();
	} else{
		return 1;
	}
}

int difffive(){
	char start[6], goal[6], temp[6];
	int change, i, j, a, b;

	//initialization of string which is terminated by the null character.
	//start is to print if ever the word input exist
	//temp is to print if ever the word input does not exist
	//goal is the goal word
	start[0] = 'R';
	start[1] = 'O';
	start[2] = 'G';
	start[3] = 'U';
	start[4] = 'E';
	start[5] = '\0';

	temp[0] = 'B';
	temp[1] = 'E';
	temp[2] = 'A';
	temp[3] = 'S';
	temp[4] = 'T';
	temp[5] = '\0';

	goal[0] = 'A';
	goal[1] = 'C';
	goal[2] = 'H';
	goal[3] = 'E';
	goal[4] = 'S';
	goal[5] = '\0';

	b=strlen(start);

	do{
	  printf("\n\n\n\n\n\n\n\n\n\n\n");
	  a = lvl5(); //executes lvl2 function and stores the return value to a while a is not 0.
	}
	while(a != 0);

	printSG(start, goal, b);

	change = strcompare(start, goal, temp, dichecker, b);

	if(change==0){
		difffive();
	} else if(change==9){
		return 2;
		hard();
	} else{
		return 1;
	}

}
