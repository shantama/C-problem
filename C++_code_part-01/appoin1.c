/*C Program to implement Token System for Doctor’s Clinic*/

/*Importing C Libraries*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

/*Create Structure named patient that contains information of token numbers, patient name, mobile no. and pointer next*/

struct patient
{
int tnumber;
char pname[30];
char pmobile[11];
struct patient *next;
};
typedef struct patient patient;
int token = 20;                          /*Total 20 Tokans*/
patient *head;

/*User-defined function PatientInformation that takes input data of patients like name & mobile no and assign a token number (1-20) after appointment booked successfully*/

void PatientInformation(patient *pointer)
{
    int tnumber;
    char key;
    /*First check token is available or not. If all 20 appointment are booked then token == 0 and display following message*/
    if(token==0)
    {
        printf("\n\n\n Sorry! Today's all Appointments are full.\n\n Try to book an appointment for Tomorrow Early Morning at 8 AM\n\n\n");
    }
    /*Otherwise ask to enter the patient data like name and mobile number*/
    else
    {
        if(pointer==NULL)
        {
            head = (patient*)malloc(sizeof(patient));
            pointer = head;
            pointer->next = NULL;
            read:                                         /*Lable read*/
            printf("\n Name of the Patient: ");
            getchar();
            gets(pointer->pname);                     /*Take patient name as input string*/
            mobile_no:
            printf("\n Mobile Number of the Patient: ");
            gets(pointer->pmobile);                  /*Take patient mobile number as input*/
            int length = strlen(pointer->pmobile);
                                      /*Store the lengthe of mobile no. to variable length*/
            if(length != 10)
         /*Check the length of mobile no. is 10 or not. If not 10 then display error message*/
            {
               printf("Invalid Mobile Number. Please, give valid mobile number\n");
               goto mobile_no;
            }
           int i;
           for(i = 0; pointer -> pmobile[i]!=NULL; i++)
           {
            if(pointer->pmobile[i]<'0' || pointer->pmobile[i]>'9')
            {
                 printf("Invalid Mobile Number. Please, give valid mobile number\n");
                 goto mobile_no;
            }
           }
        token--;
        tnumber = 20 - token;
        pointer->tnumber = tnumber;
        printf("\n\n Your Appointment with Doctor is Booked Successfully for Today.\n");
                       /*Display message if appointment with doctor is booked successfully*/
        printf("\n Your Token Number is %d.\n\n\n", pointer->tnumber);
                                           /*Display assigned token number of appointment*/
        printf("\n\n Press any key to continue.....");
        scanf("%c", &key);
        if(key >= 0)
        return;                             /*Press any key to return back to main menu*/
        }
        while(pointer->next != NULL)                          /*Pointer moves to next*/
        {
            pointer = pointer->next;
        }
        pointer->next = (patient*)malloc(sizeof(patient));
        pointer = pointer->next;
        pointer->next = NULL;
        goto read;                 /*Jump to lable read to avoid repeatation of code*/
    }
}

/*User-defined function Display. This function displays the appointment list with all appointments booked for today*/

void Display(patient *pointer)
{
    printf("\n############################ Today's Appointment List ############################\n\n");
    /*If no appintment is booked till time then it display following message*/
    if(pointer == NULL)
    {
        printf("\n\n\n No Appointment Booked for Today Yet!!!\n\n If you want to book Today's appointment with Doctor please Proceed..... \n\n\n");
    }
    /*If some appontments are booked then display all appointments with thire token numbers, patient name and mobile numbers*/
    while(pointer != NULL)
    {
        printf("\n\nToken Number - %d: ", pointer->tnumber);
        printf("%s (Mobile No.: %s)\n", pointer->pname, pointer->pmobile);
        pointer = pointer->next;
    }
}
int main()                      /*Main Function of C*/
{
    head = NULL;               /*Initilly assign head as NULL*/
    char n;                /*char n to take input whether option 1 or option2 from the user*/
    while(1)        /*By default control comes back here after completion  of any operation*/
    {
      main_menu:               /*Lable main_menu*/
        printf("\n############################ Main Menu ################################\n\n");
        printf("Press 1 to Book a Doctor's Appointment \n\nPress 2 to Display Today's Appointment List\n\n\n");
        scanf(" %c", &n);     /*Take input from the user*/
            if(n == '1')
            {
              PatientInformation(head);
                           /*If option 1 is selected call function PatientInformation(head)*/
            }
            else if(n == '2')
            {
              Display(head);
                          /*If option 2 is selected call function Display(head)*/
            }
            else       /*If other than options 1 & 2 selected the following error message displayed and jump to label main_menu*/
            {
              printf("\nPressed Wrong Option Key!!!!\n\nPlease, Select Right Option\n\n");
              goto main_menu;
            }
    }
return 0;
}



