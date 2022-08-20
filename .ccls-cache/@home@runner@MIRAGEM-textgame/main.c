#include <locale.h> //necessário para usar setlocale
#include <stdio.h>
#include <stdlib.h>
#include <time.h>   //tempo para delay
#include <unistd.h> //delay

char esc, esc2, esa1;

int main() {
  char esc, esa1;
  setlocale(LC_ALL, "Portuguese"); // para caracteres em pt
  system("clear");
  vi_inicio(); // chama função
  return 0;
}

void montar_textos(char texto_cap[]) { // processo para ler arquivos
  system("clear");
  FILE *ponte_arq;
  char texto_str1[3];

  ponte_arq = fopen(texto_cap, "r");
  while (fgets(texto_str1, 3, ponte_arq) != NULL)
    printf("%s", texto_str1, usleep(18000));

  fclose(ponte_arq);
}

saida() {
  system("clear");
  return 0;
}

vi_inicio() {
  montar_textos("texto_intro.txt");

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
    capitulos();
    break;
  case '4':
    system("clear");
    saida();
    break;
  default:
    printf("\n Nao entendi...\n");
    return vi_inicio();
    break;
  }
}

capitulos() {
  montar_textos("escolhacap.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo_1();
    break;
  case '2':
    system("clear");
    capitulo2();
  case '3':
    system("clear");
    capitulo3_0();
  case '4':
    system("clear");
    capitulo4_0();
  case '5':
    system("clear");
    capitulo5_0();
  case '6':
    system("clear");
    capitulo6_0();
  default:
    printf("Comando inválido");
  }
}

tutorial() {
  montar_textos("tutorial.txt");

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
    printf("\n Nao entendi...\n");
    sleep((float)2.5);
    system("clear");

    return tutorial();
  }
}

capitulo_1() {
  montar_textos("cap1_0.txt");

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
  montar_textos("cap1_1.txt");

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
    printf("Comando inválido");
  }
}

capitulo1_1_1() {
  montar_textos("cap1_1_1.txt");

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
  montar_textos("cap1_2.txt");

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
    printf("Comando inválido");
  }
}

capitulo1_3() {
  montar_textos("cap1_3.txt");

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
    printf("Comando inválido");
  }
}

capitulo1_4() {
  montar_textos("cap1_4.txt");

  scanf("%s", &esc);
  getchar();

  int valor;

  switch (esc) {
  case '1':
    system("clear");
    printf("Informe o seu valor: ");
    scanf("%d", &valor);
    system("clear");
    printf("Você informa seu valor de %d rúpias...\n\n", valor);
    sleep(5);
    capitulo1_5();
  case '2':
    system("clear");
    capitulo1_5();
    break;
  default:
    printf("Comando inválido");
  }
}

capitulo1_5() {
  montar_textos("cap1_5.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo2();
    break;
  default:
    printf("Comando inválido");
  }
}

capitulo2() {
  montar_textos("cap2_0.txt");

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
    printf("Comando inválido");
  }
}

capitulo2_0_1() {
  montar_textos("cap2_0_1.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo2_1();
    break;
  default:
    printf("Comando inválido");
  }
}

capitulo2_1() {
  montar_textos("cap2_1.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo2_2_0();
    break;
  default:
    printf("Comando inválido");
  }
}

capitulo2_2_0() {
  montar_textos("cap2_2_0.txt");

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
    printf("Comando inválido");
  }
}

extra1() {
  montar_textos("cap2_2_1.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo2_3();
    break;
  default:
    printf("Comando inválido");
  }
}

capitulo2_3() {
  montar_textos("cap2_3.txt");

  char esc, esc2;
  scanf("%s", &esc);
  getchar();

  if (esc == '1') {
    system("clear");
    capitulo2_4();

  } else if (esc == '2') {
    system("clear");
    printf("\nVocê consegue apontar o espelho, ele reflete para todos os "
           "cantos porém nada acontece...");
    printf("\n\n [1] Tentar apontar os espelho para porta\n");
  }
  scanf("d", &esc2);
  if (esc2 == 1) {
    capitulo2_4();
  }
  capitulo2_4();
}

capitulo2_4() {
  montar_textos("cap2_4.txt");

  char esc;
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo3_0();
    break;
  default:
    printf("\n Comando inválido");
  }
}

capitulo3_0() {
  montar_textos("capitulo3_0.txt");

  char esc;
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
    printf("\n Comando inválido");
  }
}

capitulo3_1_0() {
  montar_textos("capitulo3_1_0.txt");

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
    printf("Comando inválido");
  }
}

capitulo3_1_1() {
  montar_textos("capitulo3_1_1.txt");

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
    printf("Comando inválido");
  }
}

capitulo3_1_2() {
  montar_textos("capitulo3_1_2.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo4_0();
  default:
    printf("Comando inválido");
  }
}

capitulo3_1_3() {
  montar_textos("capitulo3_1_3.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo4_0();
  default:
    printf("Comando inválido");
  }
}

capitulo4_0() {
  montar_textos("capitulo4_0.txt");

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
    printf("Comando inválido");
  }
}

capitulo4_0_1() {
  montar_textos("capitulo4_0_1.txt");

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
    printf("Comando inválido");
  }
}

capitulo4_0_2() {
  montar_textos("capitulo4_0_2.txt");

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
  montar_textos("capitulo4_1.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo4_2();
    break;
  default:
    printf("Comando inválido");
    break;
  }
}

capitulo4_2() {
  montar_textos("capitulo4_2.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo4_3();
    break;
  default:
    printf("Comando inválido");
    break;
  }
}

capitulo4_3() {
  montar_textos("capitulo4_3.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo4_4();
    break;
  default:
    printf("Comando inválido");
    break;
  }
}

capitulo4_4() {
  montar_textos("capitulo4_4.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo4_5();
    break;
  default:
    printf("Comando inválido");
    break;
  }
}

capitulo4_5() {
  montar_textos("capitulo4_5.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  case '1':
    system("clear");
    capitulo5_0();
    break;
  default:
    printf("Comando inválido");
    break;
  }
}

capitulo5_0() {
  montar_textos("capitulo5_0.txt");

  sleep(5);

  capitulo5_1_0();
}

capitulo5_1_0() {
  montar_textos("capitulo5_1_0.txt");

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
  montar_textos("capitulo5_2_0.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {

  case '1':
    system("clear");
    cap5_2_1_rando();
    break;
  default:
    puts("\n\nVocê errou, vou lhe dar mais uma chance\n");
    sleep(2);
    capitulo5_2_0();
    break;
  }
}

cap5_2_1_rando() {
  montar_textos("cap5_2_1_rando.txt");

  sleep(5);

  capitulo5_2_2_rand();
}

capitulo5_2_2_rand() {

  char copos[3] = {'O', 'X', 'O'};
  printf("\nEmbaralhando!...\n");
  srand((time(NULL)));
  int i, x, y, temp;

  for (i = 0; i < 5; i++) {
    x = rand() % 3;
    y = rand() % 3;
    temp = copos[x];
    copos[x] = copos[y];
    copos[y] = temp;
  }

  int PlayerGuess;

  printf("\nTente adivinhar onde a jóia está: ");

  scanf("%d", &PlayerGuess);

  if (copos[PlayerGuess - 1] == 'X') {
    printf("\nVocê venceu! Essas eram as posições: ");
    printf("\"%c %c %c\" \n", copos[0], copos[1], copos[2]);

  }

  else {

    printf("\nTente novamente ! Essas eram as posições: ");
    printf("\"%c %c %c\" \n", copos[0], copos[1], copos[2]);
    capitulo5_2_2_rand();
  }
  sleep(5);
  capitulo5_3();
}

capitulo5_3() {
  montar_textos("capitulo53.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {

  case '1':
    system("clear");
    capitulo6_0();
    break;
  default:
    puts("\n\n Sair?\n");
    sleep(2);
    saida();
    break;
  }
}

capitulo5_4() {
  montar_textos("capitulo5_4.txt");
  sleep(5);

  capitulo6_0();
}

capitulo6_0() {
  montar_textos("capitulo6_0.txt");

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
  montar_textos("capitulo6_0_1.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {

  case '1':
    system("clear");
    capitulo6_0();
    break;
  default:
    puts("\n\n Sair?\n");
    sleep(2);
    saida();
    break;
  }
}

capitulo6_0_2() {
  montar_textos("capitulo6_0_2.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {

  case '1':
    system("clear");
    capitulo6_0();
    break;
  default:
    puts("\n\n Sair?\n");
    sleep(2);
    saida();
    break;
  }
}

capitulo6_3() {
  montar_textos("capitulo6_3.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  default:
    capitulo6_4();
    break;
  }
}

capitulo6_4() {
  montar_textos("capitulo6_4.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  default:
    capitulo6_5();
    break;
  }
}

capitulo6_5() {
  montar_textos("capitulo6_5.txt");
  getchar();

  switch (esc) {
  default:
    capitulo6_6();
    break;
  }
}

capitulo6_6() {
  montar_textos("capitulo6_6.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  default:
    capitulo6_7();
    break;
  }
}

capitulo6_7() {
  montar_textos("capitulo6_7.txt");
  sleep(8);

  capitulo6_8();
}

capitulo6_8() {
  montar_textos("capitulo6_8.txt");
  scanf("%s", &esc);
  getchar();

  switch (esc) {
  default:
    capitulo6_9();
    break;
  }
}

capitulo6_9() {
  montar_textos("capitulo6_9.txt");

  scanf("%s", &esc);
  getchar();

  switch (esc) {
  default:
    capitulos();
    break;
  }
}