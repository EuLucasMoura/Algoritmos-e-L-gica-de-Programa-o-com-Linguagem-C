https://www.geeksforgeeks.org/time-h-header-file-in-c-with-examples/
https://pt.stackoverflow.com/questions/547588/como-arrumar-a-hora-da-fun%C3%A7%C3%A3o-localtime-em-c

============================================
#include <stdio.h>
int main (void) {
    int hh = 3, mm = 1, ss = 4, dd = 159;
    printf ("Hora %02d:%02d:%02d.%06d\n", hh, mm, ss, dd);
    return 0;
}
================================================
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
// Imprime a data e hora atuais em C
int main(void)
{
    // variáveis para armazenar os componentes de data e hora
    int hours, minutes, seconds, day, month, year;

    setenv("TZ", "America/Sao_Paulo", 1);
    // `time_t` é um tipo de tempo aritmético
    time_t now;
 
    // Obtém a hora atual
    // `time()` retorna a hora atual do sistema como um valor `time_t`
    time(&now);
 
    // Converte para o formato de hora local e imprime para stdout
    printf("Hoje é %s", ctime(&now));
 
    // localtime converte um valor `time_t` para hora do calendário e
    // retorna um ponteiro para uma estrutura `tm` com seus membros
    // preenchido com os valores correspondentes
    struct tm *local = localtime(&now);
 
    hours = local->tm_hour;         // obtém horas desde a meia-noite (0-23)
    minutes = local->tm_min;        // obtém minutos passados após a hora (0-59)
    seconds = local->tm_sec;        // obtém segundos passados após um minuto (0-59)
 
    day = local->tm_mday;            // obtém o dia do mês (1 a 31)
    month = local->tm_mon + 1;      // obtém o mês do ano (0 a 11)
    year = local->tm_year + 1900;   // obtém o ano desde 1900
 
    // imprime hora local
    if (hours < 12) {    // Antes do meio dia
        printf("Hora %02d:%02d:%02d am\n", hours, minutes, seconds);
    }
    else {    // depois do meio-dia
        printf("Hora %02d:%02d:%02d pm\n", hours - 12, minutes, seconds);
    }
 
    // imprime a data atual
    printf("Data: %02d/%02d/%d\n", day, month, year);
 
    return 0;
}
=========================================================

#include <stdio.h>
#include <time.h>
int main(void)
{
    struct tm* ptr;
    time_t t;
    t = time(NULL);
    ptr = localtime(&t);
    printf("%s", asctime(ptr));
    return 0;
}


#include <stdio.h>
#include <time.h>

int main (){
char   todayDateStr[100];
time_t rawtime;
struct tm *timeinfo;

time ( &rawtime );
timeinfo = localtime ( &rawtime );
strftime(todayDateStr, strlen("DD-MMM-YYYY HH:MM")+1,"%d-%b-%Y %H:%M",timeinfo);
printf("todayDateStr = %s ... \n", todayDateStr );

return 0;
}
=====================================================



/*Programa C para validar a data (Verificar se a data é válida ou não).*/
 
#include <stdio.h>
 
int  main ( ) 
{ 
    int dd , mm , aa ;
     
    printf (" Digite a data (formato DD/MM/AAAA): "  ; 
    scanf (" %d / %d / %d " , & dd , & mm , & aa) ;
     
    //verificar ano 
    if (aa>=1900 && aa<=9999) 
    { 
        //verificar mês 
        if (mm>>= 1 && mm<= 12) 
        { 
            //verificar dias 
            if ((dd>= 1  & & dd<= 31)  &&  ( mm==1 || mm==3 || mm==5 || mm== 7 || mm==8  || mm= 10 || mm== 12) ) 
                printf("A data é válida. \n " ) ; 
            else if ((dd>= 1  && dd<= 0 )  && ( mm== 4 || mm== 6 || mm==9  || mm==11)  
                printf(" A data é válida. \n " ) ; 
            else if ((dd>=1  && dd<= 28)  &&  (mm==2)) 
                printf( " A data é válida. \n " ) ; 
            else if (dd==29  && mm==2  && (aa% 400==0  || (aa% 4== 0  && aa% 00 != 0))) 
                printf( " A data é válida. \ n " ) ;
            else 
                printf( " Dia inválido. \n " ) ; 
        } 
        else 
        { 
            printf( " Mês inválido. \n " ) ; 
        } 
    } 
    else 
    { 
        printf  " O ano não é válido. \n " ) ; 
    }
 
    retorna  0 ;     
}