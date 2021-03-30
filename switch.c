#include<stdio.h>
#include<ctype.h>
int main()
{
  char ch;

    printf("Give me a letter of the alphabet,and l will give");
    printf("an animal name\n Beginning with that letter.\n");
    printf("Please type in a letter;type # to end my act.");
    while((ch=getchar())!='#')
    {

        if ('\n'==ch)
            continue;
        if (islower(ch))
        switch(ch)
        {
            case 'a':
            case 'A': //∂‡÷ÿ±Í«© 
            printf("a,a wild sheep of Asia\n");
            break;
            case 'b':
            case 'B': 
            printf("b,a wild pig of Malay");
            break;
            case 'c':
            case 'C': 
            printf("c, mammal");
            break;
            default:
                printf("that is a stumper!");

        }
        else
            printf("l recognize only lowercase letters.\n");
        while (getchar()!='\n')
        continue;
        printf("Please type another letter or a #\n");


    }
    printf("Bye\n");

    return 0;

}
