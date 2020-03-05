#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int rima(char p1[], char p2[]){
    if (!strcmp(p1, p2)) return 0;
    int i = strlen(p1)-1, j = strlen(p2)-1;
    if (i < 2 || j < 2) return 0;
    if (p1[i-2] == p2[j-2] && p1[i-1] == p2[j-1] && p1[i] == p2[j])return 1;
    else return 0;
}

int main()
{
    time_t t;
    int c = 0, tam, l = 0, timeout = 0, fim = 0, ti = 20000;
    char r[30], word[30] = "aventura";
    printf("Ola avenureira(o), eu sou deus e bem vindo ao mundo da rima.\nVoce esta bem? Pra mim ta tudo em cima.\n");
    printf("Nesse mundo o que importa eh rimar, nao importa que artimanha armar.\n");
    printf("Para isso a rima tem que ser boa de verdade e por isso as tres ultimas letras tem que ser iguais, sem vaidade.\n");
    printf("Voce tem que rimar com a ultima palavra que eu falar, e nada de repetir nao venha me enrolar.\n");
    printf("Eh facil, mas nao tem sorte.\nse voce errar... MORTE.\n");
    printf("Vamos comecar a aventura?\n");
    scanf("%s", &r);
    if (rima(r, "aventura")){
        while (1)
        {
            if (tam == 3) l++;
            else l = 0;
            if (l == 2) printf("------Tente palavras com mais de tres letras, para evitar quaisquer tretas------\n");
            if (!rima(r, word) || l == 3 || timeout){
                printf("Esse jogo nao tem sorte.\nApenas sua falta de habilidade te levou a MORTE.\n");
                printf("Adeus aventureira(o) foi um bom jogo.\nBoa sorte na próxima e chegamos ao fim do dialogo.\n");
                break;
            }
            if (fim){
                printf("Esse foi o mundo da rima espero que tenha gostado.\n");
                printf("Pode apostar que por aqui voce sera lembrado.\n");
                printf("Adeus aventureira(o) esse e o fim do caminho.\nEspero que voce lembre do nosso mundo com carinho.\n");
                break;
            }
            switch (c){
                case 0:
                    printf("Gostei da palavra aventureira(o), se mostrou uma() verdadeira(o) guerreira(a).\n");
                    printf("Agora te darei um tour do meu mundo.\n");
                    strcpy(word, "mundo");
                    break;
                case 1:
                    printf("A minha direita olhe só, está tendo festa dos sinonimos.\n");
                    printf("Por isso não vemos por ai nenhum dos antonimos.\n");
                    printf("Como eles combinam...\n");
                    strcpy(word, "combinam");
                    break;
                case 2:
                    printf("Mais a frente olhe que lindo parque, tudo em plena paz, nenhum ataque.\n");
                    printf("Que tal darmo uma corrida?\nAi sim aproveitaremos as coisas boas da vida.\n");
                    printf("Esta pronta?\n");
                    strcpy(word, "pronta");
                    break;
                case 3:
                    printf("Agora que as coisas ficam interessantes, e talvez ate um pouco extressantes.\n");
                    printf("As resposta agora tem que ser rapidas.\n");
                    strcpy(word, "rapidas");
                    t = time(NULL);
                    ti = 40;
                    break;
                case 4:
                    printf("Vamos vamos, nao consegue acompanhar?\n");
                    printf("Corre logo ou o tempo vai te apanhar.\n");
                    printf("O tempo fica cada vez mais curto.\n");
                    strcpy(word, "curto");
                    ti = 30;
                    break;
                case 5:
                    printf("Agora entao vamos apostar corrida.\n");
                    printf("Vou falar uma palavra e ela tem que ser respondida.\n");
                    printf("Esta pronta(o) para comecar?\n");
                    strcpy(word, "comecar");
                    ti = 20000;
                    break;
                case 6:
                    printf("velocidade\n");
                    strcpy(word, "velocidade");
                    ti = 20;
                    break;
                case 7:
                    printf("aceleracao\n");
                    strcpy(word, "aceleracao");
                    ti = 15;
                    break;
                case 8:
                    printf("medo\n");
                    strcpy(word, "medo");
                    ti = 10;
                    break;
                case 9:
                    printf("desespero\n");
                    strcpy(word, "desespero");
                    ti = 8;
                    break;
                case 10:
                    printf("final\n");
                    strcpy(word, "final");
                    ti = 4;
                    fim++;
                    break;                       
            }
            t = time(NULL);
            scanf("%s", &r);
            printf("Tempo: %li\n", (time(NULL) - t));
            if ((time(NULL) - t) > ti) timeout = 1; 
            tam = strlen(r);
            c++;
        }
        
    } else {
        printf("\nVoce morreu no mundo das rimas na primeira tentativa.\n");
        printf("Nao ouvir deus so leva ao fim da narrativa.\n");
        printf("Boa sorte aventureira(o) na proxima vida.\n");
        printf("Pois esse caminho que voce esta seguindo eh so de ida.\n");
        printf("Adeus aventureira(o) e ate nunca mais\nQuero ver explicar essa derrota humilhante para os seus pais.\n"); 
    }
    return 0;
}
