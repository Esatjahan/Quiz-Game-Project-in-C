



#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void show_record();
void reset_score();
void help();
void edit_score(float, char []);

int main() {
    int countr, r, r1, count, i, n;
    float score;
    char choice;
    char playername[20];

mainhome:
    system("cls");
    printf("\t\t\tC PROGRAM QUIZ GAME\n");
    printf("\n\t\t________________________________________");

    printf("\n\t\t\t   WELCOME ");
    printf("\n\t\t\t      to ");
    printf("\n\t\t\t   THE GAME ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t > Press S to start the game");
    printf("\n\t\t > Press V to view the highest score  ");
    printf("\n\t\t > Press R to reset score");
    printf("\n\t\t > Press H for help            ");
    printf("\n\t\t > Press Q to quit             ");
    printf("\n\t\t________________________________________\n\n");
    choice = toupper(getch());

    if (choice == 'V') {
        show_record();
        goto mainhome;
    } else if (choice == 'H') {
        help();
        getch();
        goto mainhome;
    } else if (choice == 'R') {
        reset_score();
        getch();
        goto mainhome;
    } else if (choice == 'Q') {
        exit(1);
    } else if (choice == 'S') {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
        gets(playername);

        system("cls");
        printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------", playername);
        printf("\n\n Here are some tips you might wanna know before playing:");
         printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");

        if (toupper(getch()) == 'Y') {
            goto home;
        } else {
            goto mainhome;
        }

home:
        system("cls");
        count = 0;
        for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nThe nation of Bangladesh was formed form the historic region of bengal.In which year did it gain independence?");
		printf("\n\nA.1921\t\tB.1937\n\nC.1971\t\tD.1947");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.1971");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nIn 1971 after a bloddy resistance,Bangladesh officially gained independence from which nation?");
		printf("\n\nA.United kingdom\t\tB.India\n\nC.Pakistan\t\tD.Finland");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Pakistan");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nWhich animal laughs like human being?");
		printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Hyena");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nAlthough Bangladesh is a muslim country,the next UNESCO world Heritage Site is the ruins of a monastery that belong to which region?");
		printf("\n\nA.Christianity\t\tB.Buddhism\n\nC.Confucianism\t\tD.Sikhism");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Buddhism");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nWhich is the third highest mountain in the world?");
        printf("\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.Mt. Kanchanjungha");
		       getch();
		       break;}

        case 6:
	printf("\n\n\nWhich city become the capital of Bangladesh when it gained independence?");
		printf("\n\nA.Kabul\t\tB.Tehran\n\nC.Jakarta\t\tD.Dhaka");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Dhaka");
		       getch();
		       break;
		       }
		       }
		       }	printf("\n\n\nWhich city become the capital of Bangladesh when it gained independence?");
		printf("\n\nA.Kabul\t\tB.Tehran\n\nC.Jakarta\t\tD.Dhaka");
		if (toupper(getch())=='D' )

        if (count >= 2) {
            goto test;
        } else {
            system("cls");
            printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
            getch();
            goto mainhome;
        }

test:
        system("cls");
        printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***", playername);
        printf("\n\n\n\n\t!Press any key to Start the Game!");

        if (toupper(getch()) == 'P') {
            goto game;
        }
game:
        countr = 0;
    for(i=1;i<=100;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		printf("\n\nWhat is the National Game of England?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Cricket");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nBangladesh is bordered by two countries.Which ones?");
		printf("\n\nA.India and Myanmar\t\tB.Nepal and Bhutan\n\nC.Mayanmar and Nepal\t\tD.India and Nepal");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.India and Mayanmar");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nOn which continent is Bangladesh located? ");
		printf("\n\nA.Africa\t\tB.South America\n\nC.Asia\t\tD.Europe");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Asia");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
		printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Faraday");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nIn what unit is electric power measured?");
		printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Watt");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nWhich element is found in Vitamin B12?");
		printf("\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Cobalt");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nWhat is the National Name of Japan?");
		printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Nippon");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nHow many times a piece of paper can be folded at the most?");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.7");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\nWhat is the capital of Bangladesh?");
		printf("\n\nA.Dhaka\t\tB.Jakarta\n\nC.Islamabad\t\tD.Afganistan");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Dhaka");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nWhich is the longest River in the world?");
		printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Nile");getch();break;goto score;}

        case 11:
		printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
		printf("\n\nA.White\t\tB.Black\n\nC.Orange\t\tD.Red");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is C.Orange");getch();
              break;goto score;}

        case 12:
		printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
		printf("\n\nA.Rome\t\tB.Vactican City\n\nC.Madrid\t\tD.Berlin");
		if (toupper(getch())=='A')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.Rome");getch();
              break;goto score;}

		case 13:
		printf("\n\n\nName the country where there no mosquitoes are found?");
		printf("\n\nA.Japan\t\tB.Italy\n\nC.Argentina\t\tD.France");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.France");getch();
		       break;goto score;}

        case 14:
		printf("\n\n\nThe Asian nation of Bangladesh is almost completely enveloped by one country.Which nation has a large land border with Bangladesh?");
		printf("\n\nA.India\t\tB.Japan\n\nC.China\t\tD.Russia");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.India");getch();
		       break;goto score;}

		case 15:
		printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
		printf("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.AB");getch();
		       goto score;
		       break;}

		case 16:
		printf("\n\n\nWhat is the unit of measurement of distance between Stars?");
		printf("\n\nA.Light Year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Light Year");getch();
		       goto score;
		       break;}


		case 17:
		printf("\n\n\nThe country famous for Samba Dance is........");
		printf("\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Brazil");getch();goto score;
		       break;}

		case 18:
		printf("\n\n\nWind speed is measure by__________?");
		printf("\n\nA.Lysimeter\t\tB.Air vane\n\nC.Hydrometer\t\tD.Anemometer\n\n");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Anemometer");getch();goto score;
		       break;}

		case 19:
		printf("\n\n\nWhich city in the world is popularly known as The City of Temple?");
		printf("\n\nA.Delhi\tB.Bhaktapur\n\nC.Kathmandu\tD.Agra\n\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Kathmandu");getch();goto score;
		       break;}

		case 20:
		printf("\n\n\nWhich hardware was used in the First Generation Computer?");
		printf("\n\nA.Transistor\t\tB.Valves\n\nC.I.C\t\tD.S.S.I");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Valves");getch();goto score;
		       break;}

		case 21:
		printf("\n\n\nOzone plate is being destroyed regularly because of____ ?");
		printf("\n\nA.L.P.G\t\tB.Nitrogen\n\nC.Methane\t\tD. C.F.C");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D. C.F.C");getch();goto score;
		       break;}

		case 22:
		printf("\n\n\nWhich river flows across the India-Bangladesh border?");
		printf("\n\nA.Suma River\t\tB.Brahmaputra River\n\nC.Hoogly River\t\tD.Ichamati River");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Ichamati River");getch();goto score;
		       break;}

		case 23:
		printf("\n\n\nKhulna city in Khulna Division is a major exporter of which decapod crustacean that would probably make it the envy of Forrest Gump ?");
		printf("\n\nA.Obster\t\tB.Oysters\n\nC.Shirmp\t\tD.Crab");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Shirmp");getch();goto score;
		       break;}}}

score:
        system("cls");
        score = (float)countr * 100000.0;

        if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}


go:
        puts("\n\n Press Y if you want to play the next game");
        puts(" Press any key if you want to go to the main menu");

        if (toupper(getch()) == 'Y') {
            goto home;
        } else {
            edit_score(score, playername);
            goto mainhome;
        }
    }
}

void show_record() {
    system("cls");
    char name[20];
    float scr;
    FILE *f;
    f = fopen("score.txt", "r");
    fscanf(f, "%s%f", &name, &scr);
    printf("\n\n\t\t*************************************************************");
    printf("\n\n\t\t %s has secured the Highest Score %0.2f %f\n", name, scr);
    printf("\n\n\t\t*************************************************************");
    fclose(f);
    getch();
}

void reset_score() {
    system("cls");
    float sc;
    char nm[20];
    FILE *f;
    f = fopen("score.txt", "r+");
    fscanf(f, "%s%f", &nm, &sc);
    sc = 0;
    fprintf(f, "%s,%.2f", nm, sc);
    fclose(f);
    struct Question {
    char question[200];
    char options[4][50];
    char correct_option;
};

void save_questions(struct Question *quiz, int question_count) {
    FILE *file = fopen("questions.txt", "w");
    if (file == NULL) {
        printf("Error opening questions file for writing.\n");
        return;
    }

    fprintf(file, "%d\n", question_count);
    for (int i = 0; i < question_count; i++) {
        fprintf(file, "%s\n", quiz[i].question);
        for (int j = 0; j < 4; j++) {
            fprintf(file, "%s\n", quiz[i].options[j]);
        }
        fprintf(file, "%c\n", quiz[i].correct_option);
    }

    fclose(file);
}

void load_questions(struct Question *quiz, int *question_count) {
    FILE *file = fopen("questions.txt", "r");
    if (file == NULL) {
        printf("Error opening questions file for reading.\n");
        return;
    }

    fscanf(file, "%d", question_count);
    for (int i = 0; i < *question_count; i++) {
        fscanf(file, "%s", quiz[i].question);
        for (int j = 0; j < 4; j++) {
            fscanf(file, "%s", quiz[i].options[j]);
        }
        fscanf(file, " %c", &quiz[i].correct_option);
    }

    fclose(file);
}

void add_question(struct Question *quiz, int *question_count) {
    printf("Enter the question: ");
    fflush(stdin);
    gets(quiz[*question_count].question);

    printf("Enter option A: ");
    gets(quiz[*question_count].options[0]);

    printf("Enter option B: ");
    gets(quiz[*question_count].options[1]);

    printf("Enter option C: ");
    gets(quiz[*question_count].options[2]);

    printf("Enter option D: ");
    gets(quiz[*question_count].options[3]);

    printf("Enter the correct option (A/B/C/D): ");
    scanf(" %c", &quiz[*question_count].correct_option);

    (*question_count)++;
}

void run_quiz(struct Question *quiz, int question_count) {
    // Implementation of the quiz logic goes here
}

int main() {
    struct Question quiz[100];
    int question_count = 0;

    char choice;
    printf("Do you want to load questions from file? (Y/N): ");
    choice = toupper(getch());
    if (choice == 'Y') {
        load_questions(quiz, &question_count);
    }

    do {
        system("cls");
        printf("1. Add Question\n");
        printf("2. Start Quiz\n");
        printf("3. Save Questions\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");

        choice = getch();

        switch (choice) {
            case '1':
                add_question(quiz, &question_count);
                break;
            case '2':
                run_quiz(quiz, question_count);
                break;
            case '3':
                save_questions(quiz, question_count);
                break;
            case '4':
                printf("Quitting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }

        if (choice != '4') {
            printf("Press any key to continue...");
            getch();
        }

    } while (choice != '4');

    return 0;
}
}
void help() {
    system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is updated by Mst.Esat Jahan Akhi ********");
}
void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
struct Question {
    char question[200];
    char options[4][50];
    char correct_option;
};

void save_questions(struct Question *quiz, int question_count) {
    FILE *file = fopen("questions.txt", "w");
    if (file == NULL) {
        printf("Error opening questions file for writing.\n");
        return;
    }

    fprintf(file, "%d\n", question_count);
    for (int i = 0; i < question_count; i++) {
        fprintf(file, "%s\n", quiz[i].question);
        for (int j = 0; j < 4; j++) {
            fprintf(file, "%s\n", quiz[i].options[j]);
        }
        fprintf(file, "%c\n", quiz[i].correct_option);
    }

    fclose(file);
}

void load_questions(struct Question *quiz, int *question_count) {
    FILE *file = fopen("questions.txt", "r");
    if (file == NULL) {
        printf("Error opening questions file for reading.\n");
        return;
    }

    fscanf(file, "%d", question_count);
    for (int i = 0; i < *question_count; i++) {
        fscanf(file, "%s", quiz[i].question);
        for (int j = 0; j < 4; j++) {
            fscanf(file, "%s", quiz[i].options[j]);
        }
        fscanf(file, " %c", &quiz[i].correct_option);
    }

    fclose(file);
}




