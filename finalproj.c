#include <stdio.h>
#include <stdlib.h>

void menu();

void menu() {
    printf("\nPlease Choose a Selection  \n 1. Encrypt \n 2. Decrypt \n 3. Exit \n");
}

int encrypt(int str, int shiftKey) {
    if(str >= 'a' && str <= 'z'){
        return 'a' + ((str - 'a' + shiftKey) % 26);
    }
    else if(str >= 'A' && shiftKey <= 'Z'){
        return 'A' + ((str - 'A' + shiftKey) % 26);
    }
    else{
        return str;
    }
}

int decrypt(int str, int shiftKey) {
    if(str >= 'a' && str <= 'z'){
        return 'a' + ((str - 'a' + (26-shiftKey)) % 26);
    }
    else if(str >= 'A' && shiftKey <= 'Z'){
        return 'A' + ((str - 'A' + (26 - shiftKey)) % 26);
    }
    else{
        return str;
    }
}

int main(int argc, char *argv[]) {
    int opt, ch, key;
    while(1) {
        menu(); //print menu
        scanf("%d", &opt);

        switch(opt){
            
            case 1:
                printf("\nEnter the shift key: ");
                scanf("%d", &key);
                printf("Enter the string to encrypt: ");
                    if(argc == 2) {     
                        key = atoi(argv[1]); //convert ASCII to integer for key entered
                    }
                while((ch = getchar()) != EOF) {     
                    printf("%c", encrypt(ch, key));
                }
                printf("\n");
            break;
            
            case 2:
                printf("\nEnter the shift key: ");
                scanf("%d", &key);
                printf("Enter the string to decrypt: ");
                    if(argc == 2) {
                        key = atoi(argv[1]);
                    }
                while((ch = getchar()) != EOF) {
                    printf("%c", decrypt(ch, key));
                }
                printf("\n");
            break;

            case 3:
              printf("Caesar Cipher Ending");
              exit(0);
            break;
          default:
            printf("Not a valid integer, try again!\n");
        }
        
    }
    return 0;
}
