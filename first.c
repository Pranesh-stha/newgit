//unit converter
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char category; //category of the conversion choice
int tempChoice;
int currencyChoice;
int TimeChoice;
int massChoice;
int userinF; //farenheit input
int userinC; //celcius input
int farenToCel;
int celToFaren;
int towhich; //to convert to which currency
int towhichT; //to convert to which time
float userinputNrs; //nepali rupeess input
float userinputUSD; //ameican dollar input
float userinputEuro; //euro input
float userinputINR; //indian rupeess input
float NrsToUsd;
float NrsToEuro;
float NrsToINR;
float INRtoUSD;
float INRtoNrs;
float INRToEuro;
float USDToNrs;
float USDToEuro;
float USDToINR;
float EuroToUSD;
float EuroToNrs;
float EuroToINR;
float userinpKg; //kilogram input
float userinpgm; //gram input
float userinpP; //pound input
float userinpTon; //Tonne input
float KgTogm;
float gmToKg;
float KgToP;
float PTOKg;
float PToGm;
float gmToP;
float KgToT;
float PToTon;
float TonToP;
float TonToKg;
float userinpday, userinphr, userinpmin, userinpsec;
float daytohr, daytomin, daytosec, hrtoday, hrtomin, hrtosec, mintoday, mintohr, mintosec, sectoday, sectohr,sectomin;
float formass[8] = {0,1000,0.001,2.2,0.4536,453.592,0.0022046};
void categorychoose()
{
    printf("HERE IS A LIST OF CONVERSION YOU CAN CHOOSE FROM\n");
    printf("TEMPERATURE(T)\nMASS(M)\nCURRENCY(C)\nTime(t)\n");
    printf("PLEASE ENTER THE LETTER YOU WANT TO CONVERT\n");
    printf("PLEASE ENTER X TO QUIT\n\n");
    scanf(" %c", &category);
}

void tempchange()
{
    printf("Welcome to Temperature Unit Converter! \n");
    printf("Here is a list of conversations to choose from: \n");
    printf("Enter 1 for Fahrenheit to Celsius. \n");
    printf("Enter 2 for Celsius to Fahrenheit. \n");
    printf("Enter 99 to go back. \n");
    scanf("%d",&tempChoice);
}

void whichtime()
{
    printf("Welcome to Time Unit Converter! \n");
    printf("Here is a list of conversations to choose from: \n");
    printf("Enter 1 to convert from Day.\n");
    printf("Enter 2 to convert from Hour.\n");
    printf("Enter 3 to convert from Minute.\n");
    printf("Enter 4 to convert from Second.\n");
    printf("Enter 99 to go back\n");
    scanf("%d",&TimeChoice);
}

void whichmoney()
{
    printf("Welcome to Currency Converter! \n");
    printf("Here is a list of conversations to choose from: \n");
    printf("Enter 1 to convert from Nrs.\n");
    printf("Enter 2 to convert from INR.\n");
    printf("Enter 3 to convert from USD.\n");
    printf("Enter 4 to convert from Euro.\n");
    printf("Enter 99 to go back\n");
    scanf("%d",&currencyChoice);
}

void masschange()
{
    printf("Welcome to Mass Converter! \n");
    printf("Here is a list of conversations to choose from: \n");
    printf("Enter 1 for kilogram to gram. \n");
    printf("Enter 2 for gram to kilogram. \n");
    printf("Enter 3 for kilogram to pound. \n");
    printf("Enter 4 for pound to kilogram. \n");
    printf("Enter 5 for pound to gram. \n");
    printf("Enter 6 for gram to pound. \n");
    printf("Enter 7 for Kilogram to Ton. \n");
    printf("Enter 8 for Ton to Kilogram. \n");
    printf("Enter 9 for Pound to Ton. \n");
    printf("Enter 10 for Ton to Pound. \n");
    printf("Enter 99 to go back. \n");
    scanf("%d",&massChoice);
}

void day()
{
    printf("Enter 1 to convert to Hour.\n");
    printf("Enter 2 to convert to Minute.\n");
    printf("Enter 3 to convert to second.\n");
    printf("Enter 99 to go back.\n");
    scanf("%d", &towhichT);
    
}

void hour()
{
    printf("Enter 1 to convert to day.\n");
    printf("Enter 2 to convert to Minute.\n");
    printf("Enter 3 to convert to second.\n");
    printf("Enter 99 to go back.\n");
    scanf("%d", &towhichT);
    
}

void min()
{
    printf("Enter 1 to convert to day.\n");
    printf("Enter 2 to convert to hour.\n");
    printf("Enter 3 to convert to second.\n");
    printf("Enter 99 to go back.\n");
    scanf("%d", &towhichT);
    
}

void sec()
{
    printf("Enter 1 to convert to day.\n");
    printf("Enter 2 to convert to hour.\n");
    printf("Enter 3 to convert to minute.\n");
    printf("Enter 99 to go back.\n");
    scanf("%d", &towhichT);
    
}

void nep()
{
    printf("Enter 1 to convert to USD.\n");
    printf("Enter 2 to convert to Euro.\n");
    printf("Enter 3 to convert to INR.\n");
    printf("Enter 99 to go back.\n");
    scanf("%d", &towhich);
    
}

void ind()
{
    printf("Enter 1 to convert to USD.\n");
    printf("Enter 2 to convert to Euro.\n");
    printf("Enter 3 to convert to Nrs.\n");
    printf("Enter 99 to go back.\n");
    scanf("%d", &towhich);
}

void usa()
{
    printf("Enter 1 to convert to Nrs.\n");
    printf("Enter 2 to convert to Euro.\n");
    printf("Enter 3 to convert to INR.\n");
    printf("Enter 99 to go back.\n");
    scanf("%d", &towhich);
    
}

void eu()
{
    printf("Enter 1 to convert to USD.\n");
    printf("Enter 2 to convert to Nrs.\n");
    printf("Enter 3 to convert to INR.\n");
    printf("Enter 99 to go back.\n");
    scanf("%d", &towhich);
}


int main()
{
    start:
    system("cls");
    printf("WELCOME TO UNIT CONVERTER!!!\n");
    while(1 == 1)
    {
        categorychoose();

        if(category == 'T')
        {
            system("cls");
            tempchange();
            if(tempChoice == 1)
            {
                printf("Please enter the Fahrenheit degree: \n");
                scanf("%d",&userinF);
                farenToCel =  ((userinF-32) * (5.0/9.0));
                printf("Celcius: %d\n\n",farenToCel);
            }

            else if(tempChoice == 2)
            {
                printf("Please enter the Celcius degree: \n");
                scanf("%d",&userinC);
                celToFaren = ((9.0/5.0)*userinC + 32);
                printf("Fahrenheit: %d\n\n",celToFaren);
            }
            else if(tempChoice == 99){goto start;}

            else printf("Please enter the correct choice. \n");
        }

        else if(category == 'C' || category == 'c')
        {
            whichMoneyChoose: 
            system("cls");
            whichmoney();
            if(currencyChoice == 1)
            {
                system("cls");
                nep();
                if(towhich == 1){
                    
                    printf("Please enter the Nrs amount: \n");
                    scanf("%f",&userinputNrs);
                    NrsToUsd = userinputNrs * 0.0075;
                    printf("USD: %f\n\n", NrsToUsd);
                
                }

                else if(towhich == 2)
                {
                    printf("Please enter the Nrs amount: \n");
                    scanf("%f",&userinputNrs);
                    NrsToEuro = userinputNrs * 0.0069;
                    printf("USD: %f\n\n", NrsToEuro);
                }

                else if(towhich == 3)
                {
                    printf("Please enter the Nrs amount: \n");
                    scanf("%f",&userinputNrs);
                    NrsToINR = userinputNrs * 0.63;
                    printf("USD: %f\n\n", NrsToINR);
                }

                else if(towhich == 99){goto whichMoneyChoose;}

                else printf("Please enter correct choice. \n");
            }

            else if(currencyChoice == 2)
            {
                system("cls");
                ind();
                if(towhich == 1){
                    
                    printf("Please enter the INR amount: \n");
                    scanf("%f",&userinputINR);
                    INRtoUSD = userinputINR * 0.012;
                    printf("USD: %f\n\n", INRtoUSD);
                
                }

                else if(towhich == 2)
                {
                    printf("Please enter the INR amount: \n");
                    scanf("%f",&userinputINR);
                    INRToEuro = userinputINR * 0.011073;
                    printf("Euro: %f\n\n", INRToEuro);
                }

                else if(towhich == 3)
                {
                    printf("Please enter the INR amount: \n");
                    scanf("%f",&userinputINR);
                    INRtoNrs = userinputINR * 1.600832;
                    printf("Nrs: %f\n\n", INRtoNrs);
                }

                else if(towhich == 99){goto whichMoneyChoose;}

                else printf("Please enter correct choice. \n");
            
            }

            else if(currencyChoice == 3)
            {
                system("cls");
                usa();
                if(towhich == 1){
                    
                    printf("Please enter the USD amount: \n");
                    scanf("%f",&userinputUSD);
                    USDToNrs = userinputUSD / 0.0075;
                    printf("Nrs: %f\n\n", USDToNrs);
                
                }

                else if(towhich == 2)
                {
                    printf("Please enter the USD amount: \n");
                    scanf("%f",&userinputUSD);
                    USDToEuro = userinputUSD * 0.92;
                    printf("Euro: %f\n\n", USDToEuro);
                }

                else if(towhich == 3)
                {
                    printf("Please enter the USD amount: \n");
                    scanf("%f",&userinputUSD);
                    USDToNrs = userinputUSD * 83.14;
                    printf("Nrs: %f\n\n", USDToINR);
                }
                else if(towhich == 99){goto whichMoneyChoose;}

                else printf("Please enter correct choice. \n");
            
            }
            else if(currencyChoice == 4)
            {
                system("cls");
                usa();
                if(towhich == 1){
                    
                    printf("Please enter the Euro amount: \n");
                    scanf("%f",&userinputEuro);
                    EuroToUSD = userinputEuro / 0.92;
                    printf("USD: %f\n\n", EuroToUSD);
                
                }

                else if(towhich == 2)
                {
                    printf("Please enter the Euro amount: \n");
                    scanf("%f",&userinputEuro);
                    EuroToNrs = userinputEuro / 0.0069;
                    printf("Nrs: %f\n\n", EuroToNrs);
                }

                else if(towhich == 3)
                {
                    printf("Please enter the Euro amount: \n");
                    scanf("%f",&userinputEuro);
                    EuroToINR = userinputEuro  / 0.011073;
                    printf("INR: %f\n\n", EuroToINR);
                }
                else if(towhich == 99){goto whichMoneyChoose;}

                else printf("Please enter correct choice. \n");
            
            }
            else if(currencyChoice == 99){goto start;}


            
        }

        else if(category == 'M' || category == 'm')
        {
            system("cls");
            masschange();
            if(massChoice == 1)
            {
                printf("Please enter the Kg amount: \n");
                scanf("%f",&userinpKg);
                KgTogm = userinpKg * formass[1];
                printf("Gram: %f\n\n",KgTogm);
            }   

            else if(massChoice == 2)
            {
                printf("Please enter the gm amount: \n");
                scanf("%f",&userinpgm);
                gmToKg = userinpgm * formass[2];
                printf("Kilogram: %f\n\n",gmToKg);
            }  

            else if(massChoice == 3)
            {
                printf("Please enter the Kg amount: \n");
                scanf("%f",&userinpKg);
                KgToP = userinpKg * formass[3];
                printf("Pound: %f\n\n",KgToP);
            }  

            else if(massChoice == 4)
            {
                printf("Please enter the Pound amount: \n");
                scanf("%f",&userinpP);
                PTOKg = userinpP * formass[4];
                printf("Kilogram: %f\n\n",PTOKg);
            }

            else if(massChoice == 5)
            {
                printf("Please enter the Pound amount: \n");
                scanf("%f",&userinpP);
                PToGm = userinpP * formass[5];
                printf("Gram: %f\n\n",PToGm);
            }  

            else if(massChoice == 6)
            {
                printf("Please enter the gm amount: \n");
                scanf("%f",&userinpgm);
                gmToP = userinpgm * formass[6];
                printf("Pound: %f\n\n",gmToP);
            } 
            else if(massChoice == 7)
            {
                printf("Please enter the Kg amount: \n");
                scanf("%f",&userinpKg);
                KgToT = userinpKg / formass[1];
                printf("Ton: %f\n\n",KgToT);
            }  
            else if(massChoice == 8)
            {
                printf("Please enter the Ton amount: \n");
                scanf("%f",&userinpTon);
                TonToKg = userinpTon * formass[1];
                printf("Kilogram: %f\n\n",TonToKg);
            }  
            else if(massChoice == 9)
            {
                printf("Please enter the Pound amount: \n");
                scanf("%f",&userinpP);
                PToTon = userinpP * 0.0004536;
                printf("Ton: %f\n\n",PToTon);
            }  
            else if(massChoice == 10)
            {
                printf("Please enter the Ton amount: \n");
                scanf("%f",&userinpTon);
                TonToP = userinpTon * 2204.623;
                printf("Pound: %f\n\n",TonToP);
            }  
            else if(massChoice == 99){goto start;}

            
            else printf("Please enter the correct choice. \n");      

        }

        else if(category == 't')
        {
            whichTimeChoose: 
            system("cls");
            whichtime();
            if(TimeChoice == 1)
            {
                system("cls");
                day();
                if(towhichT == 1){
                    
                    printf("Please enter number of days: \n");
                    scanf("%f",&userinpday);
                    daytohr = userinpday * 24;
                    printf("Hours: %f\n\n", daytohr);
                
                }

                else if(towhichT == 2)
                {
                    printf("Please enter number of days: \n");
                    scanf("%f",&userinpday);
                    daytomin = userinpday * 1440;
                    printf("Minutes: %f\n\n", daytomin);
                }

                else if(towhichT == 3)
                {
                    printf("Please enter number of days: \n");
                    scanf("%f",&userinpday);
                    daytosec = userinpday * 86400;
                    printf("Seconds: %f\n\n", daytosec);
                }

                else if(towhichT == 99){goto whichTimeChoose;}

                else printf("Please enter correct choice. \n");
            }

            else if(TimeChoice == 2)
            {
                system("cls");
                hour();
                if(towhichT == 1){
                    
                    printf("Please enter number Hours: \n");
                    scanf("%f",&userinphr);
                    hrtoday = userinphr / 24;
                    printf("Day: %f\n\n", hrtoday);
                
                }

                else if(towhichT == 2)
                {
                    printf("Please enter number Hours: \n");
                    scanf("%f",&userinphr);
                    hrtomin = userinphr * 60;
                    printf("Minutes: %f\n\n", hrtomin);
                }

                else if(towhichT == 3)
                {
                    printf("Please enter number Hours: \n");
                    scanf("%f",&userinphr);
                    hrtosec = userinphr * 60 * 60;
                    printf("Seconds: %f\n\n", hrtosec);
                }

                else if(towhichT == 99){goto whichTimeChoose;}

                else printf("Please enter correct choice. \n");
            
            }

            else if(TimeChoice == 3)
            {
                system("cls");
                min();
                if(towhichT == 1){
                    
                    printf("Please enter number of minutes: \n");
                    scanf("%f",&userinpmin);
                    mintoday = userinpmin / 1440;
                    printf("Days: %f\n\n", mintoday);
                
                }

                else if(towhichT == 2)
                {
                    printf("Please enter number of minutes: \n");
                    scanf("%f",&userinpmin);
                    mintohr = userinpmin / 60;
                    printf("Hours: %f\n\n", mintohr);
                }

                else if(towhichT == 3)
                {
                    printf("Please enter number of minutes: \n");
                    scanf("%f",&userinpmin);
                    mintosec = userinpmin * 60;
                    printf("Seconds: %f\n\n", mintosec);
                }
                else if(towhichT == 99){goto whichTimeChoose;}

                else printf("Please enter correct choice. \n");
            
            }
            else if(TimeChoice == 4)
            {
                system("cls");
                sec();
                if(towhichT == 1){
                    
                    printf("Please enter number of seconds: \n");
                    scanf("%f",&userinpsec);
                    sectoday = userinpsec / 86400;
                    printf("Days: %f\n\n", sectoday);
                
                }

                else if(towhichT == 2)
                {
                    printf("Please enter number of seconds: \n");
                    scanf("%f",&userinpsec);
                    sectohr = userinpsec / 3600;
                    printf("Hours: %f\n\n", sectohr);
                }

                else if(towhichT == 3)
                {
                    printf("Please enter number of seconds: \n");
                    scanf("%f",&userinpsec);
                    sectomin = userinpsec  / 60;
                    printf("Minutes: %f\n\n", sectomin);
                }
                else if(towhichT == 99){goto whichTimeChoose;}

                else printf("Please enter correct choice. \n");
            
            }
            else if(TimeChoice == 99){goto start;}


            
        }
        else if(category == 'X' || category == 'x')
        {
            system("cls");
            printf("!!!THANK YOU COME BACK AGAIN ANYTIME!!!");
            return 0;
        }
    }

    return 0;
    

}