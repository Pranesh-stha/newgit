#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char yon; //yes or no
int ans;
int score = 0, x = 1;
int diff;
int aga; //play again or not
char name[20]; 

void easy()
{
   printf("\nQ.1. Which planet is known as the 'Red Planet'?                    current score:'%d'\n1) Venus       3) Jupiter\n2) Mars        4) Saturn\n",score);
  scanf("%d", &ans);  
  if(ans == 2)
  {
   score = score + 1;    
  }
  else{ score = score + 0;
  }
   system("cls");

  printf("\nQ.2. What is the capital city of France?                    current score:'%d'\n1) Berlin         3) Paris\n2) Madrid         4) Rome\n",score);
  scanf("%d", &ans);  
  if(ans == 3)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.3. Who wrote the play 'Romeo and Juliet'?                    current score:'%d'\n1) Charles Dickens            3) Jane Austen\n2) William Shakespeare        4) Mark Twain\n",score);
  scanf("%d", &ans);  
  if(ans == 2)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.4. Which ocean is the largest on Earth?                    current score:'%d'\n1) Indian Ocean          3) Southern Ocean\n2) Atlantic Ocean        4) Pacific Ocean \n",score);
  scanf("%d", &ans);  
  if(ans == 4)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.5. What is the largest mammal in the world?                    current score:'%d'\n1) Elephant              3) Blue Whale\n2) Giraffe               4) Gorilla\n",score);
  scanf("%d", &ans);  
  if(ans == 3)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.6. Which country is known as the 'Land of the Rising Sun'?             current score:'%d'\n1) China                 3) South Korea\n2) Japan                 4) Vietnam\n",score);
  scanf("%d", &ans);  
  if(ans == 2)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.7. What is the currency of the United Kingdom?                    current score:'%d'\n1) Euro                  3) Dollar\n2) Pound Sterling        4) Yen\n",score);
  scanf("%d", &ans);  
  if(ans == 2)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.8. In what year did the Titanic sink?                    current score:'%d'\n1) 1912                3) 1935\n2) 1920                4) 1941\n",score);
  scanf("%d", &ans);  
  if(ans == 1)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.9. Who painted the Mona Lisa?                    current score:'%d'\n1) Leonardo da Vinci   3) Pablo Picasso\n2) Michelangelo        4) Vincent van Gogh\n",score);
  scanf("%d", &ans);  
  if(ans == 1)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.10. Which gas do plants absorb during photosynthesis?                    current score:'%d'\n1) Oxygen              3) Nitrogen\n2) Carbon Dioxide      4) Hydrogen\n",score);
  scanf("%d", &ans);  
  if(ans == 2)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");
}

void medium()
{
   printf("\nQ.1. Which famous scientist developed the theory of general relativity?                 current score:'%d'\n1) Isaac Newton        3) Stephen Hawking\n2) Albert Einstein     4) Galileo Galilei\n",score);
  scanf("%d", &ans);  
  if(ans == 2)
  {
   score = score + 1;    
  }
  else{ score = score + 0;
  }
   system("cls");

  printf("\nQ.2. What is the longest river in the world?                    current score:'%d'\n1) Amazon River        3) Yangtze River\n2) Nile River          4) Mississippi River\n",score);
  scanf("%d", &ans);  
  if(ans == 1)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.3. Who wrote the classic novel '1984'?                    current score:'%d'\n1) George Orwell       3) J.D. Salinger\n2) Aldous Huxley       4) Ray Bradbury\n",score);
  scanf("%d", &ans);  
  if(ans == 1)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.4. What is the capital city of Australia?                    current score:'%d'\n1) Sydney          3) Canberra\n2) Melbourne       4) Brisbane\n",score);
  scanf("%d", &ans);  
  if(ans == 3)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.5. Which element has the chemical symbol 'Na'?                    current score:'%d'\n1) Nitrogen        3) Sodium\n2) Nickel          4) Neptunium\n",score);
  scanf("%d", &ans);  
  if(ans == 3)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.6. In which year did the Berlin Wall fall, leading to the reunification of Germany?           current score:'%d'\n1) 1985            3) 1991\n2) 1989            4) 1995\n",score);
  scanf("%d", &ans);  
  if(ans == 2)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.7. What is the largest desert in the world?                    current score:'%d'\n1) Sahara Desert       3) Antarctica\n2) Gobi Desert         4) Arabian Desert\n",score);
  scanf("%d", &ans);  
  if(ans == 3)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.8. Who is known as the 'Father of Computer Science'?                    current score:'%d'\n1) Alan Turing         3) Steve Jobs\n2) Bill Gates          4) Tim Berners-Lee\n",score);
  scanf("%d", &ans);  
  if(ans == 1)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.9. Which planet is known as the 'Blue Planet'?                    current score:'%d'\n1) Mars                3) Neptune\n2) Earth               4) Uranus\n",score);
  scanf("%d", &ans);  
  if(ans == 2)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.10. Which famous Renaissance artist sculpted the statue of David?            current score:'%d'\n1) Leonardo da Vinci       3) Raphael\n2) Michelangelo            4) Donatello\n",score);
  scanf("%d", &ans);  
  if(ans == 2)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

}

void hard()
{
   printf("\nQ.1. Who was the first woman to win a Nobel Prize?                    current score:'%d'\n1) Marie Curie         3) Amelia Earhart\n2) Mother Teresa       4) Rosalind Franklin\n",score);
  scanf("%d", &ans);  
  if(ans == 1)
  {
   score = score + 1;    
  }
  else{ score = score + 0;
  }
   system("cls");

  printf("\nQ.2. Which ancient wonder of the world was located in the city of Babylon?                    current score:'%d'\n1) Great Pyramid of Giza               3) Temple of Artemis at Ephesus\n2) Hanging Gardens of Babylon          4) Statue of Zeus at Olympia\n",score);
  scanf("%d", &ans);  
  if(ans == 2)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.3. In which year did the Chernobyl nuclear disaster occur?                    current score:'%d'\n1) 1983            3) 1991\n2) 1986            4) 1979\n",score);
  scanf("%d", &ans);  
  if(ans == 2)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.4. What is the smallest bone in the human body?                    current score:'%d'\n1) Stapes          3) Incus\n2) Malleus         4) Femur\n",score);
  scanf("%d", &ans);  
  if(ans == 1)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.5. Which war is often referred to as the 'Great War'?                    current score:'%d'\n1) World War I             3) Korean War\n2) World War II            4) Vietnam War\n",score);
  scanf("%d", &ans);  
  if(ans == 1)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.6. What is the capital city of Bhutan?                    current score:'%d'\n1) Thimphu         3) Punakha\n2) Paro            4) Jakar\n",score);
  scanf("%d", &ans);  
  if(ans == 1)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.7. Who was the first person to circumnavigate the globe?                    current score:'%d'\n1) Ferdinand Magellan          3) James Cook\n2) Christopher Columbus        4) Marco Polo\n",score);
  scanf("%d", &ans);  
  if(ans == 1)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.8. Which chemical element has the highest melting point?                    current score:'%d'\n1) Tungsten        3) Platinum\n2) Carbon          4) Osmium\n",score);
  scanf("%d", &ans);  
  if(ans == 1)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.9. In what year did the Black Death begin to ravage Europe?                    current score:'%d'\n1) 1299        3) 1420\n2) 1347        4) 1475\n",score);
  scanf("%d", &ans);  
  if(ans == 2)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");

  printf("\nQ.10. Which two planets in our solar system are known as 'ice giants'?                    current score:'%d'\n1) Neptune and Uranus      3) Mars and Venus\n2) Jupiter and Saturn      4) Mercury and Earth\n",score);
  scanf("%d", &ans);  
  if(ans == 1)
  {
   score = score + 1;   
   printf("your score is %d\n\n",score); 
  }
  else{ score = score + 0;
  printf("your score is %d\n\n",score);}
   system("cls");
}
int main()
 {
   system("cls");
  
  printf("\n\n>>>>>>>>>>>>>>>>>> GENERAL <<<<<<<<<<<<<<<<<\n");
  printf(">>>>>>>>>>>>>>>>> KNOWLEDGE <<<<<<<<<<<<<<<<\n");
  printf(">>>>>>>>>>>>>>>>>>> QUIZ <<<<<<<<<<<<<<<<<<<\n\n");
  printf("Please answer in '1' '2' '3'or'4'\nYour current score is 0\nYou get a point for every right answer\n");
  printf("type 'Y' to continue or 'X' to quit\n");
  scanf(" %c", &yon);
  system("cls");

  
  
    
  if(yon == 'x'){return 0;}
  else if(yon == 'y')
  { 
    
    printf("Enter your name:");
    scanf("%s", &name);
    selection:
    system("cls");
    printf("Please select your difficuty Level\n");
    printf("press '1' for 'EASY' difficulty\n");
    printf("press '2' for 'MEDIUM' difficulty\n");
    printf("press '3' for 'HARD' difficulty\n");
    scanf("%d",&diff);

    system("cls");

    if(diff == 1)
    {
      easy();
    }

    else if(diff == 2)
    {
      medium();
    }

    else if(diff == 3)
    {
      hard();
    }

  }

 if(score == 10){
   printf("!!!!!!CONGRATS %s YOU GOT A PERFECT SCORE!!!!!! you got 10 on 10",name);
 }
 else if(score <= 9 && score >= 6){
   printf("%s You are good enough. you got %d out of 10", name,score);
 }
 else if(score < 6){
   printf("%s,you sould work on you GK. you only got %d out of 10",name, score);
 }

 score = score - score;

 printf("\nPress '1' to continue or '2' to quit\n");
 scanf("%d", &aga);
 if(aga == 1)
 {
  goto selection;
 }
 else if(aga == 2)
 {
  system("cls");
  printf("THANK YOU FOR PLAYING");
  return 0;
 }

  return 0;
 }