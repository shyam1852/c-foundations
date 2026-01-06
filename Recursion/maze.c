/*Only right and down moves are allowed at 
        a time through 4 parameters */

#include<stdio.h>
int maze(int cr, int cc, int er, int ec);      //  cr = current row, ec = ending column
int main() {
    int r, c;
    printf("Enter number of rows : ");
    scanf("%d", &r);
    printf("Enter number of columns : ");
    scanf("%d", &c);
    if (r <= 0 || c <= 0) {
    printf("Invalid grid size.\n");
    return 0;
}

    int no_Of_Ways = maze(1, 1, r, c);
    printf("Number of ways = %d", no_Of_Ways);
    return 0;
}
int maze(int cr, int cc, int er, int ec) {
if (cr > er || cc > ec) return 0;
if (cr == er && cc == ec) return 1;
return maze(cr + 1, cc, er, ec) + maze(cr, cc + 1, er, ec);
}


/*  DRY RUN ---->
🧠 Step-by-Step Breakdown
🔹 Call 1: maze(1,1,3,3)

Not at destination, not out of bounds.

maze(1,1,3,3) = maze(2,1,3,3) + maze(1,2,3,3)


We’ll solve both parts and add them up.

PART A → maze(2,1,3,3)
maze(2,1,3,3) = maze(3,1,3,3) + maze(2,2,3,3)

A1 → maze(3,1,3,3)
= maze(4,1,3,3) + maze(3,2,3,3)


maze(4,1,3,3) → out of bounds → returns 0

maze(3,2,3,3):

= maze(4,2,3,3) + maze(3,3,3,3)


maze(4,2,3,3) → 0

maze(3,3,3,3) → destination → 1
→ total = 1

So:

maze(3,1,3,3) = 0 + 1 = 1

A2 → maze(2,2,3,3)
= maze(3,2,3,3) + maze(2,3,3,3)


We already know:

maze(3,2,3,3) = 1 (from above)

maze(2,3,3,3):

= maze(3,3,3,3) + maze(2,4,3,3)


→ (3,3,3,3) = 1
→ (2,4,3,3) = 0
→ total = 1

So:

maze(2,2,3,3) = 1 + 1 = 2


Combine A1 and A2:

maze(2,1,3,3) = 1 + 2 = 3


✅ Result of Part A = 3

PART B → maze(1,2,3,3)
maze(1,2,3,3) = maze(2,2,3,3) + maze(1,3,3,3)


We already know maze(2,2,3,3) = 2 (from above).

Now:

B2 → maze(1,3,3,3)
= maze(2,3,3,3) + maze(1,4,3,3)


maze(2,3,3,3) = 1 (computed above)

maze(1,4,3,3) → 0 (out of bounds)
→ total = 1

So:

maze(1,3,3,3) = 1


Combine:

maze(1,2,3,3) = 2 + 1 = 3


✅ Result of Part B = 3

✅ Final Combination:
maze(1,1,3,3) = maze(2,1,3,3) + maze(1,2,3,3)
               = 3 + 3
               = 6
*/