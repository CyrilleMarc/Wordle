#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int loadFile(const char *filename, char ***wordsInListArray, int *sizeList)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("file not found");
        return 1;
    }
    *sizeList = 0;
    const char word[6] = {0};
    while (fscanf(file, "%s", word) == 1)
    {
        (*sizeList)++;
    }

    *wordsInListArray = malloc((*sizeList) * sizeof(char *));
    if (*wordsInListArray == NULL)
    {
        perror("Failure, memory not allocated");
        fclose(file);
        return 1;
    }
    rewind(file);

    for (int i = 0; i < *sizeList; ++i)
    {
        (*wordsInListArray)[i] = malloc(strlen(word) + 1);

        if ((*wordsInListArray)[i] == NULL)
        {
            perror("Failure, memory not allocated");
            fclose(file);
            return 1;
        }
        fscanf(file, "%s", (*wordsInListArray)[i]);
    }
    fclose(file);
    return 0;
}

int findRandomWordInList(char **wordsInListArray, int sizeList, char *wordToFind)
{
    int randomNumber = rand() % sizeList;
    strcpy(wordToFind, wordsInListArray[randomNumber]);
    return 0;
}

int firstResult(const char *wordToFind, const char *propositionWord)
{
    int FirstResult = strcmp(wordToFind, propositionWord);
    return FirstResult;
}

int scoring(char *wordToFind, char *propositionWord)
{
    int commonLetter = 0;
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (wordToFind[i] == propositionWord[j])
            {
                commonLetter++;
                break;
            }
        }
    }
    return commonLetter;
}

int findBestWordInList(char **wordsInListArray, int sizeList, const char propositionWord)
{
    char word[6];
    for (int i = 0; i < sizeList; ++i)
    {
        word[6] = wordsInListArray[i];
    }
    int commonLetter = compareWords(word, propositionWord);

    if (commonLetter)
    {
    }
}