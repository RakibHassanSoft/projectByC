/*
Dummy data

1A Rakib rakib111 230000 1
1B sakib sakib353 456546 2
1C Rasib rasib111 246346 3
1D Rayhan rayhan111 280000 4
3
2A RakibalHassan rakib111 230000 1
2B HasibAlhassan hasib111 670000 0
2C sakibalHassan sakib111 34000 1
4
3A Hassan hass2423 68000000 
3B alHassan sakib3435 345346 
3C kibalHassan rakib345634 6789000 
3D kibalHas dslf35345 5600000 

*/


#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Employee
{
    char ID[5];
    char Name[20];
    char password[20];
    int Salary;
    int Level;
};

struct Chef
{
    char ID[5];
    char password[20];
    char Name[20];
    int Salary;
};

struct Manager
{
    char ID[5];
    char Name[20];
    char password[20];
    int Salary;
    int senior; // 1 true 0 false
};

int main()
{
    // Declare variables
    int NumberOfEmp, NumberOfManager, NumberOfChef;

    // Declare arrays outside the switch statement
    struct Employee Emp[100];
    struct Manager Man[100];
    struct Chef Chefs[100];

    while (1)
    {
        printf("1. Log in\n");
        printf("2. Give data\n");
        printf("3. Exit\n");
        printf("Enter your option:");

        int option;
        scanf("%d", &option);

        switch (option)
        {
        case 1:
        {
            int loginOption;
            printf("\n1. Log in as Manager\n");
            printf("2. Log in as Employee\n");
            printf("3. Log in as Chef\n");
            printf("4. Back to Main Menu\n");
            printf("Enter your option:");
            scanf("%d", &loginOption);
            if (loginOption == 1)
            {
                printf("Give your ID:\n");
                char idMan[3];
                scanf("%s", &idMan);
                printf("Give your password:\n");
                char passMan[20];
                scanf("%s", &passMan);

                // printf("%s %s \n", idMan, passMan);
                for (int i = 0; i < NumberOfManager; i++)
                {
                    int res1 = strcmp(Man[i].ID, idMan);
                    int res2 = strcmp(Man[i].password, passMan);
                    int manVeryfy = 0;
                    if (res1 == 0 && res2 == 0)
                    {
                        manVeryfy = 1;
                        printf("Log in succesfull:\n");
                        while (1)
                        {
                            printf("1.See profile detaile:\n");
                            printf("2.My work place:\n");
                            printf("3.Exit:\n");
                            printf("Enter your option:");
                            int managerOption;
                            scanf("%d", &managerOption);
                            if (managerOption == 1)
                            {
                                for (int k = 0; k < NumberOfManager; k++)
                                {
                                    int res1111 = strcmp(Man[k].ID, idMan);
                                    int res2111 = strcmp(Man[k].password, passMan);
                                    if (res1111 == 0 && res2111 == 0)
                                    {

                                        printf("%s %s %s %i %i\n", Man[k].ID, Man[k].Name, Man[k].password, Man[k].Salary, Man[k].senior);
                                    }
                                }
                            }
                            else if (managerOption == 2)
                            {
                                while (1)
                                {
                                    printf("0. : See account \n");
                                    printf("1. : See account employee\n");
                                    printf("2. : Edit profile employeee:\n");
                                    printf("3. : Manage employee:\n");
                                    printf("4. : See account chef\n");
                                    printf("5. : Edit profile chef:\n");
                                    printf("6. : Manage chef:\n");
                                    printf("7. : Log out\n");
                                    printf("Enter your option:");
                                    int option11;
                                    scanf("%d", &option11);
                                    // this part is for employee
                                    if (option11 == 0)
                                    {
                                        // See account
                                        printf("Employees details list\n");
                                        for (int j = 0; j < NumberOfEmp; j++)
                                        {
                                            printf(" ID:%s\n. Name:%s.  Password:%s\n Salary:%i\n", Emp[j].ID, Emp[j].Name, Emp[j].password, Emp[j].Salary);
                                        }
                                        printf("Chefs details list\n");
                                        for (int j = 0; j < NumberOfChef; j++)
                                        {
                                            printf(" ID:%s\n. Name:%s.  Password:%s\n Salary:%i\n", Chefs[j].ID, Chefs[j].Name, Chefs[j].password, Chefs[j].Salary);
                                        }
                                    }
                                    else if (option11 == 1)
                                    {
                                        // See account one employee
                                        printf("Give Employee ID:\n");
                                        char idEmp[3];
                                        scanf("%s", &idEmp);
                                        for (int j = 0; j < NumberOfEmp; j++)
                                        {
                                            int res3 = strcmp(Emp[j].ID, idEmp);
                                            int EmpFondHereiiii = 0;
                                            if (res3 == 0)
                                            {
                                                EmpFondHereiiii = 1;
                                                printf("Your ID:%s\n.Your Name:%s. Your password:%s\nYour salary:%i\n", Emp[j].ID, Emp[j].Name, Emp[j].password, Emp[j].Salary);
                                            }
                                            else if (EmpFondHereiiii == 0 && j == NumberOfEmp - 1)
                                            {
                                                printf("Wrong Id\n");
                                            }
                                        }
                                    }
                                    else if (option11 == 2)
                                    {
                                        // Edit profile employeee
                                        printf("Give Employee ID:\n");
                                        char idEmp[3];
                                        scanf("%s", &idEmp);
                                        for (int j = 0; j < NumberOfEmp; j++)
                                        {
                                            int res4 = strcmp(Emp[j].ID, idEmp);
                                            int hasGot = 0;
                                            if (res4 == 0)
                                            {
                                                int hasGot = 1;
                                                while (1)
                                                {
                                                    printf("1. : Change name:\n");
                                                    printf("2. : Change Id:\n");
                                                    printf("3. : Change Password:\n");
                                                    printf("4. : No more change\n");
                                                    printf("Enter your option:");
                                                    int option111;
                                                    scanf("%d", &option111);
                                                    if (option111 == 1)
                                                    {
                                                        printf("Give new name of the employee\n");
                                                        char newNameEmp[20];
                                                        scanf("%s", newNameEmp);
                                                        strcpy(Emp[j].Name, newNameEmp);
                                                    }
                                                    else if (option111 == 2)
                                                    {
                                                        printf("Give new id of the employee\n");
                                                        char newIdEmp[20];
                                                        scanf("%s", newIdEmp);
                                                        strcpy(Emp[j].ID, newIdEmp);
                                                    }
                                                    else if (option111 == 3)
                                                    {
                                                        printf("Give new password of the employee\n");
                                                        char newPassEmp[20];
                                                        scanf("%s", newPassEmp);
                                                        strcpy(Emp[j].password, newPassEmp);
                                                    }
                                                    else
                                                    {
                                                        break;
                                                    }
                                                }
                                            }
                                            else if (hasGot == 0 && j == NumberOfEmp - 1)
                                            {
                                                printf("Give correct id\n");
                                            }
                                        }
                                    }
                                    else if (option11 == 3)
                                    {
                                        // Manage employee

                                        while (1)
                                        {
                                            printf("0. : Create new employee account:\n");
                                            printf("1. : See employess list:\n");
                                            printf("2. : Delete employee:\n");
                                            printf("3. : Give salary\n");
                                            printf("4. : No more change\n");
                                            printf("Enter your option:");
                                            int option111;
                                            scanf("%d", &option111);
                                            if (option111 == 0)
                                            {
                                                //    Create new employee account
                                                char addMore;

                                                do
                                                {
                                                    // Input data for a single employee
                                                    printf("Enter ID, Name, Password, Salary, and Level for the new employee:\n");
                                                    scanf("%s %s %s %d %d", Emp[NumberOfEmp].ID, Emp[NumberOfEmp].Name, Emp[NumberOfEmp].password, &Emp[NumberOfEmp].Salary, &Emp[NumberOfEmp].Level);

                                                    // Increment the number of employees
                                                    NumberOfEmp++;

                                                    // Ask if the user wants to add more employees
                                                    printf("Do you want to add another employee? (Y/N): ");
                                                    scanf(" %c", &addMore); // Note the space before %c to consume the newline character

                                                } while (addMore == 'Y' || addMore == 'y');
                                            }
                                            if (option111 == 1)
                                            {
                                                // See employess list
                                                for (int j = 0; j < NumberOfEmp; j++)
                                                {
                                                    printf("ID :%s,Name :%s, Password :%s,Salary:  %i,Level: %i\n", Emp[j].ID, Emp[j].Name, Emp[j].password, Emp[j].Salary, Emp[j].Level);
                                                }
                                            }
                                            else if (option111 == 2)
                                            {
                                                char empid[20];
                                                printf("Give employee id:\n");
                                                scanf("%s", &empid);
                                                for (int m = 0; m < NumberOfEmp; m++)
                                                {
                                                    int res7 = strcmp(Emp[m].ID, empid);
                                                    int dfdf = 0;
                                                    if (res7 == 0)
                                                    {
                                                        // strcpy(Emp[i].ID," ");
                                                        // strcpy(Emp[i].Name," ");
                                                        // strcpy(Emp[i].password," ");
                                                        Emp[m].Salary = -1;
                                                        dfdf = 1;
                                                    }
                                                    else if (dfdf == 0 && m == NumberOfEmp - 1)
                                                    {
                                                        printf("Id does not match :\n");
                                                    }
                                                }
                                            }
                                            else if (option111 == 3)
                                            {
                                                char empid[20];
                                                printf("Give employee id:\n");
                                                scanf("%s", &empid);
                                                for (int j = 0; j < NumberOfEmp; j++)
                                                {
                                                    int res8 = strcmp(Emp[j].ID, empid);
                                                    if (res8 == 0)
                                                    {
                                                        if (Emp[j].Salary != -1)
                                                        {
                                                            int salaryByMan;
                                                            printf("Give employee salary:\n");
                                                            scanf("%d", &salaryByMan);
                                                            Emp[j].Salary += salaryByMan;
                                                        }
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                break;
                                            }
                                        }
                                    }
                                    // this is for chef
                                    else if (option11 == 4)
                                    {
                                        // See account one employee
                                        printf("Give Chef ID:\n");
                                        char idChe[3];
                                        scanf("%s", &idChe);
                                        for (int k = 0; k < NumberOfEmp; k++)
                                        {
                                            int res9 = strcmp(Chefs[k].ID, idChe);
                                            int gotEmpHere = 0;
                                            if (res9 == 0)
                                            {
                                                gotEmpHere = 1;
                                                printf("Chef ID:%s\n.Chef Name:%s. Chef password:%s\nChef salary:%i\n", Chefs[k].ID, Chefs[k].Name, Chefs[k].password, Chefs[k].Salary);
                                            }
                                            else if (k == NumberOfEmp - 1 && gotEmpHere == 0)
                                            {
                                                printf("Id does not match:\n");
                                            }
                                        }
                                    }
                                    else if (option11 == 5)
                                    {
                                        // Edit profile Chef
                                        printf("Give Chef ID:\n");
                                        char idChefff[4];
                                        scanf("%s", &idChefff);
                                        for (int k = 0; k < NumberOfChef; k++)
                                        {
                                            int res10 = strcmp(Chefs[k].ID, idChefff);
                                            int gotChefP = 0;
                                            if (res10 == 0)
                                            {
                                                gotChefP = 1;
                                                while (1)
                                                {
                                                    printf("1. : Change name:\n");
                                                    printf("2. : Change Id:\n");
                                                    printf("3. : Change Password:\n");
                                                    printf("4. : No more change\n");
                                                    printf("Enter your option:");
                                                    int option111;
                                                    scanf("%d", &option111);
                                                    if (option111 == 1)
                                                    {
                                                        printf("Give new name of the chef\n");
                                                        char newNameChef[20];
                                                        scanf("%s", newNameChef);
                                                        strcpy(Chefs[k].Name, newNameChef);
                                                    }
                                                    else if (option111 == 2)
                                                    {
                                                        printf("Give new id of the chef\n");
                                                        char newIdChef[20];
                                                        scanf("%s", newIdChef);
                                                        strcpy(Chefs[k].ID, newIdChef);
                                                    }
                                                    else if (option111 == 3)
                                                    {
                                                        printf("Give new password of the chef\n");
                                                        char newPassChef[20];
                                                        scanf("%s", newPassChef);
                                                        strcpy(Chefs[k].password, newPassChef);
                                                    }
                                                    else
                                                    {
                                                        break;
                                                    }
                                                }
                                            }
                                            else if ( gotChefP == 0 && k == NumberOfChef - 1)
                                            {
                                                printf("Give correct id\n");
                                            }
                                        }
                                    }
                                    else if (option11 == 6)
                                    {
                                        // Manage Chef
                                        while (1)
                                        {
                                            printf("0. : Create new Chef account:\n");
                                            printf("1. : See Chefs list:\n");
                                            printf("2. : Delete Chef:\n");
                                            printf("3. : Give salary to Chef\n");
                                            printf("4. : No more change\n");
                                            printf("Enter your option:");
                                            int option111;
                                            scanf("%d", &option111);
                                            if (option111 == 0)
                                            {
                                                //    Create new chef account

                                                char addMoreChef;
                                                do
                                                {
                                                    // Input data for a single chef
                                                    printf("Enter ID, Name, Password, and Salary for the new chef:\n");
                                                    scanf("%s %s %s %d", Chefs[NumberOfChef].ID, Chefs[NumberOfChef].Name, Chefs[NumberOfChef].password, &Chefs[NumberOfChef].Salary);

                                                    // Increment the number of chefs
                                                    NumberOfChef++;

                                                    // Ask if the user wants to add more chefs
                                                    printf("Do you want to add another chef? (Y/N): ");
                                                    scanf(" %c", &addMoreChef); // Note the space before %c to consume the newline character

                                                } while (addMoreChef == 'Y' || addMoreChef == 'y');
                                            }
                                            if (option111 == 1)
                                            {
                                                // See chefs list
                                                for (int j = 0; j < NumberOfChef; j++)
                                                {
                                                    printf("ID :%s,Name :%s, Password :%s, Salary:  %i\n", Chefs[j].ID, Chefs[j].Name, Chefs[j].password, Chefs[j].Salary);
                                                }
                                            }
                                            else if (option111 == 2)
                                            {
                                                char chefid[20];
                                                printf("Give chef id:\n");
                                                scanf("%s", &chefid);
                                                for (int l = 0; l < NumberOfChef; l++)
                                                {
                                                    int GotChefHereBadly = 0;
                                                    int res11 = strcmp(Chefs[l].ID, chefid);
                                                    if (res11 == 0)
                                                    {
                                                        GotChefHereBadly = 1;
                                                        // strcpy(Emp[i].ID," ");
                                                        // strcpy(Emp[i].Name," ");
                                                        // strcpy(Emp[i].password," ");
                                                        Chefs[l].Salary = -1;
                                                    }
                                                    else if (l == NumberOfChef - 1 && GotChefHereBadly == 0)
                                                    {
                                                        printf("Id does not match:\n");
                                                    }
                                                }
                                            }
                                            else if (option111 == 3)
                                            {
                                                char Chefid[20];
                                                printf("Give Chef id:\n");
                                                scanf("%s", &Chefid);
                                                for (int l = 0; l < NumberOfChef; l++)
                                                {
                                                    int GotChefHereBadly = 0;
                                                    int res12 = strcmp(Chefs[l].ID, Chefid);
                                                    if (res12 == 0)
                                                    {
                                                        GotChefHereBadly = 1;
                                                        int salaryByMan;
                                                        printf("Give chef salary:\n");
                                                        scanf("%d", &salaryByMan);
                                                        Chefs[l].Salary += salaryByMan;
                                                    }
                                                    else if (l == NumberOfChef - 1 && GotChefHereBadly == 0)
                                                    {
                                                        printf("Id does not match:\n");
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                break;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        break;
                                    }
                                }
                            }
                            else
                            {
                                break;
                            }
                        }
                    }
                    else if (manVeryfy == 0 && i == NumberOfManager - 1)
                    {
                        printf("Wrong password Or user id:\n");
                    }
                }
            }
            else if (loginOption == 2)
            {
                char name[50], password[20];
                int option;

                printf("Enter your name: ");
                scanf("%s", name);
                printf("Enter your password: ");
                scanf("%s", password);

                int empIndex = -1;
                for (int i = 0; i < NumberOfEmp; i++)
                {
                    if (strcmp(Emp[i].Name, name) == 0 && strcmp(Emp[i].password, password) == 0)
                    {
                        empIndex = i;
                        break;
                    }
                }

                if (empIndex == -1)
                {
                    printf("Employee not found or incorrect credentials.\n");
                    return 0;
                }

                printf("Welcome, %s!\n", Emp[empIndex].Name);

                do
                {
                    printf("\nOptions:\n");
                    printf("1. Withdraw money\n");
                    printf("2. See profile\n");
                    printf("3. Change password\n");
                    printf("4. Take loan\n");
                    printf("5. Logout\n");
                    printf("Enter option: ");
                    scanf("%d", &option);

                    switch (option)
                    {
                    case 1:
                        if (Emp[empIndex].Salary > 0)
                        {
                            printf("Withdrawn %d money.\n", Emp[empIndex].Salary);
                            Emp[empIndex].Salary = 0; // Set salary to zero after withdrawal
                        }
                        else
                        {
                            printf("You don't have any money to withdraw.\n");
                        }
                        break;
                    case 2:
                        printf("Profile:\n");
                        printf("Id: %s\n", Emp[empIndex].ID);
                        printf("Name: %s\n", Emp[empIndex].Name);
                        printf("Salary: %d\n", Emp[empIndex].Salary);
                        printf("Level: %d\n", Emp[empIndex].Level);
                        printf("Password: %d\n", Emp[empIndex].password);
                        break;
                    case 3:
                        printf("Enter new password: ");
                        scanf("%s", Emp[empIndex].password);
                        printf("Password changed successfully.\n");
                        break;
                    case 4:
                        if (Emp[empIndex].Salary >= 20000)
                        {
                            printf("Loan approved. You can take the loan. because you get less than 20000\n");
                            // Add loan processing logic here
                        }
                        else
                        {
                            printf("You are not eligible for a loan.\n");
                        }
                        break;
                    case 5:
                        printf("Logged out.\n");
                        break;
                    default:
                        printf("Invalid option. Please try again.\n");
                    }
                } while (option != 5);
            }
            else if (loginOption == 3)
            {
                char name[50], password[20];
                int option;

                printf("Enter your name: ");
                scanf("%s", name);
                printf("Enter your password: ");
                scanf("%s", password);

                int chefIndex = -1;
                for (int i = 0; i < NumberOfChef; i++)
                {
                    if (strcmp(Chefs[i].Name, name) == 0 && strcmp(Chefs[i].password, password) == 0)
                    {
                        chefIndex = i;
                        break;
                    }
                }

                if (chefIndex == -1)
                {
                    printf("Chef not found or incorrect credentials.\n");
                    return 0;
                }

                printf("Welcome, %s!\n", Chefs[chefIndex].Name);

                do
                {
                    printf("\nOptions:\n");
                    printf("1. Withdraw money\n");
                    printf("2. See profile\n");
                    printf("3. Change password\n");
                    printf("4. Take loan\n");
                    printf("5. Logout\n");
                    printf("Enter option: ");
                    scanf("%d", &option);

                    switch (option)
                    {
                    case 1:
                        if (Chefs[chefIndex].Salary > 0)
                        {
                            printf("Withdrawn %d money.\n", Chefs[chefIndex].Salary);
                            Chefs[chefIndex].Salary = 0; // Set salary to zero after withdrawal
                        }
                        else
                        {
                            printf("You don't have any money to withdraw.\n");
                        }
                        break;
                    case 2:
                        printf("Profile:\n");
                        printf("ID: %s\n", Chefs[chefIndex].ID);
                        printf("Name: %s\n", Chefs[chefIndex].Name);
                        printf("Salary: %d\n", Chefs[chefIndex].Salary);
                        printf("Password: %d\n", Chefs[chefIndex].password);

                        break;
                    case 3:
                        printf("Enter new password: ");
                        scanf("%s", Chefs[chefIndex].password);
                        printf("Password changed successfully.\n");
                        break;
                    case 4:
                        if (Chefs[chefIndex].Salary >= 20000)
                        {
                            printf("You are eligible for a loan.\n");
                            // Process loan here
                        }
                        else
                        {
                            printf("You are not eligible for a loan.\n");
                        }
                        break;
                    case 5:
                        printf("Logged out.\n");
                        break;
                    default:
                        printf("Invalid option. Please try again.\n");
                    }
                } while (option != 5);
            }
            else
            {
                break;
            }
            break;
        }
        case 2:
            // Input data
            printf("Enter the number of employees: \n");
            scanf("%d", &NumberOfEmp);
            for (int i = 0; i < NumberOfEmp; i++)
            {
                scanf("%s %s %s %i %i", &Emp[i].ID, &Emp[i].Name, &Emp[i].password, &Emp[i].Salary, &Emp[i].Level);
            }

            printf("Enter the number of managers: \n");
            scanf("%d", &NumberOfManager);
            for (int i = 0; i < NumberOfManager; i++)
            {
                scanf("%s %s %s %i %i", &Man[i].ID, &Man[i].Name, &Man[i].password, &Man[i].Salary, &Man[i].senior);
            }

            printf("Enter the number of chefs: \n");
            scanf("%d", &NumberOfChef);
            for (int i = 0; i < NumberOfChef; i++)
            {
                scanf("%s %s %s %d", &Chefs[i].ID, &Chefs[i].Name, &Chefs[i].password, &Chefs[i].Salary);
            }

            break;
        case 3:
            // Exit the program
            return 0;
        default:
            printf("Invalid option\n");
        }
    }

    return 0;
}
