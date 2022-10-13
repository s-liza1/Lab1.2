#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main()

{

    double func,x1,x2,delta;

    unsigned int N,variant;

    printf("Enter variant (1 or 2):");

    scanf("%d",&variant);

    while(variant!= 1  &&  variant!= 2)

    {

        printf("Error. Wrong variant. Enter variant again(1 or 2):");

        scanf("%d",&variant);

        }

    if(variant == 1)

            {

        printf("\nEnter x1: ");

        scanf("%lf",&x1);

        printf("\nEnter x2: ");

        scanf("%lf",&x2);

        printf("\nSelect N: ");

        scanf("%u",&N);

        printf("\n************************************************");

        printf("\n*  N  *         X         *        F(X)        *");

        printf("\n************************************************");

            int i=1;

        delta=(x2-x1)/(N-1);

            for(i;i<=N;i++)

            {

            func = 9*pow(x1, 5) + 1000;

            printf("\n|%5.0d|%19.2f|%20.2f|",i,x1,func);

                if(i%10==0){

            printf("\n|_____|___________________|____________________|\n");

            system("pause");

        printf("\n________________________________________________");

}

x1+=delta;

}

}

    if(variant == 2){

        printf("\nEnter x1: ");

        scanf("%lf",&x1);

        printf("\nEnter x2: ");

        scanf("%lf",&x2);

        printf("\nEnter delta:");

        scanf("%lf",&delta);

        int i=1;

        printf("\n************************************************");

            printf("\n*  N  *         X         *        F(X)        *");

    printf("\n************************************************");

            while(x1<=x2){

            func = 9*pow(x1, 5) + 1000;

    printf("\n|%5.0d|%19.2f|%20.2f|",i,x1,func);

                if(i%10==0)

    printf("\n|_____|___________________|____________________|\n");

                    system("pause");

    printf("\n________________________________________________\n");

            }

               x1=x1+delta;

               i++;
    }
}



