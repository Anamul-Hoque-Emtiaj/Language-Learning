#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

int main()
{
    char id[20];
    char ch1[]="Password Not Matched!";
    char ch2[]="Password Matched.";
    char ch3[]="FACEBOOK HACKING";
    int i,j;
    printf("\n\t\t");
    for(j=0; j<=16; j++)
    {
        printf("%c",ch3[j]);
        Sleep(1);
    }
    printf("\n\n");
    Sleep(500);
    printf("\tEnter ID/Email : ");
    gets(id);
    Sleep(500);
    printf("\n\n\tStart Processing ");
    printf(". ");
    Sleep(500);
    printf(". ");
    Sleep(500);
    printf(". ");
    Sleep(500);
    printf(". ");
    Sleep(500);
    printf(". ");
    Sleep(500);
    printf("\n\n\tFinding Passwordlist!!\n\n");
    printf("\tMatching Passwords ");
    printf(". ");
    Sleep(500);
    printf(". ");
    Sleep(500);
    printf(". ");
    Sleep(500);
    printf(". ");
    Sleep(500);
    printf(". ");
    Sleep(500);
    printf("\n");
    for(i=1; i<=5; i++)
    {
        printf("\t");
        for(j=0; j<=21; j++)
        {
            printf("%c",ch1[j]);
            Sleep(1);
        }
        Sleep(1000);
        printf("\n");
    }
    printf("\t");
    for(j=0; j<=17; j++)
    {
        printf("%c",ch2[j]);
        Sleep(1);
    }
    printf("\n");
}
