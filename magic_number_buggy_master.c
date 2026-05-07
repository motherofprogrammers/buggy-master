/*
Magic Number Generator V1 - By W.H.Tharusha Rasanjana
Developed In 2026
*/
#include <stdio.h>

int magic_num_gen(int a,int y, int f){
    int diff = y - a;
    int idiff = a - y;
    int sup_pos = a*a;
    int sup_posf = f*f;
    int result = (f + (idiff + sup_pos))/(a*y - (sup_posf - diff));
    return result;
}

int main(){
    int age, year,fav_num;
    char name[200];
    printf("Enter your name: ");
    scanf("%s", &name); /* We will get only the first part of the name here! */
    if (name != '\x0'){
        printf("Enter your age: ");
        scanf("%d", &age);
        if (age > 0){
            printf("Enter your birth year: ");
            scanf("%d", &year);
            if (year > 0){
                printf("Enter your favourite number: ");
                scanf("%d", &fav_num);
                int gen_magic_num;
                gen_magic_num = magic_num_gen(age, year, fav_num);
                printf("%s, your Magic Number Is: %d", &name , &gen_magic_num);
            }else{
                int *npy = &year;
                npy = npy - 50; /* Create new mmory address */
                printf("Invalid year at %p!\n", &year);
                printf("New magic: %d", *npy); /* Dereference the new memory address into a real value */
            }
        }else{
            int *npa = &age;
            npa = npa + 4;
            printf("Invalid age at %p!\n", &npa);
            printf("New magic: %d", *npa);
        }
    }else{
        printf("Invalid name at %p!", &name);
    }
    return 0;
}