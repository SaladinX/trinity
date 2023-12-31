#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    int comparisonResult;
    unsigned long long local_10 = 0x617a7a6970; // Representing 0x617a7a6970 as an 8-byte unsigned integer
    
    // Call the initialization function (this is usually done by the compiler)
    // __main();
    
    if (argc == 2) { // Check if there's only one command-line argument (excluding the program name)
        comparisonResult = strcmp(argv[1], (char *)&local_10);
        
        if (comparisonResult == 0) {
            printf("Success!\n");
            return 0; // Exit with success status
        } else {
            printf("Wrong password\n");
            return 1; // Exit with error status
        }
    } else {
        printf("Please enter the password following the name of the program: %s <password>\n", argv[0]);
        return 1; // Exit with error status
    }
    return 0;
}
