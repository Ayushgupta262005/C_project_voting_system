#include <stdio.h>
#define CANDIDATE_COUNT
#define CANDIDATE1 "David"
#define CANDIDATE2 "Krishna"
#define CANDIDATE3 "Jim"
#define CANDIDATE4 "Lakshay"

int voteCount1 = 0, voteCount2 = 0, voteCount3 = 0, voteCount4 = 0;

void castVote()
{
    int choice;
    printf("\n\n *Please choose your candidate*");
    printf("\n 1. %s", CANDIDATE1);
    printf("\n 2. %s", CANDIDATE2);
    printf("\n 3. %s", CANDIDATE3);
    printf("\n 4. %s", CANDIDATE4);

    printf("\n\n Input your choice");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        voteCount1++;
        break;
    case 2:
        voteCount2++;
        break;
    case 3:
        voteCount3++;
        break;
    case 4:
        voteCount4++;
        break;
    default:
        printf("Wrong choice \n Please try again");
    }
    getchar();
    printf("Thanks for voting");
}

void votesCount()
{
    printf("\n\n *Votes given to each candidate*");
    printf("\n %s :- %d", CANDIDATE1, voteCount1);
    printf("\n %s :- %d", CANDIDATE2, voteCount2);
    printf("\n %s :- %d", CANDIDATE3, voteCount3);
    printf("\n %s :- %d", CANDIDATE4, voteCount4);
}

void getLeadingCandidate()
{
    printf("\n\n * Leading candidate *\n\n");
    if (voteCount1 > voteCount2 && voteCount1 > voteCount3 && voteCount1 > voteCount4)
    {
        printf("[%s]", CANDIDATE1);
    }
    else if (voteCount2 > voteCount1 && voteCount2 > voteCount3 && voteCount2 > voteCount4)
    {
        printf("[%s]", CANDIDATE2);
    }
    else if (voteCount3 > voteCount1 && voteCount3 > voteCount2 && voteCount3 > voteCount4)
    {
        printf("[%s]", CANDIDATE3);
    }
    else if (voteCount4 > voteCount1 && voteCount4 > voteCount2 && voteCount4 > voteCount3)
    {
        printf("[%s]", CANDIDATE4);
    }
    else
    {
        printf("\t\t\t No win situation");
    }
}

int main(int argc, char const *argv[])
{
    int i;
    int choice;
    do
    {
        printf("\n\n **Welcome to Election/Voting**");
        printf("\n 1.Cast the vote");
        printf("\n 2.Find Vote Count");
        printf("\n 3.Finding leading candidate");
        printf("\n 0. Exit");
        printf("\n\n Please enter your chioice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            castVote();
            break;
        case 2:
            votesCount();
            break;
        case 3:
            getLeadingCandidate();
            break;
        default:
            printf("\n Thanks for coming");
            break;
        }
    } while (choice != 0);
    getchar();

    return 0;
}