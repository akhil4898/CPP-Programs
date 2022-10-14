#include <stdio.h>  
int main(){  
   FILE *fp;  
   fp = fopen("file.h", "w");//opening file  
   fprintf(fp, "Hello file by fprintf...\n");//writing data into file  
   fclose(fp);//closing file  
   return 0;
}  

// #include <stdio.h>

// int main(){
//     int a;
//     printf("Enter the value of A: ");
//     scanf("%d", &a);
//     printf("Hello Akhil\n");
//     int size = sizeof(a);
//     printf("The value of A is: %d\n", a);
//     printf("The size of A is: %d\n", size);
//     return 0;
// }

// #include <stdio.h>

// void main(){
//     FILE *fp;
//     char ch;
//     fp = fopen("bass.cpp", "r");
//     while (1)
//     {
//         ch = fgetc(fp);
//         if(ch == EOF)
//         break;
//         printf("%c", ch);
//    }
//    fclose(fp);
// }