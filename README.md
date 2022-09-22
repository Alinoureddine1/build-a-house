# build-a-house


You are asked to write a C++ program which draws a house with a roof based on
the following specifications.
Application name: Display a welcome banner
1) Welcome user: Ask the user for their name and using their name welcome them to
your application.  
2) Request house dimensions and validate input: Ask the user to enter the width and
height of the house to be drawn (Note: Both height and width are integer). The width
must be even and bigger than 2. If the user enters odd numbers or a number less
than or equal to 2 for the width, you are required to prompt the user until they enter
an even number. They have 3 tries for entering width. If after 3 tries they are still
entering odd numbers terminate your program with an appropriate personalized
message otherwise move on to step 3.
3) Draw the house
a. Draw the roof:
i. The roof consists of a set of stars on each row. Number of stars in
the last row of the roof is equal to the width of the house. The first
row starts with two stars and you increase the number of starts in
the next row bye 2 and repeat this process until you reach to the
width. For example if the width is 6, the roof shape will be like this
(2,4 and 6 stars):
 ** 
 **** 
 ****** 
Hint: The number of rows needed to print/draw the roof is half the
widthof the house.
COEN 243 – Winter 2022
 
2/5
                       Note: There is no space between the stars in each row.
b. Draw the body of the house:
i. The body of the house has height+1 rows in all.
ii. Last row are drawn using the dash character (‐). There arewidth
dashes.
iii. The walls are represented by height rows. Each of the rows are
made up of 2 charactersof | in the left and right sides and the rest
are spaces.
c. Keep track of the number of houses you havedrawn.
4) Again? Ask the user if they wish you to draw another house. If yes repeat steps
3.If no, move on to step 5.
5) End program: display this message: “Hope you like your house(s)”
