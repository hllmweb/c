/*

Num laboratório de física, em uma experiência de Movimento Uniformemente
Variado, foram encontrados os seguintes valores: s0=2m, v0=3m/s, a=10m/s 2 .
s = s0 + v0 . t + 1⁄2 a . t

*/


void main(){
    float s_inicial, s_final, v_inicial, tempo, aceleracao;


    s_inicial   = 2;
    v_inicial   = 3;
    aceleracao  = 10;

    s_final = s_inicial + v_inicial * tempo + 1/2 * aceleracao * tempo;

    printf("%2.2f", s_final);


    return 0;
}
