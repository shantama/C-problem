 mobile_No:
                printf("enter your 11 digits phone number : ");
                scanf("%s",&pointer->phoneNumber);
                int length = strlen(pointer->phoneNumber);
                if(length !=11)
                {
                    printf("Invalid phone number!Please ,give valid phone number.\n");
                    goto mobile_No;
                }
                for(int i=0;pointer->phoneNumber[i]!=NULL;i++)
                {
                    if(pointer->phoneNumber[1]<'0' || pointer->phoneNumber[i]>'9')
                    {
                        printf("Invalid phone number!please,give valid phone number.\n");
                    }
                    goto mobile_No;
                }
                token--;
                serial=20-token;
                pointer->serial=serial;
                printf("Your appointment is booked successfully.\n");
                printf("Your serial no : %d",pointer->serial);
                printf("Enter any key to continue : ");
                scanf("%c",&key);
                if(key>=0)
                {
                    return;
                }
        }
                while(pointer->next != NULL)
                {
                    pointer=pointer->next;
                }
