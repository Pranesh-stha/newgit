//unit converter
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifdef _WIN32
    #include <stdlib.h>
    #define CLEAR_COMMAND "cls"
#else
    #include <unistd.h>
    #define CLEAR_COMMAND "clear"
#endif

char category; //category of the conversion choice
int tempChoice;
int currencyChoice;
int TimeChoice;
int massChoice;
float userinF; //farenheit input
float userinC; //celcius input
float farenToCel;
float celToFaren;
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

void clear()
{
    system(CLEAR_COMMAND);
}

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
    clear();
    printf("WELCOME TO UNIT CONVERTER!!!\n");
    while(1 == 1)
    {
        FILE* valuestore;
        valuestore = fopen("first.txt","a");
        categorychoose();

        if(category == 'T')
        {
            
            clear();
            tempchange();
            if(tempChoice == 1)
            {
                printf("Please enter the Fahrenheit degree: \n");
                scanf("%f",&userinF);
                farenToCel =  ((userinF-32) * (5.0/9.0));
                printf("Celcius: %f\n\n",farenToCel);
                fprintf(valuestore,"\nCelcius : %f",farenToCel);
                
                fclose(valuestore);
            }

            else if(tempChoice == 2)
            {
                printf("Please enter the Celcius degree: \n");
                scanf("%f",&userinC);
                celToFaren = ((9.0/5.0)*userinC + 32);
                printf("Fahrenheit: %f\n\n",celToFaren);
                fprintf(valuestore,"\nfarenhiet : %f",celToFaren);
                
                fclose(valuestore);TimeChoice;
            }
            else if(tempChoice == 99){goto start;}

            else printf("Please enter the correct choice. \n");
        }

        else if(category == 'C' || category == 'c')
        {
            whichMoneyChoose: 
            clear();
            whichmoney();
            if(currencyChoice == 1)
            {
                clear();
                nep();
                if(towhich == 1){
                    
                    printf("Please enter the Nrs amount: \n");
                    scanf("%f",&userinputNrs);
                    NrsToUsd = userinputNrs * 0.0075;
                    printf("USD: %f\n\n", NrsToUsd);
                    fprintf(valuestore,"\nUSD: %f",NrsToUsd);
                
                    fclose(valuestore);
                
                }

                else if(towhich == 2)
                {
                    printf("Please enter the Nrs amount: \n");
                    scanf("%f",&userinputNrs);
                    NrsToEuro = userinputNrs * 0.0069;
                    printf("Euro: %f\n\n", NrsToEuro);
                    fprintf(valuestore,"\n Euro: %f",NrsToEuro);
                
                    fclose(valuestore);
                }

                else if(towhich == 3)
                {
                    printf("Please enter the Nrs amount: \n");
                    scanf("%f",&userinputNrs);
                    NrsToINR = userinputNrs * 0.63;
                    printf("INR: %f\n\n", NrsToINR);
                    fprintf(valuestore,"\n INR: %f",NrsToINR);
                
                    fclose(valuestore);
                }

                else if(towhich == 99){goto whichMoneyChoose;}

                else printf("Please enter correct choice. \n");
            }

            else if(currencyChoice == 2)
            {
                clear();
                ind();
                if(towhich == 1){
                    
                    printf("Please enter the INR amount: \n");
                    scanf("%f",&userinputINR);
                    INRtoUSD = userinputINR * 0.012;
                    printf("USD: %f\n\n", INRtoUSD);
                    fprintf(valuestore,"\n USD: %f",INRtoUSD);
                
                    fclose(valuestore);
                
                }

                else if(towhich == 2)
                {
                    printf("Please enter the INR amount: \n");
                    scanf("%f",&userinputINR);
                    INRToEuro = userinputINR * 0.011073;
                    printf("Euro: %f\n\n", INRToEuro);
                    fprintf(valuestore,"\n Euro: %f",INRToEuro);
                
                    fclose(valuestore);
                }

                else if(towhich == 3)
                {
                    printf("Please enter the INR amount: \n");
                    scanf("%f",&userinputINR);
                    INRtoNrs = userinputINR * 1.600832;
                    printf("Nrs: %f\n\n", INRtoNrs);
                    fprintf(valuestore,"\n Nrs: %f",INRtoNrs);
                
                    fclose(valuestore);
                }

                else if(towhich == 99){goto whichMoneyChoose;}

                else printf("Please enter correct choice. \n");
            
            }

            else if(currencyChoice == 3)
            {
                clear();
                usa();
                if(towhich == 1){
                    
                    printf("Please enter the USD amount: \n");
                    scanf("%f",&userinputUSD);
                    USDToNrs = userinputUSD / 0.0075;
                    printf("Nrs: %f\n\n", USDToNrs);
                    fprintf(valuestore,"\n Nrs: %f",USDToNrs);
                
                    fclose(valuestore);
                
                }

                else if(towhich == 2)
                {
                    printf("Please enter the USD amount: \n");
                    scanf("%f",&userinputUSD);
                    USDToEuro = userinputUSD * 0.92;
                    printf("Euro: %f\n\n", USDToEuro);
                    fprintf(valuestore,"\n Euro: %f",USDToEuro);
                
                    fclose(valuestore);
                }

                else if(towhich == 3)
                {
                    printf("Please enter the USD amount: \n");
                    scanf("%f",&userinputUSD);
                    USDToINR = userinputUSD * 83.14;
                    printf("INR: %f\n\n", USDToINR);
                    fprintf(valuestore,"\n INR: %f",USDToINR);
                
                    fclose(valuestore);
                }
                else if(towhich == 99){goto whichMoneyChoose;}

                else printf("Please enter correct choice. \n");
            
            }
            else if(currencyChoice == 4)
            {
                clear();
                usa();
                if(towhich == 1){
                    
                    printf("Please enter the Euro amount: \n");
                    scanf("%f",&userinputEuro);
                    EuroToUSD = userinputEuro / 0.92;
                    printf("USD: %f\n\n", EuroToUSD);
                    fprintf(valuestore,"\n USD: %f",EuroToUSD);
                
                    fclose(valuestore);
                
                }

                else if(towhich == 2)
                {
                    printf("Please enter the Euro amount: \n");
                    scanf("%f",&userinputEuro);
                    EuroToNrs = userinputEuro / 0.0069;
                    printf("Nrs: %f\n\n", EuroToNrs);
                    fprintf(valuestore,"\n Nrs: %f",EuroToNrs);
                
                    fclose(valuestore);
                }

                else if(towhich == 3)
                {
                    printf("Please enter the Euro amount: \n");
                    scanf("%f",&userinputEuro);
                    EuroToINR = userinputEuro  / 0.011073;
                    printf("INR: %f\n\n", EuroToINR);
                    fprintf(valuestore,"\n INR: %f",EuroToINR);
                
                    fclose(valuestore);
                }
                else if(towhich == 99){goto whichMoneyChoose;}

                else printf("Please enter correct choice. \n");
            
            }
            else if(currencyChoice == 99){goto start;}


            
        }

        else if(category == 'M' || category == 'm')
        {
            clear();
            masschange();
            if(massChoice == 1)
            {
                printf("Please enter the Kg amount: \n");
                scanf("%f",&userinpKg);
                KgTogm = userinpKg * formass[1];
                printf("Gram: %f\n\n",KgTogm);
                fprintf(valuestore,"\n Gram: %f",KgTogm);
                
                fclose(valuestore);
            }   

            else if(massChoice == 2)
            {
                printf("Please enter the gm amount: \n");
                scanf("%f",&userinpgm);
                gmToKg = userinpgm * formass[2];
                printf("Kilogram: %f\n\n",gmToKg);
                fprintf(valuestore,"\n Kilogram: %f",gmToKg);
                
                fclose(valuestore);
            }  

            else if(massChoice == 3)
            {
                printf("Please enter the Kg amount: \n");
                scanf("%f",&userinpKg);
                KgToP = userinpKg * formass[3];
                printf("Pound: %f\n\n",KgToP);
                fprintf(valuestore,"\n Pound: %f",KgToP);
                
                fclose(valuestore);
            }  

            else if(massChoice == 4)
            {
                printf("Please enter the Pound amount: \n");
                scanf("%f",&userinpP);
                PTOKg = userinpP * formass[4];
                printf("Kilogram: %f\n\n",PTOKg);
                fprintf(valuestore,"\n Kilogram: %f",PTOKg);
                
                fclose(valuestore);
            }

            else if(massChoice == 5)
            {
                printf("Please enter the Pound amount: \n");
                scanf("%f",&userinpP);
                PToGm = userinpP * formass[5];
                printf("Gram: %f\n\n",PToGm);
                fprintf(valuestore,"\n Gram: %f",PToGm);
                
                fclose(valuestore);
            }  

            else if(massChoice == 6)
            {
                printf("Please enter the gm amount: \n");
                scanf("%f",&userinpgm);
                gmToP = userinpgm * formass[6];
                printf("Pound: %f\n\n",gmToP);
                fprintf(valuestore,"\n Pound: %f",gmToP);
                
                fclose(valuestore);
            } 
            else if(massChoice == 7)
            {
                printf("Please enter the Kg amount: \n");
                scanf("%f",&userinpKg);
                KgToT = userinpKg / formass[1];
                printf("Ton: %f\n\n",KgToT);
                fprintf(valuestore,"\n Ton: %f",KgToT);
                
                fclose(valuestore);
            }  
            else if(massChoice == 8)
            {
                printf("Please enter the Ton amount: \n");
                scanf("%f",&userinpTon);
                TonToKg = userinpTon * formass[1];
                printf("Kilogram: %f\n\n",TonToKg);
                fprintf(valuestore,"\n Kilogram: %f",TonToKg);
                
                fclose(valuestore);
            }  
            else if(massChoice == 9)
            {
                printf("Please enter the Pound amount: \n");
                scanf("%f",&userinpP);
                PToTon = userinpP * 0.0004536;
                printf("Ton: %f\n\n",PToTon);
                fprintf(valuestore,"\n Ton: %f",PToTon);
                
                fclose(valuestore);
            }  
            else if(massChoice == 10)
            {
                printf("Please enter the Ton amount: \n");
                scanf("%f",&userinpTon);
                TonToP = userinpTon * 2204.623;
                printf("Pound: %f\n\n",TonToP);
                fprintf(valuestore,"\n Pound: %f",TonToP);
                
                fclose(valuestore);
            }  
            else if(massChoice == 99){goto start;}

            
            else printf("Please enter the correct choice. \n");      

        }

        else if(category == 't')
        {
            whichTimeChoose: 
            clear();
            whichtime();
            if(TimeChoice == 1)
            {
                clear();
                day();
                if(towhichT == 1){
                    
                    printf("Please enter number of days: \n");
                    scanf("%f",&userinpday);
                    daytohr = userinpday * 24;
                    printf("Hours: %f\n\n", daytohr);
                    fprintf(valuestore,"\n Hours: %f",daytohr);
                
                    fclose(valuestore);
                
                }

                else if(towhichT == 2)
                {
                    printf("Please enter number of days: \n");
                    scanf("%f",&userinpday);
                    daytomin = userinpday * 1440;
                    printf("Minutes: %f\n\n", daytomin);
                    fprintf(valuestore,"\n Minutes: %f",daytomin);
                
                    fclose(valuestore);
                }

                else if(towhichT == 3)
                {
                    printf("Please enter number of days: \n");
                    scanf("%f",&userinpday);
                    daytosec = userinpday * 86400;
                    printf("Seconds: %f\n\n", daytosec);
                    fprintf(valuestore,"\n Seconds: %f",daytosec);
                
                    fclose(valuestore);
                }

                else if(towhichT == 99){goto whichTimeChoose;}

                else printf("Please enter correct choice. \n");
            }

            else if(TimeChoice == 2)
            {
                clear();
                hour();
                if(towhichT == 1){
                    
                    printf("Please enter number Hours: \n");
                    scanf("%f",&userinphr);
                    hrtoday = userinphr / 24;
                    printf("Day: %f\n\n", hrtoday);
                    fprintf(valuestore,"\n Day: %f",hrtoday);
                
                    fclose(valuestore);
                
                }

                else if(towhichT == 2)
                {
                    printf("Please enter number Hours: \n");
                    scanf("%f",&userinphr);
                    hrtomin = userinphr * 60;
                    printf("Minutes: %f\n\n", hrtomin);
                    fprintf(valuestore,"\n Minutes: %f",hrtomin);
                
                    fclose(valuestore);
                }

                else if(towhichT == 3)
                {
                    printf("Please enter number Hours: \n");
                    scanf("%f",&userinphr);
                    hrtosec = userinphr * 60 * 60;
                    printf("Seconds: %f\n\n", hrtosec);
                    fprintf(valuestore,"\n Seconds: %f",hrtosec);
                
                    fclose(valuestore);
                }

                else if(towhichT == 99){goto whichTimeChoose;}

                else printf("Please enter correct choice. \n");
            
            }

            else if(TimeChoice == 3)
            {
                clear();
                min();
                if(towhichT == 1){
                    
                    printf("Please enter number of minutes: \n");
                    scanf("%f",&userinpmin);
                    mintoday = userinpmin / 1440;
                    printf("Days: %f\n\n", mintoday);
                    fprintf(valuestore,"\n Days: %f",mintoday);
                
                    fclose(valuestore);
                
                }

                else if(towhichT == 2)
                {
                    printf("Please enter number of minutes: \n");
                    scanf("%f",&userinpmin);
                    mintohr = userinpmin / 60;
                    printf("Hours: %f\n\n", mintohr);
                    fprintf(valuestore,"\n Hours: %f",mintohr);
                
                    fclose(valuestore);
                }

                else if(towhichT == 3)
                {
                    printf("Please enter number of minutes: \n");
                    scanf("%f",&userinpmin);
                    mintosec = userinpmin * 60;
                    printf("Seconds: %f\n\n", mintosec);
                    fprintf(valuestore,"\n Seconds: %f",mintosec);
                
                    fclose(valuestore);
                }
                else if(towhichT == 99){goto whichTimeChoose;}

                else printf("Please enter correct choice. \n");
            
            }
            else if(TimeChoice == 4)
            {
                clear();
                sec();
                if(towhichT == 1){
                    
                    printf("Please enter number of seconds: \n");
                    scanf("%f",&userinpsec);
                    sectoday = userinpsec / 86400;
                    printf("Days: %f\n\n", sectoday);
                    fprintf(valuestore,"\n Days: %f",sectoday);
                
                    fclose(valuestore);
                
                }

                else if(towhichT == 2)
                {
                    printf("Please enter number of seconds: \n");
                    scanf("%f",&userinpsec);
                    sectohr = userinpsec / 3600;
                    printf("Hours: %f\n\n", sectohr);
                    fprintf(valuestore,"\n Hours: %f",sectohr);
                
                    fclose(valuestore);
                }

                else if(towhichT == 3)
                {
                    printf("Please enter number of seconds: \n");
                    scanf("%f",&userinpsec);
                    sectomin = userinpsec  / 60;
                    printf("Minutes: %f\n\n", sectomin);
                    fprintf(valuestore,"\n Minutes: %f",sectomin);
                
                    fclose(valuestore);
                }
                else if(towhichT == 99){goto whichTimeChoose;}

                else printf("Please enter correct choice. \n");
            
            }
            else if(TimeChoice == 99){goto start;}


            
        }
        else if(category == 'X' || category == 'x')
        {
            clear();
            printf("!!!THANK YOU COME BACK AGAIN ANYTIME!!!");
            return 0;
        }
        else{
            
            goto start;

        }
    }

    return 0;
    

}
