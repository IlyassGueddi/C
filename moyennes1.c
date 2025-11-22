#include <stdio.h>

void note(char Nmodule[50], float module);

float somme; 

int main(){
    float analyse;
    float algebre;
    float prgpython;
    float algprgc;
    float electronic;
    float architecture;
    float MTU;

    char analyseN[50] = "analyse";
    char algebreN[50] = "algebre";
    char prgpythonN[50] = "prgpython";
    char algprgcN[50] = "algprgpython";
    char electronicN[50] = "electronic";
    char architectureN[50] = "architecture";
    char MTUN[50] = "MTU";
    
    note(analyseN, analyse);
    note(algebreN, algebre);
    note(prgpythonN, prgpython);
    note(algprgcN, algprgc);
    note(electronicN, electronic);
    note(architectureN, architecture);
    note(MTUN, MTU);

    printf("%.2f\n\n", somme / 7);
    

    return 0;
}

void note(char Nmodule[50], float module){
    printf("%s : ", Nmodule);
    scanf("%f", &module);
    somme += module;
}

