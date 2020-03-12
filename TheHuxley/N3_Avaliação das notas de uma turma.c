#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct student{
    char name[12],
        grade[6];
} Student;

Student students[1000];

int findName(char *name, int length);

int result(char *grade, char *feedback);

int main(int argc, char const *argv[]){

    char name[12], grade[6], feedback[6];
    short continueRead = 1;
    int count = 0, rsp, m, sum = 0, q;

    while (continueRead){
        scanf("%s", &name);
        
        continueRead = !(name[0] == '*');

        if (continueRead){
            scanf("%s", grade);

            rsp = findName(name, count);
            
            if (rsp != -1)
                strcpy(students[rsp].grade, grade);
            else {
                strcpy(students[count].name, name);
                strcpy(students[count++].grade, grade);
            }
        }
    }

    scanf("%s", feedback);
 
    rsp = 0;
    m = 100;

    for (continueRead = 0; continueRead < count; continueRead++){
        q = result(students[continueRead].grade, feedback);

        if (q > rsp)
            rsp = q;
        else if (q < m)
            m = q;
        
        sum += q;
    }
    
    printf("Maior: %d\nMenor: %d\nMedia: %.2f", rsp, m, (float) sum / count);

    return 0;
}

int findName(char *name, int length){
    int i;

    for (i = 0; i < length; i++)
        if (!strcmp(students[i].name, name))
            return i;
    
    return -1;
}

int result(char *grade, char *feedback){
    int i, result = 0;

    for (i = 0; i < 5; i++)
        result += (grade[i] == feedback[i]);

    return result;
}