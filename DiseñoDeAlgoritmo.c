//  Diseño y desarrollo de un algoritmo para la solución de problemas matemáticos.
//  Versión: 1.6
/*Declaración de librerias*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
/*Declaracion de variables globales*/
#define m 100
/*Declaración de prototipo de funsiones*/
/* Paso 1: Prototipo */
void dimension(int *);
void llenarVectorAletorio(int, float a[m]);
void imprimirVector(int, float a[m],char);
void sumavectores(int, float a[m], float b[m], float e[m]);
void restavectores(int, float a[m], float b[m], float e[m]);
void multiplicacionvectores(int, float a[m], float b[m], float e[m]);
void dimensiones(int *,int *);
void llenarMatrizAletorio(int f,int c, float x[m][m]);
void imprimirMatriz(int,int, float x[m][m]);
void sumamatriz(int,int, float x[m][m], float y[m][m], float z[m][m]);
void restamatriz(int,int, float x[m][m], float y[m][m], float z[m][m]);
void multiplicacionmatriz(int,int, float x[m][m], float y[m][m], float z[m][m]);
void matrizidentidad(int,int, float x[m][m], float y[m][m], float z[m][m]);
void matriztranspuesta(int,int, float x[m][m], float z[m][m]);
void menuarreglos();
/* Declaración de función principal */
 /* Inicio de la función main */
int main(){
    menuarreglos();
 return 0;
}
void menuarreglos(){
    int opc,opc2,n,f,c;
    float a[m],b[m], e[m], x[m][m], y[m][m], z[m][m];
     char v1='a',v2='b', v3='e';
    /*Semilla para los valores aleotorios*/
    srand(time(NULL));
do{
    /* Menu principal */
    printf("\n Menu de operaciones: \n 1.vectores \n 2.matrices \n 3.salir ");
    printf("\n ¿Que condicion desea realizar? ");
    scanf("%d",&opc);
    switch (opc) {
        case 1:
            /* Menu: vectores*/
            printf("\n 1.suma \n 2.resta \n 3.multiplicación ");
            printf("\n ¿Que función desea realizar? ");
            scanf("%i",&opc2);
            
            switch (opc2) { /* Inicio de la sentencia Switch */
                case 1:
                   /*Mandar llamar las funciones*/
                   printf("\nDatos para el vector a\n");
                   dimension(&n);
                   //llenarVector(n, a);//Para pasar un arreglo solo se pone el nombre del arreglo
                   llenarVectorAletorio(n,a);
                   imprimirVector(n,a,v1);
                   printf("\nDatos para el vector b\n");
                   dimension(&n);
                   llenarVectorAletorio(n, b);//Para pasar un arreglo solo se pone el nombre del arreglo
                   imprimirVector(n,b,v2);
                sumavectores(n,a,b,e);
                printf("\n");
                    imprimirVector(n,e,v3);
                    break;
                case 2:
                /*Mandar llamar las funciones*/
                printf("\nDatos para el vector a\n");
                dimension(&n);
                //llenarVector(n, a);//Para pasar un arreglo solo se pone el nombre del arreglo
                llenarVectorAletorio(n,a);
                imprimirVector(n,a,v1);
                printf("\nDatos para el vector b\n");
                dimension(&n);
                llenarVectorAletorio(n, b);//Para pasar un arreglo solo se pone el nombre del arreglo
                imprimirVector(n,b,v2);
                restavectores(n,a,b,e);
                printf("\n");
                imprimirVector(n,e,v3);
                break;
                case 3:
                   /*Mandar llamar las funciones*/
                   printf("\nDatos para el vector a\n");
                   dimension(&n);
                   //llenarVector(n, a);//Para pasar un arreglo solo se pone el nombre del arreglo
                   llenarVectorAletorio(n,a);
                   imprimirVector(n,a,v1);
                   printf("\nDatos para el vector b\n");
                   dimension(&n);
                   llenarVectorAletorio(n, b);//Para pasar un arreglo solo se pone el nombre del arreglo
                   imprimirVector(n,b,v2);
                   multiplicacionvectores(n,a,b,e);
                   printf("\n");
                   imprimirVector(n,e,v3);
                    break;
                    }
              break;
        case 2:
             /*Menu: Matrices*/
            printf("\n1.suma \n2.resta \n3.multiplicacion \n4.matriz identidad \n5.matriz transpuesta");
            printf("\n¿que funcion desea realizar?");
            scanf("%i",&opc2);
            switch (opc2){
                case 1:
                  /*Mandar llamar las funciones*/
                  printf("\nDatos para la matriz a\n");
                  dimensiones(&f,&c);
                 //llenarMatriz(f,c,a);//Para pasar un arreglo solo se pone el nombre del arreglo
                 llenarMatrizAletorio(f,c,x);
                imprimirMatriz(f,c,x);
                printf("\nDatos para la matriz b\n");
                dimensiones(&f,&c);
                //llenarMatriz(f,c,b);//Para pasar un arreglo solo se pone el nombre del arreglo
                llenarMatrizAletorio(f,c,y);
                imprimirMatriz(f,c,y);
                sumamatriz(f,c,x,y,z);
            printf("\n");
                imprimirMatriz(f,c,z);
            break;
            case 2:
                /*Mandar llamar las funciones*/
                printf("\nDatos para la matriz a\n");
                dimensiones(&f,&c);
                //llenarMatriz(f,c,a);//Para pasar un arreglo solo se pone el nombre del arreglo
                llenarMatrizAletorio(f,c,x);
                imprimirMatriz(f,c,x);
                printf("\nDatos para la matriz b\n");
                dimensiones(&f,&c);
                //llenarMatriz(f,c,b);//Para pasar un arreglo solo se pone el nombre del arreglo
                llenarMatrizAletorio(f,c,y);
                imprimirMatriz(f,c,y);
                restamatriz(f,c,x,y,z);
                printf("\n");
                imprimirMatriz(f,c,z);
            break;
            case 3:
                /*Mandar llamar las funciones*/
                printf("\nDatos para la matriz a\n");
                dimensiones(&f,&c);
                //llenarMatriz(f,c,a);//Para pasar un arreglo solo se pone el nombre del arreglo
                llenarMatrizAletorio(f,c,x);
                imprimirMatriz(f,c,x);
                printf("\nDatos para la matriz b\n");
                dimensiones(&f,&c);
                //llenarMatriz(f,c,b);//Para pasar un arreglo solo se pone el nombre del arreglo
                llenarMatrizAletorio(f,c,y);
                imprimirMatriz(f,c,y);
                multiplicacionmatriz(f,c,x,y,z);
                printf("\n");
                imprimirMatriz(f,c,z);
            break;
            case 4:
                /*Mandar llamar las funciones*/
                printf("\nDatos para la matriz a\n");
                dimensiones(&f,&c);
                //llenarMatriz(f,c,a);//Para pasar un arreglo solo se pone el nombre del arreglo
                llenarMatrizAletorio(f,c,x);
                imprimirMatriz(f,c,x);
                printf("\nDatos para la matriz b\n");
                dimensiones(&f,&c);
                //llenarMatriz(f,c,b);//Para pasar un arreglo solo se pone el nombre del arreglo
                llenarMatrizAletorio(f,c,y);
                imprimirMatriz(f,c,y);
                matrizidentidad(f,c,x,y,z);
                printf("\n");
                imprimirMatriz(f,c,z);
            break;
            case 5:
                /*Mandar llamar las funciones*/
                printf("\nDatos para la matriz a\n");
                dimensiones(&f,&c);
                //llenarMatriz(f,c,a);//Para pasar un arreglo solo se pone el nombre del arreglo
                llenarMatrizAletorio(f,c,x);
                imprimirMatriz(f,c,x);
                matriztranspuesta(f,c,x,z);
                printf("\n");
                imprimirMatriz(f,c,z);
            break;
           }
      break;
        case 3:
            printf("\n Usted a elegido la opcion 3, ha salido del programa \n");
    }
    }while (opc!=3);
}
/* Paso 3: Cuerpo de las funciones */
/* Cuerpo de la función de vectores  */
void dimension(int *n){
    do{
        printf("\nIngresa cantidad de elementos(2-%d): ",m);
        scanf("%d",&*n);// scanf("%d",n);
    }while(*n>m || *n<2);
}
void imprimirVector(int n, float a[m],char v1){
    int i;
    for(i=0;i<=n-1;i++){
        printf("\n %c[%d]=%f ",v1,i,a[i]);
    }
}
void sumavectores(int n, float a[m], float b[m], float e[m]){
   int i;
   
    for(i=0;i<=n-1;i++){
        e[i]=a[i]+b[i];
    }
}
void restavectores(int n, float a[m], float b[m], float e[m]){
   int i;
   
    for(i=0;i<=n-1;i++){
        e[i]=a[i]-b[i];
    }
    
}
void multiplicacionvectores(int n, float a[m], float b[m], float e[m]){
   int i;
   
    for(i=0;i<=n-1;i++){
        e[i]=a[i]*b[i];
    }
}
void llenarVectorAletorio(int n, float a[m]){
    int i;
   for(i=0;i<=n-1;i++){
       a[i]=rand()%100+1;
   }
}
/* Cuerpo de la función de Matrices */
void dimensiones(int *f, int *c){// Los apuntadores f, c se inicializan con las dir. mem.
    do{
        printf("\nIngresa cantidad de filas (2-%d): ",m);
        scanf("%d",&*f);// scanf("%d",f);
    }while(*f>m || *f<2);
    do{
        printf("\nIngresa cantidad de columnas (2-%d): ",m);
        scanf("%d",&*c);// scanf("%d",c);
    }while(*c>m || *c<2);
}
void imprimirMatriz(int f,int c, float x[m][m]){
    int i,j;
    for(i=0;i<=f-1;i++){
        for(j=0;j<=c-1;j++){
            printf("%.3f ",x[i][j]);
        }
    printf("\n");
    }
}
void llenarMatrizAletorio(int f,int c, float x[m][m]){
    int i,j;
   for(i=0;i<=f-1;i++){
      for(j=0;j<=c-1;j++){
       x[i][j]=rand()%100+1;
      }
   }
}
void sumamatriz(int f,int c, float x[m][m], float y[m][m], float z[m][m]){
    int i,j;
    for(i=0;i<=f-1;i++){
      for(j=0;j<=c-1;j++){
          z[i][j]=x[i][j]+y[i][j];
      }
      printf("\n");
    }
}
void restamatriz(int f,int c, float x[m][m], float y[m][m], float z[m][m]){
    int i,j;
    for(i=0;i<=f-1;i++){
      for(j=0;j<=c-1;j++){
          z[i][j]=x[i][j]-y[i][j];
      }
      printf("\n");
    }
}
void multiplicacionmatriz(int f,int c, float x[m][m], float y[m][m], float z[m][m]){
    int i,j, k;
    for(i=0;i<=f-1;i++){
      for(j=0;j<=c-1;j++){
          z[i][j]=0;
          for(k=0; k<c; k++){
          z[i][j]+=x[i][k]*y[k][j];
      }
      }
      printf("\n");
    }
}
void matrizidentidad(int f,int c, float x[m][m], float y[m][m], float z[m][m]){
    int i,j;
    for(i=0; i<=f; i++){
        for(j=0; j<=c; j++){
            if(i == j){
                z[i][j]=1;
            }else {
                z[i][j]=0;
            }
        }
    }
}
void matriztranspuesta(int f,int c, float x[m][m], float z[m][m]){
    int i,j;
    for(i=0; i<=f; i++){
        for(j=0; j<=c; j++){
            z[i][j]=x[j][i];
        }
    }
}
