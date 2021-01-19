#include <stdio.h>
int main()
{
    char num[6][4] = {"11", "10", "1", "22", "100", "33"}, temp[4];
    for(int i=0; i<5; i++)
    {
        int min = i;
        for(int j=i+1; j<6; j++)
        {
            if (strlen(num[min]) > strlen(num[j]) || (strlen(num[min]) == strlen(num[j]) && strcmp(num[j], num[min]) < 0))
            {
                min = j;   
            }
        }
        strcpy(temp, num[i]);
        strcpy(num[i], num[min]);
        strcpy(num[min], temp);
    }
    for(int i=0; i<6; i++)
    {
        printf("%s ", num[i]);
    }
    return 0;
}

