#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(void)
{
    int Pick = 1;
    //random array
    char Vowel[25][25] =
            { "ora", "heo", "hea", "py", "lia", "mia", "lyn", "bell", "vid", "ley","ver",
              "max", "tis", "we", "rto", "vie","jamin","ason", "Ogan", "cob","kson","muel"
                    ,"yatt","thew", };
    // Mix words
    char Vowel2[25][25] =
            { "Exo", "tic", "con", "ba", "ake", "itt", "ond", "co",
              "ears", "orn", "Poet", "zy", "ove", "lur", "Cage", "Liker",
              "sp", "est", "oll","eal","law","icy"
                                             "age", "iva"
            };
    // Adds letter in front of word
    char Letter[25][25] =
            { "A", "B", "C", "D", "E", "F", "G", "H",
              "I", "J", "K", "L", "M", "N", "O", "P",
              "Q", "R", "S","T","U","V"
                                    "w","x","y","z"
            };

    FILE *myfile;
    myfile = fopen("myfile.txt", "w");
    if(myfile==NULL)
    {
        printf("error in wrting file");
        exit(1);
    }

    // Showing Names to be combined
    printf("Vowel combiner\n");
    // assigned variable
    for (int i = 0; i < 25; i++)
        printf("%s\n", Vowel[i]);
    printf("\n");
    // loop adds names together
    while (Pick == 1) {
        //Random Name Listed
        printf("Randome Name \n");
        srand(time(0));

        //Combined 2 names to make 1
        ////// writing in file
        fprintf(myfile,"%s\n", Letter[rand() % 10]);
        fprintf(myfile,"%s\n", Vowel[rand() % 10]);
        fprintf(myfile,"%s\n", Vowel[rand() % 10]);
        fprintf(myfile,"%s\n", Vowel2[rand() % 10]);
        fprintf(myfile,"%s\n", Vowel2[rand() % 10]);
        printf("File written successfully");
        fclose(myfile);
        // Generate another name
        printf("\nYou want to generate another name(1: Sure, 2: Maybe next time): ");
        scanf("%d", &Pick);
    }

    return 0;
}