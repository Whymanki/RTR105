#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    return *(char*)a - *(char*)b;
}

int main()
{
    char str[100];
    int len, i, j, sum = 0;
    int frequency[256] = {0};

    printf("Ievadi simbolu rindu: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    len = strlen(str);

    char strWithoutSpaces[len];
    j = 0;
    for (i = 0; i < len; i++) {
        if (str[i] != ' ') {
            strWithoutSpaces[j] = str[i];
            j++;
        }
    }
    strWithoutSpaces[j] = '\0';
    len = j;

    qsort(strWithoutSpaces, len, sizeof(char), compare);

    char min = strWithoutSpaces[0], max = strWithoutSpaces[len - 1];

    for (i = 0; i < len; i++)
    {
        sum += strWithoutSpaces[i];
        frequency[strWithoutSpaces[i]]++;
    }
    float avg = (float)sum / len;

    float median;
    if (len % 2 == 0) {
        median = (strWithoutSpaces[len/2] + strWithoutSpaces[len/2 - 1])/2.0;
    } else {
        median = strWithoutSpaces[len/2];
    }

    int mode[len], maxCount = 0, modeCount = 0;
    for (i = 0; i < len; i++)
    {
        mode[i] = -1;
    }
    int count = 1;
    for (i = 0; i < len; i++)
    {
        if (strWithoutSpaces[i] == strWithoutSpaces[i + 1])
        {
            count++;
        }
        else
        {
            if (count > maxCount)
            {
                maxCount = count;
                modeCount = 0;
                mode[modeCount] = strWithoutSpaces[i];
            }
            else if (count == maxCount)
            {
                modeCount++;
                mode[modeCount] = strWithoutSpaces[i];
            }
            count = 1;
        }
    }

    FILE *fp = fopen("output_data.txt", "w");

    if (fp == NULL)
    {
        printf("Failed to create the file");
        return 0;
    }

    printf( "Minimālā vērtība: %d\n", min);
    printf("Maksimālā vērtība: %d\n", max);
    printf( "Videjā vērtība: %.2f\n", avg);
    printf( "Mediānas vērtība: %.2f\n", median);
    printf( "Modas(u) vērtība(s): ");
    for (i = 0; i <= modeCount; i++)
    {
        printf( "%d ", mode[i]);
    }
    printf( "\nSimbolu rinda alfabēta secībā: %s\n", strWithoutSpaces);
    printf( "ASCII atbilstošas vērtības: ");
    for (i = 0; i < len; i++)
    {
        printf( " %d ", strWithoutSpaces[i]);
    }
    for (i = 0; i < 256; i++)
    {
        if (frequency[i] > 0)
        {
            fprintf(fp, "%d %d\n", frequency[i], i);
        }
    }
    fclose(fp);
    return 0;
}
