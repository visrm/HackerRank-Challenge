#include <stdio.h>

void main()
{
char ch, s[25], sen[75]; 
//reading input
printf("Enter the character :\n");
scanf("%c", &ch);
printf("Enter the word :\n");
scanf("%s", s); 
printf("Enter the line :\n");
scanf("%[^/0]%*c", sen);

//Displays output 
printf("%c\n", ch);
printf("%s", s);
printf("%s", sen);
}

