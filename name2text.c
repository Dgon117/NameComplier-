#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(void)
//struct Names
{
    int pick = 1;
   union Data {
       int i;
       int e;
   };
    // need to put bellow arrays into a text file and have program work the same
    // read into files, and never need to recompile
    // Char *filenames ="myfile.txt";
    char Vowel[25][25] =
            { "ora", "heo", "hea", "py", "lia", "mia", "lyn", "bell", "vid", "ley","ver",
              "max", "tis", "we", "rto", "vie","jamin","ason", "Ogan", "cob","kson","mel"
                    ,"yatt","tew", };
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
              "Q", "R", "S","T","U","V","w","x","y","z"

            };
// Struct with file pointers, put input points vowel and letter and output pointers all file IO struct
    FILE *myfile;
    //fopen("myfile.txt", "r");
    myfile = fopen("output.txt", "w");
    if(myfile==NULL)
    {
        printf("error in writing file");
        return 1;
        exit(1);
    }

    // Showing Names to be combined
    union Data d1;
    d1.i = 10;
    d1.e = 20;
    printf("%d\n", d1.i);
    printf("%d", d1.e);

    printf("NameComplier\n");
    // assigned variable
    for (int i = 0; i < 25; i++)
        printf("%s\n", Vowel[i]);
    printf("\n");
    // loop adds names together
    while (pick == 1) {
        //Random Name Listed
        printf("Randome Name \n");
        srand(time(0));

        //Combined 2 names to make 1
        ////// writing in file
        // could have struct for bottom hash
        fprintf(myfile,"%s\n", Letter[rand() % 10]);
        fprintf(myfile,"%s\n", Vowel[rand() % 10]);
        fprintf(myfile,"%s\n", Vowel[rand() % 10]);
        fprintf(myfile,"%s\n", Vowel2[rand() % 10]);
        fprintf(myfile,"%s\n", Vowel2[rand() % 10]);
        printf("File written successfully");
        fclose(myfile);
        // Generate another name
        printf("\nYou want to generate another name(1: yes, 2: no): ");
        scanf("%d", &pick);
    }

    return 0;
}
