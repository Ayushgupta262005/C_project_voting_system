This C project implements a simple command-line voting system where users can cast votes for candidates, view vote counts, and determine the leading candidate. The system provides a basic simulation of an election process with four predefined candidates. Here’s a detailed breakdown of the components and workflow:

1. Header Files and Macros
The program includes the standard input-output library (stdio.h).
Four candidate names are defined using macros: CANDIDATE1, CANDIDATE2, CANDIDATE3, and CANDIDATE4, representing "David," "Krishna," "Jim," and "Lakshay," respectively.
2. Global Variables
Four integer variables (voteCount1, voteCount2, voteCount3, voteCount4) are used to keep track of the votes for each candidate, initialized to zero.
3. Function Descriptions
a. castVote()
This function allows users to cast their vote.
The user is prompted to choose a candidate by entering a number (1-4). Each number corresponds to one of the four candidates.
Based on the user’s choice, the respective candidate’s vote count is incremented.
If the user inputs an invalid choice, a "Wrong choice" message is displayed.
The function acknowledges the vote by displaying "Thanks for voting."
b. votesCount()
This function displays the current vote count for each candidate.
It prints the name of each candidate along with their corresponding vote count.
c. getLeadingCandidate()
This function determines and displays the candidate with the highest number of votes.
It compares the vote counts of all four candidates to find the one with the maximum votes.
If there is a tie (no single candidate has more votes than all others), the program indicates a "No win situation."
4. main() Function
The main() function acts as the program's entry point and menu-driven interface.
It repeatedly presents the user with the following options:
Cast a vote: Calls the castVote() function.
Find vote count: Calls the votesCount() function to display the current votes.
Find leading candidate: Calls the getLeadingCandidate() function to display the candidate leading the election.
Exit: Ends the program.
The program uses a do-while loop to continuously prompt the user until they choose to exit (inputting 0).
Workflow
Starting the Program: The program displays a menu to cast a vote, check vote counts, or find the leading candidate.
Casting Votes: Users select a candidate to vote for, and the corresponding candidate's vote count is incremented.
Viewing Vote Count: Users can see the total votes for each candidate.
Finding the Leading Candidate: The system determines which candidate has the most votes or if there is no clear winner.
Limitations and Suggestions for Improvement
No User Authentication: The system lacks any user verification, allowing unlimited voting by the same user. Adding authentication would prevent voting abuse.
Tie Handling: In case of a tie, a more sophisticated tie-breaking mechanism could be implemented.
Dynamic Candidate List: Currently, candidates are hardcoded. Using dynamic arrays or linked lists could make it easier to add or remove candidates.
Persistent Storage: Votes are not stored after the program ends. Adding file handling or database integration could make the vote counts persistent.
