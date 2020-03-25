#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct student{
    char name[15];
    short status;
    struct student *left, *right;
} Student;

typedef struct course{
    char name[15];
    int students;
    struct student *root;
} Course;

Course courses[5] = {{"Algoritmo", 0, NULL}, {"SD", 0, NULL}, {"Fisica", 0, NULL}, {"Logica", 0, NULL}, {"Estatistica", 0, NULL}};

Student *create(char *name);

int add(Student **node, char *name);

int delete(Student *node, char *name);

int main(int argc, char const *argv[]){

    int status = 1, i = 0;
    char text[101], *str1, *str2;

    do {
        fgets(text, 100, stdin);

        status = !(text[0] == '\n');  

        if (status){
            str1 = strtok(text, " ");
            str2 = strtok(NULL, "\n");
            i = 0;

            while (i < 5 && str1[0] != courses[i].name[0]) i++;

            add(&courses[i].root, str2) ? courses[i].students++ : 0;
        }
        
    } while (status);
   
    while (scanf(" %[^\n]s", text) != EOF){
        str1 = strtok(text, " ");
        str2 = strtok(NULL, " ");
        
        i = 0;
        while (i < 5 && str1[0] != courses[i].name[0]) i++;

        delete(courses[i].root, str2) ? courses[i].students-- : 0;
    }

    for (i = 0; i < 5; i++)
        printf("Estao matriculados na turma de %s %d aluno(os)\n", courses[i].name, courses[i].students);
      
    return 0;
}

Student *create(char *name){
    Student *student = malloc(sizeof(Student));
    strcpy(student->name, name);
    student->status = 1;
    student->left = student->right = NULL;

    return student;
}

int add(Student **node, char *name){
    if (!(*node)){
        *node = create(name);
        return 1;
    }

    int r = strcmp((*node)->name, name);

    if(!r)
        return 0;

    return (r < 0) ? add(&(*node)->right, name) : add(&(*node)->left, name);
}

int delete(Student *node, char *name){
    if (!node)
        return 0;

    int r = strcmp(node->name, name);
    
    if (node->status && !r)
        return !(node->status = 0);

    return r < 0 ? delete(node->right, name) : delete(node->left, name);
}