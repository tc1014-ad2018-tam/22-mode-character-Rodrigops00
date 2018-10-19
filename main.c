//Rodrigo Perez Solis
//A01411278
//This program helps the user to know what character is repeated the most

#include <stdio.h>
#include<string.h>

char mch(char str[]) {//This function will return the character that repeats
                      //the most


 //Variables declaration
char mch = str[0];
int b1=0;
int b2;

    for (int i = 0; i <strlen(str) ; i++) {
        b2=0;
        for (int j = i + 1; j < strlen(str); j++) {
            //b2 is incremented every time the character is repeated
            if (str[i] == str[j] && str[i] != ' ') {
                b2++;
            }
        }

        if (b2 > b1) {
            b1 = b2;
            mch = str[i];
        }
    }
    return mch;
}

int main() {
    //Declaration of variable.
    char string[100];

    printf("Tell me something:");
    fgets(string, sizeof(string), stdin);

    printf("This is the character that repeated the most %c", mch(string));

    return 0;
}

        


