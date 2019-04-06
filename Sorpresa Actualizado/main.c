#include <stdio.h>
#include <stdlib.h>

char c;
char * texto;
char * texto_;
int validarrrrrrr;
int i=0;
void clave();
void menu();
void inscribir_estudiantes();
void agregar_carrera();
void agregar_materias();
void publicar_calificaciones_numericas_a_un_estudiante_de_una_materia();
void borrar_calificaciones();
void calcular_indice();
void calcular_calificacion_promedio_de_una_materia();
void alcular_calificacion_promedio_de_una_carrera();
void la_cantidad_de_horas_practicas_por_carrera();
int LIM=0;

struct estudiante{

    struct incribir{
        int matricula;
        char nombre[10];
        char apellido[10];
        int telefono;
        char carrera[10];
        char materias[10][10];
        }UNO;

    struct carrera{
        char carrera[10];
        char nombre_carrera[10];
        char materias_por_periodo[10];
    }DOS;

    struct agrega_materias{
        char clave[10];
        char nombre[10];
        int credito[10];
        int horas_T;
        int horas_P;
        char pre_requisito[10];
        char calificaciones[10];
    }TRES[10];

}ESTU;
char letra;
float indice;
int credito=0;

int main(){

   // clave()
    menu();




    return 0;
}

void clave(){

    do{
    { printf("digite la clave,A\n");
    texto= malloc( 1 * sizeof(char) );
        int i = 0;

        while((c = getch())!='x'){
        texto = realloc( texto, (i+2) * sizeof(char) );
        texto[i]=c;
        printf("*");
        i++;
    }
    //printf("Este es mi caracter: %c\n",c);
   // printf("%s\n",texto);
    printf("\nVERIDIFICAION\n");



    texto_= malloc( 1 * sizeof(char) );
    i = 0;
    while((c= getch())!='x'){
        texto_ = realloc( texto_, (i+2) * sizeof(char) );
        texto_[i]=c;
        printf("*");
        i++;
    }

    //printf("Este es mi caracter: %c\n",c_);
  //  printf("%s\n",texto_);

    }

    if(strcmp(texto,texto_)==0){
        printf("\ncontrasena iguales!!!\n\n");
        validarrrrrrr++;
    }else{
    printf("\ncontrasenas distintas, vuelva a intentar\n\n");};
    fflush(stdin);}while(validarrrrrrr<1);
};

void menu(){

    printf("inscribir estudiantes\n");

    int valor=0;
    printf("digite el valor del menu que quiere acceder\n\ndigite '10' para salir\n");
    while(valor!=10){

    printf("1. incribir estudiante\n");
    printf("2. agregar carrera\n");
    printf("3. agregar materia\n");
    printf("4. publicar calificaciones numericas a un estudiante de una materia\n");
    printf("5. borrar calificaciones\n");
    printf("6. calcular indice\n");
    printf("7. calcular calificacion promedio de una materia\n");
    printf("8. alcular calificacion promedio de una carrera\n");
    printf("9. la cantidad de horas practicas por carrera\n");

    scanf("%d",&valor);
    switch (valor){

     case       1 : inscribir_estudiantes();

     break;

     case       2 : agregar_carrera();

     break;

     case       3 :  agregar_materias();

     break;

     case       4 : publicar_calificaciones_numericas_a_un_estudiante_de_una_materia();

     break;

     case       5 : borrar_calificaciones();

     break;

     case       6 :  calcular_indice();

     break;

     case       7 : calcular_calificacion_promedio_de_una_materia();

     break;

     case       8 : alcular_calificacion_promedio_de_una_carrera();

     break;

     case       9 : la_cantidad_de_horas_practicas_por_carrera();

     break;

     case       10 : printf("\ngracias por usar el menu\n");

     break;}

    }
}

void inscribir_estudiantes(){

    printf("INCRIPCION\n\n");

    printf("materias cursadas\n");
    scanf("%s",&ESTU.UNO.materias);

    printf("digite el nombre\n");
    scanf("%s",&ESTU.UNO.nombre);

    printf("digite el apellido\n");
    scanf("%s",&ESTU.UNO.apellido);

    printf("su matricula\n");
    scanf("%d",&ESTU.UNO.matricula);

    printf("numero de telefono\n");
    scanf("%d",&ESTU.UNO.telefono);

    printf("\n\n");

    };

void agregar_carrera(){

    printf("AGREGAR MATERIAS\n\n");

    printf("siglas de la carrera\n");
    scanf("%s",&ESTU.DOS.carrera);

    printf("nombre de la carrera\n");
    scanf("%s",&ESTU.DOS.nombre_carrera);

    printf("materias el periodo\n");

    printf("cuantas materias?");
    scanf("%d",&LIM);

    printf("digite el limite de materias\n");
    scanf("%s",&ESTU.DOS.materias_por_periodo);

    printf("\n\n");


    };


void agregar_materias(){

        printf("AGREGAR MATERIAS\n\n");
for(i=0;i<LIM;i++){
    printf("clave de materia\n");
    scanf("%s",&ESTU.TRES[i].clave);
    printf("los creditos\n");
    scanf("%d",&ESTU.TRES[i].credito);
    printf("horas practicas\n");
    scanf("%d",&ESTU.TRES[i].horas_P);
    printf("horas teoricas\n");
    scanf("%d",&ESTU.TRES[i].horas_T);
    printf("nombre la materia\n");
    scanf("%s",&ESTU.TRES[i].nombre);
    printf("prerequisito\n");
    scanf("%s",&ESTU.TRES[i].pre_requisito);
    }
    printf("\n\n");

};


void publicar_calificaciones_numericas_a_un_estudiante_de_una_materia(){

    for(i=0;i<LIM;LIM++){
        printf("%d/n",ESTU.TRES[i].nombre);
    }

};


void borrar_calificaciones(){


};


void calcular_indice(){

    for(i=0;i<LIM;i++){

        printf("en %s de \n",ESTU.TRES[i].nombre);
        fflush(stdin);
        printf("digite la letra");
        scanf("%s",&letra);
        int valor;
        float indice;
        for(i=0;i<LIM;i++){
            credito+=ESTU.TRES[i].credito;
        }
        printf("creditos del ciclo,%d",credito);
        for(i=0;i<=LIM;i++){
            if(letra=='a'){valor+=4;};
            if(letra=='b'){valor+=3;};
            if(letra=='c'){valor+=2;};
            if(letra=='d'){valor+=1;};
            if(letra=='f'){valor+=0;};
        }
        printf("valor acumulado %d\n",valor);
        indice=valor/credito;
        printf("indice final%f\n",indice);
}
};


void calcular_calificacion_promedio_de_una_materia(){

printf("calcular promedio de una matateria\n");
float notas[10];
int canti;
float final=0;
    printf("digite la cantidad de evaluaciones hechas\n");
    scanf("%d",&canti);
    for(i=0;i<canti;i++){
    printf("digite la calificacion %d de %d\n ",i+1,canti);
    scanf("%f",&notas[i]);
    final += notas[i];
    }
    final= final/canti;
    printf("el acumulado es de %.2f\n\n",final);

};


void alcular_calificacion_promedio_de_una_carrera(){


};


void la_cantidad_de_horas_practicas_por_carrera(){
};



