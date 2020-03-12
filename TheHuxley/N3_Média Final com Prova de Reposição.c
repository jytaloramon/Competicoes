#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct student {
    char name[25];
    float avg;
} Student;

Student student[1000];

int compare(const void *a, const void *b){
    Student *a1 = (Student *) a,
            *b1 = ((Student *) b);

    if (a1->avg == b1->avg)
        return strcmp(a1->name, b1->name);

    return a1->avg > b1->avg;
}

int main(int argc, char const *argv[]){
 
    int i, qtStudent, q;
    char input[100], *str;
    float note, avgMin;

    scanf("%d", &qtStudent);

    for (i = 0; i < qtStudent; i++){
        getchar();
        scanf("%[^\n]s", input);

        q = 0;
        avgMin = 10000;
        str = strtok(input, ",");
        strcpy(student[i].name, str);

        str = strtok(NULL, ",");
        while (str){    
            note = atof(str);
            if (note < avgMin)
                avgMin = note;

            student[i].avg += note; 
            q++;
            str = strtok(NULL, ",");
        }

        if (0 < q && q <= 3)
            student[i].avg /= 3;
        else if (q > 3)
            student[i].avg = (student[i].avg - avgMin) / 3;
    }

    qsort(student, qtStudent, sizeof(Student), &compare);

    for (i = 0; i < qtStudent; i++)
        printf("%s %.2f\n", student[i].name, student[i].avg);

    return 0;
}