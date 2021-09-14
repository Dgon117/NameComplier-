#include <stdio.h>

struct Names
{
    char Vowel[25][25];

};
union Data {
    int i;
    int e;
};


int main(void) {

    int k;

    struct Names name1 = { "ora", "heo", "ea", "py", "la", "mia", "lyn", "bell", "vid", "ley", "ver",
             "ax", "ts", "we", "rto", "vie", "jain", "ason", "Oan", "cb", "kon", "mul", "yat", "thew" };
    // Mix words
    struct Names name2 =
    { "Ex", "tic", "con", "ba", "ake", "itt", "ond", "co",
     "ers", "on", "oet", "zy", "ove", "ur", "age", "Lier",
     "sp", "est", "ll", "eal", "lw", "icy","age", "iva"
    };


    union Data d1;
    d1.i = 10;
    d1.e = 20;
    printf("%d\n", d1.i);
    printf("%d", d1.e);

    for (k = 0; k < 25; k++) {
        printf("\n%s", name1.Vowel[k]);
        printf("\n%s", name2.Vowel[k]);
    }


}