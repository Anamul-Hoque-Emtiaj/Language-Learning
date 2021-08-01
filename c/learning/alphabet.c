#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(('a'<=a&&a<='z')||('A'<=a&&a<='Z')){
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
            printf("Alphabet\nVowel");
        }else
        {
            printf("Alphabet\nConsonant");
        }
    }else
    {
        printf("Not an alphabet");
    }
    return 0;


}
