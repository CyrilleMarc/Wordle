#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int loadFile(const char *filename, char ***wordsInListArray, int *sizeList);
int findRandomWordInList(char **wordsInListArray, int sizeList, char *wordToFind);
int firstResult(const char *wordToFind, const char *propositionWord);
int compareScoring(const char *word1, const char *word2);

int main()
{
    char **wordsInListArray = NULL;
    int sizeList = 0;
    const char *filename = "liste.txt";
    char wordToFind[6] = {0};
    char propositionWord[6] = {0};
    int tries = 5;

    srand(time(NULL));

    if (loadFile(filename, &wordsInListArray, &sizeList) == 0)
    {
        for (int i = 0; i < sizeList; ++i)
        {
            wordsInListArray[i];
        }

        if (findRandomWordInList(wordsInListArray, sizeList, wordToFind) == 0)
        {
            printf("Le mot à trouver est : %s\n", wordToFind);
        }
        if (findRandomWordInList(wordsInListArray, sizeList, propositionWord) == 0)
        {
            printf("La proposition de l'ordinateur est : %s\n", propositionWord);
        }

        for (int i = 0; i < sizeList; ++i)
        {
            free(wordsInListArray[i]);
        }
        free(wordsInListArray);
    }
    else
    {
        perror("Failure, file not loaded");
        return 1;
    }

    int FirstResult = firstResult(wordToFind, propositionWord);
    {
        if (FirstResult == 0)
        {
            printf("Bravo vous avez trouvé le mot!!!\n");
            int boolFoundWord = 1;
            return 0;
        }
        else
        {
            int commonLetter = scoring(wordToFind, propositionWord);
            {
                if (commonLetter)
                {
                    printf("Lettres en commun: \x1b[32m%d\x1b[0m\n", commonLetter);
                }
                else
                {
                    findRandomWordInList(wordsInListArray, sizeList, propositionWord);
                    {
                        printf("La proposition de l'ordinateur est : %s\n", propositionWord);
                    }
                }
            }
        }
    }

    return 0;
}
