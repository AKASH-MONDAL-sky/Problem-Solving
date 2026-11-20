// https://www.codechef.com/problems/NEWSPAPER

#include <stdio.h>

int main() {
	
	int X;
	scanf("%d",&X);

  // solve using switch case
    
   /*  switch (X) {
        case 1:
            printf("NO\n");
            break;
        case 2:
            printf("NO\n");
            break;
        case 3:
            printf("NO\n");
            break;
        case 4:
            printf("NO\n");
            break;
        case 5:
            printf("NO\n");
            break;
        case 6:
            printf("NO\n");
            break;
        case 7:
            printf("NO\n");
            break;
        case 8:
            printf("YES\n");
            break;
        case 9:
            printf("YES\n");
            break;
        case 10:
            printf("YES\n");
            break;
        default:
            printf("Invalid \n");
    }
    */

    if (X>=0 && X <= 10)
    {
      
        if (X>=8)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }   
        
    }

    else
    {
        printf("Please Enter Number Between: 1 to 10\n");
    }
    
    return 0;
}

