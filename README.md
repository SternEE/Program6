# Program6

 The strongest monsters in the world have entered into a world tournament to find out who is the best monster.  The tournament is in a 1-on-1 “shuffled bracket” format, where every round in the tournament, the list of monsters is shuffled, and each undefeated monster faces off against another undefeated monster (possibly with 1 monster being given a “bye” if there’s an odd number of monsters).
 Tournament Example
 For example, suppose there’s 5 monsters at the beginning of the tournament (monsters A,B,C,D,E).
 For the first round, the monsters are randomly shuffled:  B, D, A, C, E
•	Monster B fights monster D
•	Monster A fights monster C
•	Monster E has a “bye” and fights nobody
Now assume that monster D wins, and monster A wins, thus monsters D, A, and E continue to the second round of the tournament.
For the second round, the monsters are randomly shuffled:  E D A
•	Monster E fights monster D
•	Monster A has a “bye” and fights nobody.
Now assume that monster E wins, thus monsters E and A continue to the final round of the tournament.
In the final round of the tournament, assume that monster A wins, thus monster A wins the tournament.

Monster Capabilities
Each monster is of type “Rock”, “Paper”, or “Scissors”.
Each monster enters the tournament with a certain amount of hit-points.
•	A rock monster has properties for “mass” and “velocity”.  When a rock monster attacks, it deals damage with the following formula:  damage = mass * velocity * velocity
•	A paper monster has properties for “length” and “width”.  When a paper monster attacks, it deals damage with the following formula:  damage = length * width
•	A scissors monster has a property for “sharpness”.  When a scissors monster attacks, it deals damage with the following formula:  damage = sharpness
Battle Format
Monsters will attack each other sequentially.
Each battle continues until one of the monsters has 0 or fewer hit-points.
It is arbitrary which monster attacks first.
For example…
•	Suppose monster A is a paper monster with 100 hit-points, length: 10, and width: 5.  
•	Suppose monster B is a rock monster with 90 hit-points, mass: 5, and velocity: 3.
•	Monster A attacks first, dealing 10*5 = 50 damage to monster B.
o	Monster B now has 90 – 50 = 40 hit-points.
•	Monster B now attacks monster A, dealing 5*3*3 = 45 damage.
o	Monster A now has 100 – 45 = 55 hit-points.
•	Monster A now attacks monster B, again dealing 50 damage.
o	Mosnter B now has 40-50 = -10 hit-points, so monster B dies and monster A has won the battle.
•	Monster A continues to the next round of the tournament.
At the end of the battle, a monster’s hit-points is NOT reset.  In the example above, monster A would enter the next round of the tournament with 55 hit-points.
Implementation Details
You should read in the monsters and their properties from the supplied “P6Input.txt”.  Note that there are an odd number of monsters in the text file.
Your program must use polymorphism to store all monsters in one data structure (you may use STL libraries such as vector).
Your base “Monster” class should be abstract.  It should have pure virtual functions for “string getMonsterType()”, which returns the monster’s type as a string, and “bool attack(Monster * target)” which uses the monster’s damage formula to deal damage to the target monster and returns “true” or “false” depending on whether or not the target monster has died.

The input file is in the following format:
For each line:
•	First is the type of monster: Rock, Paper, or Scissor.
•	Next is the monster’s name.
•	Next is the monster’s hit-points.
•	Next depends on the type of monster: 
o	If Rock: mass, followed by velocity
o	If Paper: length, followed by width
o	If Scissors: sharpness
See screen output sample at:
s2.smu.edu/~etchison/cse1342/P6Output.txt

Each class should have its own CPP and Header file.  Your main should be in its own CPP file.
Code formatting and grading rubrics:
https://s2.smu.edu/~etchison/cse1342/pguide.doc
How to submit: 
A .zip file (lastname,firstinitial,p1) containing all .h, .cpp files as well as p6.out file  MUST be uploaded to Canvas.
You should not wait until the last minute when servers could go down.


