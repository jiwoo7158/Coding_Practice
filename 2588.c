#include <stdio.h>
#include <math.h>

int main(){
    int first_num = 0;
    int second_num = 0;
    int result = 0;

    scanf("%d", &first_num);
    scanf("%d", &second_num);

    for(int i  = 0; i < 3; i++ ){
        int temp_num = second_num % 10;
        second_num /= 10;
        int temp_result = first_num * temp_num;
        result += temp_result * pow(10, i);
        printf("%d\n", temp_result);
    }
    printf("%d\n", result);

    return 0;
}