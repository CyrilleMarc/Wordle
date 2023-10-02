#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

FILE *file;
int sizeList = 0;
int randomNumber;
int i, j;
char findWord[6];
char wordToFind[6];
char playerWord[6];
char wordToFindArray[5] = {};
char playerPropositionArray[5] = {};
char resultArray[5] = {};
char badPlaceArray[] = {};
int sizeArray = sizeof(wordToFindArray) / sizeof(wordToFindArray[0]);
char wordPlayer[] = {};
char playerWord[6];
int tries = 5;
int wordFound;
int wordCount = 0;
char wordsInListArray[] = {};
char wordsMixArray[] = {};
char wordsInList[6];
char word1[6];
char ArrayList[1619] = {};
char searchWord[];
char allWords[] = {}; 
//***********************************
int openFile()
{
    file = fopen("liste.txt", "r");
    if (file == NULL)
    {
        perror("File liste.txt not found\n");
        return 1;
    }
    return 0;
}
//********************************************************
int countWordsInList()
{
    while (fscanf(file, "%s", findWord) == 1)
    {
        sizeList++;
    }
    rewind(file);
    return 0;
}
//*********************************************************
int findRandomWordInList()
{
    srand(time(NULL));
    randomNumber = rand() % sizeList;
    for (i = 0; i <= randomNumber; ++i)
    {
        fscanf(file, "%s", wordToFind);
    }
    printf("Mot à trouver: %s\n", wordToFind);
    printf("\n");
    fclose(file);
    return 0;
}
//*******************************************************
int playerProposition()
{
    srand(time(NULL));
    randomNumber = rand() % sizeList;
    for (i = 0; i <= randomNumber; ++i)
    {
        fscanf(file, "%s", playerWord);
    }
    printf("Proposition de l'ordinateur: %s\n", playerWord);
    printf("\n");
    // fclose(file);
    int result = strcmp(wordToFind, playerWord);
    if (result == 0)
    {
        printf("Bravo avez trouvé le mot %s ", wordToFind);
        printf("\n");
        return wordFound = 1;
    }
}

int filterResult()
{
    if (wordFound != 1 && tries != 0)
    {
        for (i = 0; i < sizeArray; ++i)
        {
            if (wordToFind[i] == playerWord[i])
            {
                wordToFindArray[i] = wordToFind[i];
            }
            else
            {
                wordToFindArray[i] = '_';
            }
        }
        for (i = 0; i < sizeArray; ++i)
        {
            for (j = 0; j < sizeArray; ++j)
            {
                if (wordToFind[i] == playerWord[j] && wordToFind[i] != wordToFindArray[i])
                {
                    badPlaceArray[i] = wordToFind[i];
                }
            }
        }
        printf("Resultat filtré: ");
        printf("\n");
        printf("Lettres bien placées: ");
        for (i = 0; i < sizeArray; ++i)
        {
            printf("%c ", wordToFindArray[i]);
        }
        printf("\n");
        printf("Lettres au mauvais endroit: ");
        for (i = 0; i < sizeArray; ++i)
        {
            printf("%c ", badPlaceArray[i]);
        }
        printf("\n");
        tries--;
        printf("\n");
        printf("Essais restants: %d", tries);
        printf("\n");
    }
}

int tryTwo()
{
    if (wordFound != 1 && tries != 0)
    {
        openFile();

        char wordsInList[6];
        char allWords[1619][6];

        int wordCount = 0;

        while (fscanf(file, "%s", wordsInList) == 1 && wordCount < 1)
        {
            strcpy(allWords[wordCount], wordsInList);
            wordCount++;
        }

        fclose(file);

        for (int i = 0; i < wordCount; ++i)
        {
            for (int j = 0; j < 6; ++j)
            {
                printf("%c ", allWords[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

int compareWords()
{
     for (i = 0; i < sizeArray; ++i)
        {
            for (j = 0; j < sizeArray; ++j)
            {
                if (allWords[i] == playerWord[j])
                {
                    
                }
            }
        }

    return 0;
}
