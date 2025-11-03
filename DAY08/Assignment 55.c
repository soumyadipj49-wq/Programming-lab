#include <stdio.h>


int myStrlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}


void myStrcpy(char *destination, const char *source) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; 
}


    int dest_len = myStrlen(destination);
    int i = 0;
    while (source[i] != '\0') {
        destination[dest_len + i] = source[i];
        i++;
    }
    destination[dest_len + i] = '\0'; 
}


int myStrcmp(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i]; 
        }
        i++;
    }
    return str1[i] - str2[i]; 
}

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    char str3[100];
    char str4[100] = "Hello";

    // Length
    printf("Length of str1: %d\n", myStrlen(str1));

    // Copy
    myStrcpy(str3, str1);
    printf("Copied str3: %s\n", str3);

    // Append
    myStrcat(str1, str2);
    printf("Appended str1: %s\n", str1);

    // Compare
    int cmp_result1 = myStrcmp(str3, str4);
    if (cmp_result1 == 0) {
        printf("str3 and str4 are equal.\n");
    } else if (cmp_result1 < 0) {
        printf("str3 is lexicographically smaller than str4.\n");
    } else {
        printf("str3 is lexicographically greater than str4.\n");
    }

    int cmp_result2 = myStrcmp(str1, str2);
    if (cmp_result2 == 0) {
        printf("str1 and str2 are equal.\n");
    } else if (cmp_result2 < 0) {
        printf("str1 is lexicographically smaller than str2.\n");
    } else {
        printf("str1 is lexicographically greater than str2.\n");
    }

    return 0;
}
