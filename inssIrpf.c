#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

float impostoInss,impostoIrrf, salarioBruto, salarioAtual;
      
setlocale(LC_ALL,"Portuguese");
      
printf("Informe o salário bruto: \n");
scanf("%f", &salarioBruto);

if (salarioBruto<=1320.0) {

      impostoInss = (salarioBruto*0.075);
      salarioAtual = salarioBruto - impostoInss;

} else if ((salarioBruto>= 1320.01) && (salarioBruto<=2571.29)) {

      impostoInss = ((salarioBruto - 1320.01)*0.09) + 99.0;
      salarioAtual = salarioBruto - impostoInss;

} else if ((salarioBruto>=2571.30) && (salarioBruto<=3856.94)){

      impostoInss = ((salarioBruto - 2571.3)*0.12) + 112.62 + 99;
      salarioAtual = salarioBruto - impostoInss;

} else if ((salarioBruto >= 3856.95) && (salarioBruto <=7507.49)){

      impostoInss = ((salarioBruto - 3856.95)*0.14) + 99 + 112.62 + 154.28;
      salarioAtual = salarioBruto - impostoInss;
} else {
      
      impostoInss = 99 + 112.62 + 154.28 + 511.08;
      salarioAtual = salarioBruto - impostoInss;
}


if ((salarioAtual <= 2112.0)) {

      printf("Você é isento do imposto IRRF");
} else if ((salarioAtual >= 2112.01) && (salarioAtual <= 2826.65)){

      impostoIrrf = ((salarioAtual - 2112.01) * 0.075);
      salarioAtual = salarioAtual - impostoIrrf;
} else if ((salarioAtual >= 2826.77) && (salarioAtual <= 3751.05)){

      impostoIrrf = ((salarioAtual - 2826.77)* 0.015) + 53.6;
      salarioAtual = salarioAtual - impostoIrrf;

} else if ((salarioAtual >= 3751.06) && (salarioAtual <= 4664.68)){

      impostoIrrf = ((salarioAtual - 3751.06) * 0.225) + 53.6 + 138.66;
      salarioAtual = salarioAtual - impostoIrrf;

} else {

      impostoIrrf = ((salarioAtual - 4664.68) * 0.275) + 53.6 + 138.66 + 205.56;
}
     



printf("Com base no salário R$ %.2f, os descontos de R$ %.2f do INSS e R$ %.2f do IRRF, o salário líquido é de R$ %.2f.", salarioBruto, impostoInss, impostoIrrf, salarioAtual);
printf ("\n%f\n%f\n%f\n%f", salarioBruto, salarioAtual, impostoInss, impostoIrrf);

return 0;
      }
      
