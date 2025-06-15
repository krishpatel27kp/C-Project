#include <stdio.h>
#include <string.h>

void seat_booking(int person)
{
    int rows = 7, cols = 10;
    int r, c;
    int Seat[rows][cols];

    printf("0 --> Available\n");
    printf("1 --> Booked\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            Seat[i][j] = 0;
            printf("%d ", Seat[i][j]);
        }
        printf("\n");
    }

    while (person > 0)
    {
        printf("Enter Your Seat_no like array(ex. 3 5) :");
        scanf("%d %d", &r, &c);

        if (Seat[r - 1][c - 1] == 1)
        {
            printf("This Seat is Booked ....\nPlease try again.....\n");
        }
        else
        {
            Seat[r - 1][c - 1] = 1;
            printf("Available Seats....\n");
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    printf("%d ", Seat[i][j]);
                }
                printf("\n");
            }
            person--;
        }
        
    }

    printf("Thank you for using the movie hall booking system!\n");
}
typedef struct
{
    char First_Name[10],Last_Name[10], Email[20];
    int Phone_Number;
    int Customer_Id;
} Customer;

typedef struct
{
    int Person;
    float Price, Disscount;
    float Total_amount, Total_pay;
    char Seat_No[4], Show_Time[20], Movie[30];
    Customer c1;
} Movie_Ticket;

Movie_Ticket m1[2];

void Login()
{
    fflush(stdin);
    printf("First Name : ");
    gets(m1[0].c1.First_Name);

    printf("Last Name : ");
    gets(m1[0].c1.Last_Name);
    fflush(stdin);

    printf("Phone number  : ");
    scanf("%d", &m1[0].c1.Phone_Number);
    fflush(stdin);

    printf("Email : ");
    gets(m1[0].c1.Email);
    fflush(stdin);

    printf("Enter number of person : ");
    scanf("%d", &m1[0].Person);
}

void Shows(float price, char time[], int show_no)
{
    m1[0].Price = price;
    strcpy(m1[0].Show_Time, time);
    printf("\nYou select show %d.\n\n", show_no);
    printf("..........Select Your seat.........\n");
}

void Movies_Show()
{
    int M_choice, D_choice, S_choice;
    printf("Select your date\n");
    printf("1..........Date : 08/07/2025 , Day : Sunday\n");
    printf("2..........Date : 09/07/2025 , Day : Monday\n");
    printf("3..........Date : 10/07/2025 , Day : Tuesday\n");
    printf("4..........Date : 11/07/2025 , Day : Wednesday\n");
    printf("5..........Date : 12/07/2025 , Day : Thrusday\n");
    printf("6..........Date : 13/07/2025 , Day : Friday\n");
    printf("7..........Date : 14/07/2025 , Day : Saturday\n");
    printf("Enter Your choice :");
    scanf("%d", &D_choice);
    if(D_choice > 7 || D_choice <= 0){
        printf("Enter Valid Choice...\n");
        return 0;
    }

    printf(".......Enter Your Login Details.......\n");
    Login();

    printf("..........Available Movie Shows..........\n");
    printf("1...Housefull-5A\n");
    printf("2...Housefull-5B\n");
    printf("3...Thug Life\n");
    printf("4...Bharam\n");
    printf("5...Shubhchintak\n");
    printf("6...Bhool Chuk Maff\n");
    printf("Enter Your Choice :");
    scanf("%d", &M_choice);
    switch (M_choice)
    {
    case 1:
        strcpy(m1[0].Movie, "Housefull-5A");
        printf("<<<<<<<<<<< Housefull-5A Shows >>>>>>>>>>\n\n");
        printf("Shows   :-    1        2         3        4        5        6 \n");
        printf("Timings :-  8:30AM   11:30AM   1:45PM   3:15PM   7:30PM   9:45PM\n");
        printf("Price   :-   120      150       160      175      190       220\n\n");
        printf("Enter Show Number : ");
        scanf("%d", &S_choice);
        switch (S_choice)
        {
        case 1:
            Shows(120, "8 : 30 AM", 1);
            break;
        case 2:
            Shows(150, "11 : 30 AM", 2);
            break;
        case 3:
            Shows(160, "1 : 45 PM", 3);
            break;
        case 4:
            Shows(175, "3 : 15 PM", 4);
            break;
        case 5:
            Shows(190, "7 : 30 PM", 5);
            break;
        case 6:
            Shows(220, "9 : 45 PM", 6);
            break;
        default:
            printf("Enter Valid Input");
            break;
        }
        break;

    case 2:
        strcpy(m1[0].Movie, "Housefull-5B");
        printf("<<<<<<<<<<< Housefull-5B Shows >>>>>>>>>>\n\n");
        printf("Shows   :-    1        2         3        4        5        6 \n");
        printf("Timings :-  9:40AM   11:15AM   2:45PM   5:15PM   8:30PM   10:15PM\n\n");
        printf("Price   :-   120      150       160      175      190       220\n");
        printf("Enter Show Number : ");
        scanf("%d", &S_choice);
        switch (S_choice)
        {
        case 1:
            Shows(120, "9 : 40 AM", 1);
            break;
        case 2:
            Shows(150, "11 : 15 AM", 2);
            break;
        case 3:
            Shows(160, "2 : 45 PM", 3);
            break;
        case 4:
            Shows(175, "5 : 15 PM", 4);
            break;
        case 5:
            Shows(190, "8 : 30 PM", 5);
            break;
        case 6:
            Shows(220, "10 : 15 PM", 6);
            break;
        default:
            printf("Enter Valid Input");
            break;
        }
        break;

    case 3:
        strcpy(m1[0].Movie, "Thug Life");
        printf("<<<<<<<<<<< Thug Life Shows >>>>>>>>>>\n\n");
        printf("Shows   :-    1        2         3        4        5        6 \n");
        printf("Timings :-  9:50AM   11:30AM   2:15PM   5:45PM   8:15PM   10:30PM\n");
        printf("Price   :-   120      150       160      175      190       220\n\n");
        printf("Enter Show Number : ");
        scanf("%d", &S_choice);
        switch (S_choice)
        {
        case 1:
            Shows(120, "9 : 50 AM", 1);
            break;
        case 2:
            Shows(150, "11 : 30 AM", 2);
            break;
        case 3:
            Shows(160, "2 : 15 PM", 3);
            break;
        case 4:
            Shows(175, "5 : 45 PM", 4);
            break;
        case 5:
            Shows(190, "8 : 15 PM", 5);
            break;
        case 6:
            Shows(220, "10 : 30 PM", 6);
            break;
        default:
            printf("Enter Valid Input");
            break;
        }
        break;

    case 4:
        strcpy(m1[0].Movie, "Bharam");
        printf("<<<<<<<<<<< Bharam Shows >>>>>>>>>>\n\n");
        printf("Shows   :-    1        2         3        4        5        6 \n");
        printf("Timings :-  8:30AM   11:30AM   1:45PM   3:15PM   7:30PM   9:45PM\n");
        printf("Price   :-   120      150       160      175      190       220\n\n");

        printf("Enter Show Number : ");
        scanf("%d", &S_choice);
        switch (S_choice)
        {
        case 1:
            Shows(120, "8 : 30 AM", 1);
            break;
        case 2:
            Shows(150, "11 : 30 AM", 2);
            break;
        case 3:
            Shows(160, "1 : 45 PM", 3);
            break;
        case 4:
            Shows(175, "3 : 15 PM", 4);
            break;
        case 5:
            Shows(190, "7 : 30 PM", 5);
            break;
        case 6:
            Shows(220, "9 : 45 PM", 6);
            break;
        default:
            printf("Enter Valid Input");
            break;
        }
        break;
    case 5:
        strcpy(m1[0].Movie, "Shubhchintak");
        printf("<<<<<<<<<<< Shubhchintak Shows >>>>>>>>>>\n\n");
        printf("Shows   :-    1        2         3        4        5        6 \n");
        printf("Timings :-  8:30AM   11:30AM   1:45PM   3:15PM   7:30PM   9:45PM\n");
        printf("Price   :-   120      150       160      175      190       220\n\n");
        printf("Enter Show Number : ");
        scanf("%d", &S_choice);
        switch (S_choice)
        {
        case 1:
            Shows(120, "8 : 30 AM", 1);
            break;
        case 2:
            Shows(150, "11 : 30 AM", 2);
            break;
        case 3:
            Shows(160, "1 : 45 PM", 3);
            break;
        case 4:
            Shows(175, "3 : 15 PM", 4);
            break;
        case 5:
            Shows(190, "7 : 30 PM", 5);
            break;
        case 6:
            Shows(220, "9 : 45 PM", 6);
            break;
        default:
            printf("Enter Valid Input");
            break;
        }
        break;

    case 6:
        strcpy(m1[0].Movie, "Bhool Chuk Maff");
        printf("<<<<<<<<<<< Bhool Chuk Maff Shows >>>>>>>>>>\n\n");
        printf("Shows   :-    1        2         3        4        5        6 \n");
        printf("Timings :-  9:40AM   11:15AM   2:45PM   5:15PM   8:30PM   10:15PM\n");
        printf("Price   :-   120      150       160      175      190       220\n\n");
        printf("Enter Show Number : ");
        scanf("%d", &S_choice);
        switch (S_choice)
        {
        case 1:
            Shows(120, "9 : 40 AM", 1);
            break;
        case 2:
            Shows(150, "11 : 15 AM", 2);
            break;
        case 3:
            Shows(160, "2 : 45 PM", 3);
            break;
        case 4:
            Shows(175, "5 : 15 PM", 4);
            break;
        case 5:
            Shows(190, "8 : 30 PM", 5);
            break;
        case 6:
            Shows(220, "10 : 15 PM", 6);
            break;
        default:
            printf("Enter Valid Input");
            break;
        }
        break;

    default:
        printf("......Enter valid input......\n");
        break;
    }
}

int main()
{
    system("cls");
    Movies_Show();
    seat_booking(m1[0].Person);
    printf(".......Conform Your Seats......\n");

    printf("\nMovie_Name: %s\n", m1[0].Movie);
    printf("Movie Time : %s\n", m1[0].Show_Time);
    printf("Ticket Price : %.2f\n", m1[0].Price);
    printf("No_Tickets : %d\n\n", m1[0].Person);
    printf("Total Price : %.2f X %d = %.2f\n", m1[0].Price, m1[0].Person, m1[0].Price * m1[0].Person);
    while (1)
    {
        printf("Enter your amount : ");
        scanf("%f", &m1[0].Total_pay);

        if (m1[0].Total_pay >= m1[0].Price * m1[0].Person)
        {
            printf("\n**************payment recipt ****************\n");
            printf("\nName : %s %s", m1[0].c1.First_Name,m1[0].c1.Last_Name);
            printf("\nEmai : %s", m1[0].c1.Email);
            printf("\nPh.No : %d\n", m1[0].c1.Phone_Number);

            printf("Person_no\tName\t\t  Price\n");
            for (int i = 0; i < m1[0].Person; i++)
            {
                printf("%d.\t\t%s", i + 1, m1[0].c1.Last_Name);
                printf("\t\t%.2f\n", m1[0].Price);
            }
            printf("Total\t\t\t\t%.2f\n\n", m1[0].Total_pay);
            printf("................Payment completed................\n");
            break;
        }
        else
        {
            printf("Please try again ,Payment not completed.\n");
        }
    }

    return 0;
}
