# include <stdio.h>
# include <string.h>

int calc(float num1, float num2){
    float total = 0;
    total = (num1-num2)/2;
    return total;
}
int main(){
    float n1 = 10, n2 = 2, res = 0;
    res = calc(n1,n2);
    printf("\nA media é: %f \n\n",res);
}
