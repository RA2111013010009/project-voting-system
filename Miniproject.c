

#include <stdio.h>
#include <string.h>
#define candidate_count
#define candidate1 "ABC"
#define candidate2 "XYZ"
#define candidate3 "PQR"
int votescount1=0,votescount2=0,votescount3=0;
void castvote(){
    int choice;
    printf("## Please choose your candidate ##\n\n");
    printf("1.%s\n", candidate1);
    printf("2.%s\n", candidate2);
    printf("3.%s\n", candidate3);
    printf("\n Input your vote (1-3) : "); 
    scanf("%d",&choice);
    switch(choice){
        case 1 : votescount1++; break;
        case 2 : votescount2++; break;
        case 3 : votescount3++; break;
        getchar();
    }
    printf("\n\nSUCCESSFULLY VOTED\n\n");
}
void votescount(){
    printf("\n## VOTING STATICS ##\n");
    printf("\n %s - %d ", candidate1 ,votescount1);
    printf("\n %s - %d ", candidate2 ,votescount2);
    printf("\n %s - %d ", candidate3 ,votescount3);
}
int main()
    {int i;
    int choice;
    do{
        printf("\n\n\n\n## WELCOME TO ELECTION ##");
        printf("\n\n1.Cast the vote");
        printf("\n2.Find the vote count");
        printf("\nPlease enter your choice :");
        scanf("%d",&choice);
        switch(choice){
            case 1 : castvote(); break;
            case 2 : votescount(); break;
        }
    }while(choice!=0);
    getchar();
    return 0;
    
    }
