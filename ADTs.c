/*This C program will show sorting searching of students part time and Full-Time. Program contains Option of names. Names are stroed and user Just have to choose the option. 
They will sort and seach surnames. 
Name:- Raghav Bansal (D20123625)
Date:- 19/04/2021

Compiler used:- VSD
*/
#include <stdio.h>
#include <string.h>

//Universal Declartion
#define SIZE 20
#define DT265A_Student 13
#define DT265C_Student 9
#define DT265B_Student 14
#define DT8900_Student 6

//Structure template
struct Students
{
    char name[SIZE];
}

//temperorary value...Will be used for swap in Bubble sort
temp,
    temp1, temp2, temp3;

//main
int main()
{ //start main

    //structure variables
    //these variable are named by their Module code.

    struct Students DT265A[DT265A_Student];
    struct Students DT265C[DT265C_Student];
    struct Students DT265B[DT265B_Student];
    struct Students DT8900[DT8900_Student];
    struct Students mix[100];

    //initializing
    int i, j, k, m, n, q, r;
    int main_list = 0;
    int option;

    //for searching the name used in binary sort in case 4
    char Name_Search[40];

    //DT265A Student names
    //All the surnames.
    //13 students total
    strcpy(DT265A[0].name, "Bansal");
    strcpy(DT265A[1].name, "Khanna");
    strcpy(DT265A[2].name, "Venom");
    strcpy(DT265A[3].name, "Garg");
    strcpy(DT265A[4].name, "Mandal");
    strcpy(DT265A[5].name, "Dixit");
    strcpy(DT265A[6].name, "Bing");
    strcpy(DT265A[7].name, "Buffay");
    strcpy(DT265A[8].name, "Tribiani");
    strcpy(DT265A[9].name, "Geller");
    strcpy(DT265A[10].name, "Rio");
    strcpy(DT265A[11].name, "Kudrow");
    strcpy(DT265A[12].name, "Perry");

    //DT265C Student names
    //9 Students Part time
    strcpy(DT265C[0].name, "LeBlanc");
    strcpy(DT265C[1].name, "Miller");
    strcpy(DT265C[2].name, "Mitchell");
    strcpy(DT265C[3].name, "Coleman");
    strcpy(DT265C[4].name, "Taylor");
    strcpy(DT265C[5].name, "Long");
    strcpy(DT265C[6].name, "Cooper");
    strcpy(DT265C[7].name, "Butler");
    strcpy(DT265C[8].name, "Stokes");

    //DT265B Student names
    //14 students Full time
    strcpy(DT265B[0].name, "Patterson");
    strcpy(DT265B[1].name, "Murphy");
    strcpy(DT265B[2].name, "Reed");
    strcpy(DT265B[3].name, "posy");
    strcpy(DT265B[4].name, "Obrien");
    strcpy(DT265B[5].name, "Brown");
    strcpy(DT265B[6].name, "Gracia");
    strcpy(DT265B[7].name, "Robinson");
    strcpy(DT265B[8].name, "Price");
    strcpy(DT265B[9].name, "Walker");
    strcpy(DT265B[10].name, "Cox");
    strcpy(DT265B[11].name, "Aniston");
    strcpy(DT265B[12].name, "Green");
    strcpy(DT265B[13].name, "Hall");

    //DT8900 Student names
    strcpy(DT8900[0].name, "Collins");
    strcpy(DT8900[1].name, "Nelson");
    strcpy(DT8900[2].name, "Rivera");
    strcpy(DT8900[3].name, "Nelson");
    strcpy(DT8900[4].name, "Torres");
    strcpy(DT8900[5].name, "Harris");

    //Using do-while loop for menu
    //This will go in loop untill user stops it by pressing 5
    do
    {
        printf("\n\nSort and Search Program of students\n");
        printf("\n1.Display the four lists.");
        printf("\n2.Display the full list sorted by surname.");
        printf("\n3.Display full time students.");
        printf("\n4.Search for a specific student by surname.");
        printf("\n5. Exit");
        printf("\nChoose Your option: ");
        scanf("%d", &option);

        //Switch case
        switch (option)
        {
            //Case 1 will show all the Part time and full time students one by one. They are also designed by some stars to give them a look and they will look seperate
        case 1:
        {
            //DT265A student. They are part time Deploma students
            printf("\n\nDT265A - part-time Higher Diploma.");

            for (i = 0; i < DT265A_Student; i++)
            {
                printf("\n\t ****************");
                printf("\n \t*     %-10s* ", DT265A[i].name);
            } //end for
            printf("\n\t****************");

            //DT265C students. they are part time studdents
            printf("\n\n\nDT265C - part-time Master's Qualifier.");

            for (j = 0; j < DT265C_Student; j++)
            {
                printf("\n\t ****************");
                printf("\n \t*     %-10s* ", DT265C[j].name);
            } //end for
            printf("\n\t****************");

            //DT265B students, They are full time students.
            printf("\n\n\nDT265B - full-time Master's Qualifiers.");
            //Sorted Data after rearragement

            for (m = 0; m < DT265B_Student; m++)
            {
                printf("\n\t ****************");
                printf("\n \t*     %-10s* ", DT265B[m].name);
            } //end for
            printf("\n\t****************");

            //DT8900 students, they are also full time students.
            printf("\n\nDT8900 - full-time International Master's Qualifiers.");

            for (q = 0; q < DT8900_Student; q++)
            {
                printf("\n\t ****************");
                printf("\n \t*     %-10s* ", DT8900[q].name);
            } //end for
            printf("\n\t****************");

            break;
        } //end case 1

        //case 2 will combined the whole list and sort all the unsorted names from the students surnames.
        //USing Bubble Sort for sorting them Alphabetically from A-Z, a-z
        case 2:
        {
            //All the unsorted list
            printf("\nUnsorted List ");
            for (i = 0; i < 13; i++)
            {
                mix[main_list] = DT265A[i];
               printf("\n\t ****************");
                printf("\n \t*     %-10s* ", mix[main_list].name);
                main_list++;
            } //end for

            for (j = 0; j < 9; j++)
            {
                mix[main_list] = DT265C[j];
                printf("\n\t ****************");
                printf("\n \t*     %-10s* ", mix[main_list].name);
                main_list++;
            } //end for

            for (m = 0; m < 14; m++)
            {
                mix[main_list] = DT265B[m];
                printf("\n\t ****************");
                printf("\n \t*     %-10s* ", mix[main_list].name);
                main_list++;
            } //end for

            for (q = 0; q < 6; q++)
            {
                mix[main_list] = DT8900[q];
               printf("\n\t ****************");
                printf("\n \t*     %-10s* ", mix[main_list].name);
                main_list++;
            } //end for
            printf("\n\t****************");

            //Sorting the full list by surname using Bubblesort
            printf("*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/");
            printf("\n  Sorted List  ");
            for (m = 0; m < 42; m++)
            {
                for (n = m + 1; n < 42; n++)
                {
                    if (strcmp(mix[m].name, mix[n].name) > 0)
                    {
                        temp2 = mix[m];
                        mix[m] = mix[n];
                        mix[n] = temp2;
                    } //end if
                }     //end inner for
            }         //end for

            //Sorted data after rearrangement
            printf("\n\nSorted list by Surname.");
            for (m = 0; m < 42; m++)
            {
                printf("\n\t ****************");
                printf("\n \t*     %-10s* ", mix[m].name);
            } //end for
            printf("\n\t****************");

            break;
        } //end case 2

        //case 3 will show only full time students i.e. DT265B and DT8900 students.
        case 3:
        {

            printf("\nThe list of all full time students are: \n");
            

            printf("\nDT265B - full time Mater's Qualifiers'");
            for (m = 0; m < DT265B_Student; m++)
            {
                printf("\n\t ****************");
                printf("\n \t*     %-10s* ", DT265B[m].name);
            } //end for
            printf("\n\t****************");

           

            printf("\nDT8900 - full time International Mater's Qualifiers'");
            for (q = 0; q < DT8900_Student; q++)
            {
                printf("\n\t ****************");
                printf("\n \t*     %-10s* ", DT8900[q].name);
            } //end for
            printf("\n\t****************");

           break;

        } //end case

        //case 4, in this Binary Search is used for seraching sorted surnames, This will ask user for surname and then it'll search and will show whether its in the list or not.
        case 4:
        {
            //using flaf here for true and false chances 0 and 1
            int flag;

            //Command to search for a student
            printf("\nEnter a surname or partial surname to search for : ");
            scanf("%s", &Name_Search);
            printf("\n");

            //String Comparing for output
            for (m = 0; m < 42; m++)
            {
                if (strcmp(mix[m].name, Name_Search) == 0)
                {
                    printf("\nFound This name: %s", Name_Search);
                    flag = 0;
                    break;
                } //end if

            } //end for
            if (flag == 0)
            {
                printf("\nNot Found,Try Agian!!!");
            } //end if

            break;
        }

        case 0:
        {
            printf("\nThanks for Using the program...");

            return 0;
            break;
        } //end case 0

        default:
        {
            printf("\nEnter valid number(1-5). Please try again");
        } //end default case

        } //end switch
    } while (option != 0);

} //end main