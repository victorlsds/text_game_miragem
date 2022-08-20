#include <locale.h> //necessário para usar setlocale
#include <stdio.h>
#include <stdlib.h>
#include <time.h>   //tempo para delay
#include <unistd.h> //delay

int main() {

  setlocale(LC_ALL, "Portuguese"); // para caracteres em pt
  system("clear");
  vi_inicio();
  return 0;
}

saida() {
  system("clear");
  return 0;
}

vi_inicio() {
  FILE *pont_arq;
  char text_str[2];

  pont_arq = fopen("texto_intro.txt", "r");
  while (fgets(text_str, 2, pont_arq) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str, usleep(15000));

  fclose(pont_arq);

  char esa1;
  scanf("%s", &esa1);
  getchar();

  switch (esa1) {
  case '1':
    system("clear");
    capitulo_1();
    break;
  case '2':
    system("clear");
    tutorial();
    break;
  case '3':
    system("clear");
    saida();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Nao entendi...\n");
    return vi_inicio();
    break;
  }
}

tutorial() {
  FILE *pont_arq;
  char text_str[2], esc;

  system("clear");

  pont_arq = fopen("tutorial.txt", "r");
  while (fgets(text_str, 2, pont_arq) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str, usleep(15000));

  fclose(pont_arq);
  scanf("%s", &esc);
  getchar();

  if (esc == '1') {
    system("clear");
    capitulo_1();

  } else if (esc == '0') {
    system("clear");
    saida();
  } else {
    sleep(1);
        printf("%s", text_str, usleep(15000));("\n Nao entendi...\n");
    sleep((float)2.5);
    system("clear");

    return tutorial();
  }
}

capitulo_1() {
  FILE *pont_arq;
  char text_str[2], esc;

  pont_arq = fopen("cap1_0.txt", "r");
  while (fgets(text_str, 2, pont_arq) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);

  fclose(pont_arq);

  scanf("%s", &esc);
  getchar();

  if (esc == '1') {
    system("clear");
    capitulo1_1();

  } else if (esc == '0') {
    system("clear");
    saida();
  }
}

capitulo1_1() {
  system("clear");
  FILE *pont_arq;
  char text_str[2], esc;

  pont_arq = fopen("cap1_1.txt", "r");
  while (fgets(text_str, 2, pont_arq) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);

  fclose(pont_arq);

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo1_1_1();
    break;
  case '2':
    system("clear");
    capitulo1_2();
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
  }
}

capitulo1_1_1() {
  FILE *pont_arq;
  char text_str[2], esc;

  pont_arq = fopen("cap1_1_1.txt", "r");
  while (fgets(text_str, 2, pont_arq) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);

  fclose(pont_arq);

  scanf("%s", &esc);
  getchar();

  if (esc == '1') {
    system("clear");
    capitulo1_2();

  } else if (esc == '0') {
    system("clear");
    saida();
  }
}

capitulo1_2() {
  system("clear");
  FILE *pont_arq;
  char text_str[2], esc;

  pont_arq = fopen("cap1_2.txt", "r");
  while (fgets(text_str, 2, pont_arq) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);

  fclose(pont_arq);

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
  case '2':
  case '3':
    system("clear");
    capitulo1_3();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
  }
}

capitulo1_3() {
  system("clear");
  FILE *pont_arq;
  char text_str[2], esc;

  pont_arq = fopen("cap1_3.txt", "r");
  while (fgets(text_str, 2, pont_arq) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);

  fclose(pont_arq);

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
  case '2':
  case '3':
    system("clear");
    capitulo1_4();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
  }
}

capitulo1_4() {
  system("clear");
  FILE *pont_arq;
  char text_str[2], esc;
  int valor;

  pont_arq = fopen("cap1_4.txt", "r");
  while (fgets(text_str, 2, pont_arq) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);

  fclose(pont_arq);

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
        printf("%s", text_str, usleep(15000));("Informe o seu valor: ");
    scanf("%d", &valor);
    system("clear");
        printf("%s", text_str, usleep(15000));("Você informa seu valor de %d rúpias...\n\n", valor);
    capitulo1_5();
  case '2':
    system("clear");
    capitulo1_5();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
  }
}
capitulo1_5() {
  system("clear");
  FILE *pont_arq;
  char text_str[2], esc;

  pont_arq = fopen("cap1_5.txt", "r");
  while (fgets(text_str, 2, pont_arq) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);

  fclose(pont_arq);

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo2();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
  }
}

capitulo2() {
  system("clear");
  FILE *pont_arq;
  char text_str[2], esc;

  pont_arq = fopen("cap2_0.txt", "r");
  while (fgets(text_str, 2, pont_arq) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);

  fclose(pont_arq);

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo2_1();
    break;
  case '2':
    system("clear");
    capitulo2_0_1();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
  }
}

capitulo2_0_1() {
  system("clear");
  FILE *pont_arq;
  char text_str[2], esc;

  pont_arq = fopen("cap2_0_1.txt", "r");
  while (fgets(text_str, 2, pont_arq) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);

  fclose(pont_arq);

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo2_1();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
  }
}

capitulo2_1() {
  system("clear");
  FILE *pont_arq;
  char text_str[2], esc;

  pont_arq = fopen("cap2_1.txt", "r");
  while (fgets(text_str, 2, pont_arq) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);

  fclose(pont_arq);

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo2_2_0();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
  }
}

capitulo2_2_0() {
  system("clear");
  FILE *pont_arq;
  char text_str[2], esc;

  pont_arq = fopen("cap2_2_0.txt", "r");
  while (fgets(text_str, 2, pont_arq) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);

  fclose(pont_arq);

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo2_3();
    break;
  case '2':
    system("clear");
    extra1();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
  }
}

extra1() {
  system("clear");
  FILE *pont_arq;
  char text_str[2], esc;

  pont_arq = fopen("cap2_2_1.txt", "r");
  while (fgets(text_str, 2, pont_arq) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);

  fclose(pont_arq);

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo2_3();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
  }
}
capitulo2_3() {
  system("clear");
  FILE *pont_arq;
  char text_str[2], esc;
  int esc2 = 0;

  pont_arq = fopen("cap2_3.txt", "r");
  while (fgets(text_str, 2, pont_arq) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);

  fclose(pont_arq);

  scanf("%s", &esc);
  getchar();

  if (esc == '1') {
    system("clear");
    capitulo2_4();

  } else if (esc == '2') {
    system("clear");
        printf("%s", text_str, usleep(15000));("\nVocê consegue apontar o espelho, ele reflete para todos os "
           "cantos porém nada acontece...");
        printf("%s", text_str, usleep(15000));("\n\n [1] Tentar apontar os espelho para porta\n");
  }
  scanf("d", &esc2);
  if (esc2 == 1) {
    capitulo2_4();
  }
  capitulo2_4();
}

capitulo2_4() {
  system("clear");
  FILE *pont_arq;
  char text_str[2], esc, esc2;

  pont_arq = fopen("cap2_4.txt", "r");
  while (fgets(text_str, 2, pont_arq) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);

  fclose(pont_arq);
  sleep(7);
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo3_0();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
  }
}
capitulo3_0() {
  system ("clear");
  FILE *pont_arq1;
  char text_str[2], esc;

  pont_arq1 = fopen("capitulo3_0.txt", "r");
  while (fgets(text_str, 2, pont_arq1) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);

  fclose(pont_arq1);
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
  case '2':
  case '3':
    system("clear");
    capitulo3_1_0();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
  }
}
capitulo3_1_0() {
  system("clear");
  FILE *pont_arq1;
  char text_str[2], esc;

  pont_arq1 = fopen("capitulo3_1_0.txt", "r");
  while (fgets(text_str, 2, pont_arq1) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);

  fclose(pont_arq1);
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo3_1_1();
    break;
  case '2':
    system("clear");
    capitulo3_1_2();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
  }
}
capitulo3_1_1() {
  system("clear");
  FILE *pont_arq;
  char text_str[2], esc;

  pont_arq = fopen("capitulo3_1_1.txt", "r");
  while (fgets(text_str, 2, pont_arq) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);

  fclose(pont_arq);
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo3_1_2();
  case '2':
    system("clear");
    capitulo3_1_3();
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
  }
}

capitulo3_1_2() {
  system("clear");
  FILE *pont_arq1;
  char text_str[2], esc;

  pont_arq1 = fopen("capitulo3_1_2.txt", "r");
  while (fgets(text_str, 2, pont_arq1) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fclose(pont_arq1);
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo4_0();
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
  }
}
capitulo3_1_3() {
  system("clear");
  FILE *pont_arq1;
  char text_str[2], esc;

  pont_arq1 = fopen("capitulo3_1_3.txt", "r");
  while (fgets(text_str, 2, pont_arq1) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq1);
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo4_0();
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
  }
}
capitulo4_0() {
  system("clear");
  FILE *pont_arq1;
  char text_str[2], esc;

  pont_arq1 = fopen("capitulo4_0.txt", "r");
  while (fgets(text_str, 2, pont_arq1) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq1);
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo4_0_1();
    break;
  case '2':
    system("clear");
    capitulo4_0_2();
    break;
  case '3':
    system("clear");
    capitulo4_1();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
  }
}

capitulo4_0_1() {
  system("clear");
  FILE *pont_arq1;
  char text_str[2], esc;

  pont_arq1 = fopen("capitulo4_0_1.txt", "r");
  while (fgets(text_str, 2, pont_arq1) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq1);
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    puts("\n\nKhalid não te responde...\n\n");
    capitulo4_1();
    break;
  case '2':
    system("clear");
    capitulo4_0_2();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
  }
}

capitulo4_0_2() {
  system("clear");
  FILE *pont_arq1;
  char text_str[2], esc;

  pont_arq1 = fopen("capitulo4_0_2.txt", "r");
  while (fgets(text_str, 2, pont_arq1) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq1);
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo4_1();
    break;
  }
}

capitulo4_1() {
  system("clear");
  FILE *pont_arq1;
  char text_str[2], esc;

  pont_arq1 = fopen("capitulo4_1.txt", "r");
  while (fgets(text_str, 2, pont_arq1) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq1);
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo4_2();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
    break;
  }
}

capitulo4_2() {
  system("clear");
  FILE *pont_arq1;
  char text_str[2], esc;

  pont_arq1 = fopen("capitulo4_2.txt", "r");
  while (fgets(text_str, 2, pont_arq1) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq1);
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo4_3();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
    break;
  }
}

capitulo4_3() {
  system("clear");
  FILE *pont_arq1;
  char text_str[2], esc;

  pont_arq1 = fopen("capitulo4_3.txt", "r");
  while (fgets(text_str, 2, pont_arq1) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq1);
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo4_4();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
    break;
  }
}

capitulo4_4() {
  system("clear");
  FILE *pont_arq1;
  char text_str[2], esc;

  pont_arq1 = fopen("capitulo4_4.txt", "r");
  while (fgets(text_str, 2, pont_arq1) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq1);
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo4_5();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
    break;
  }
}

capitulo4_5() {
  system("clear");
  FILE *pont_arq1;
  char text_str[2], esc;

  pont_arq1 = fopen("capitulo4_5.txt", "r");
  while (fgets(text_str, 2, pont_arq1) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq1);
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo5_0();
    break;
  default:
        printf("%s", text_str, usleep(15000));("\n Comando inválido");
    break;
  }
}

capitulo5_0() {
  system("clear");
  FILE *pont_arq;
  char text_str[2], esc, esc2;

  pont_arq = fopen("capitulo5_0.txt", "r");
  while (fgets(text_str, 2, pont_arq) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);

  fclose(pont_arq);
  sleep(3);
  capitulo5_1_0();
}

capitulo5_1_0() {
  system("clear");
  FILE *pont_arq1;
  char text_str[2], esc;

  pont_arq1 = fopen("capitulo5_1_0.txt", "r");
  while (fgets(text_str, 2, pont_arq1) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq1);
  scanf("%s", &esc);
  getchar();

  switch (esc) {

  case '2':
    system("clear");
    capitulo5_2_0();
    break;
  default:
    puts("\n\nVocê errou, vou lhe dar mais uma chance\n");
    sleep(2);
    capitulo5_1_0();
    break;
  }
}

capitulo5_2_0() {
  system("clear");
  FILE *pont_arq2;
  char text_str[2], esc;

  pont_arq2 = fopen("capitulo5_2_0.txt", "r");
  while (fgets(text_str, 2, pont_arq2) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq2);
  scanf("%s", &esc);
  getchar();

  switch (esc) {

  case '1':
    system("clear");
    capitulo5_3();
    break;
  default:
    puts("\n\nVocê errou, vou lhe dar mais uma chance\n");
    sleep(2);
    capitulo5_2_0();
    break;
  }
}

capitulo5_3() {
  system("clear");
  FILE *pont_arq2;
  char text_str[2];

  pont_arq2 = fopen("capitulo53.txt", "r");
  while (fgets(text_str, 2, pont_arq2) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fclose(pont_arq2);
  sleep(12);
  capitulo5_4();
}

capitulo5_4() {
  system("clear");
  FILE *pont_arq2;
  char text_str[2];

  pont_arq2 = fopen("capitulo5_4.txt", "r");
  while (fgets(text_str, 2, pont_arq2) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fclose(pont_arq2);
  sleep(5);
  capitulo6_0();
}

capitulo6_0() {
  system("clear");
  FILE *pont_arq3;
  char text_str[2], esc;

  pont_arq3 = fopen("capitulo6_0.txt", "r");
  while (fgets(text_str, 2, pont_arq3) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq3);
  scanf("%s", &esc);
  getchar();

  switch (esc) {

  case '1':
    system("clear");
    capitulo6_0_1();
    break;
  case '2':
    system("clear");
    capitulo6_0_2();
  case '3':
    system("clear");
    capitulo6_3();
  default:
    puts("\n\nComando inválido\n");
    break;
  }
}

capitulo6_0_1() {
  system("clear");
  FILE *pont_arq3;
  char text_str[2], esc;

  pont_arq3 = fopen("capitulo6_1.txt", "r");
  while (fgets(text_str, 2, pont_arq3) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq3);
  sleep(8);
  capitulo6_0();
}

capitulo6_0_2() {
  system("clear");
  FILE *pont_arq3;
  char text_str[2], esc;

  pont_arq3 = fopen("capitulo6_2.txt", "r");
  while (fgets(text_str, 2, pont_arq3) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq3);
  sleep(8);
  capitulo6_0();
}
capitulo6_3() {
  system("clear");
  FILE *pont_arq3;
  char text_str[2], esc;

  pont_arq3 = fopen("capitulo6_3.txt", "r");
  while (fgets(text_str, 2, pont_arq3) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq3);
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  default:
    capitulo6_4();
    break;
  }
}
capitulo6_4(){
  system("clear");
  FILE *pont_arq3;
  char text_str[2], esc;

  pont_arq3 = fopen("capitulo6_4.txt", "r");
  while (fgets(text_str, 2, pont_arq3) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq3);
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  default:
    capitulo6_5();
    break;
  }
}

capitulo6_5(){
  system("clear");
  FILE *pont_arq3;
  char text_str[2], esc;

  pont_arq3 = fopen("capitulo6_5.txt", "r");
  while (fgets(text_str, 2, pont_arq3) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq3);
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  default:
    capitulo6_6();
    break;
  }
}

capitulo6_6(){
  system("clear");
  FILE *pont_arq3;
  char text_str[2], esc;

  pont_arq3 = fopen("capitulo6_6.txt", "r");
  while (fgets(text_str, 2, pont_arq3) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq3);
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  default:
    capitulo6_7();
    break;
  }
}

capitulo6_7(){
  system ("clear");
  FILE *pont_arq3;
  char text_str[2], esc;

  pont_arq3 = fopen("capitulo6_7.txt", "r");
  while (fgets(text_str, 2, pont_arq3) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq3);
  sleep(8);
  capitulo6_8();
}

capitulo6_8(){
  system("clear");
  FILE *pont_arq3;
  char text_str[2], esc;

  pont_arq3 = fopen("capitulo6_8.txt", "r");
  while (fgets(text_str, 2, pont_arq3) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq3);
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  default:
    capitulo6_9();
    break;
  }  
}

capitulo6_9(){
  system ("clear");
  FILE *pont_arq3;
  char text_str[2], esc;

  pont_arq3 = fopen("capitulo6_9.txt", "r");
  while (fgets(text_str, 2, pont_arq3) != NULL)
        printf("%s", text_str, usleep(15000));("%s", text_str);
  fflush(stdin);
  fclose(pont_arq3);
  sleep(8);
  return 0;
}