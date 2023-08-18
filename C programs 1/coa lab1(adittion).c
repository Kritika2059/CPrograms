#include<conio.h>
#include<math.h>
void dectobin(int n, int bin[]) {
int i = 0;
while (n>0) {
bin[i] = n % 2;
n = n /2;
i++;
}
} 
int bintodec(int bin[]) {
    int decimal = 0,i;
    int power = 1;
    for ( i = 0; i <8; i++) {
       decimal += bin[i]* pow(2,i);
    }
    printf("%d", decimal);
    return decimal;
} 
int addition (int bin1[8], int bin2[8], int result[8] ) {
int i, c = 0;
for ( i =0 ; i <8; i++) {
result[i] = bin1[i] ^ bin2[i] ^ c;
c = bin1[i]&bin2[i] | bin1[i]&c | bin2[i]&c;
}
return c;
}
void display( int arr[]) {
int i;
for(i = 7; i >= 0; i--) {
printf("%d", arr[i]);
}
printf("\n");
} 
int main() {
int dec1, dec2, bin1[8] = {0}, bin2[8] = {0}, result[8] = {0}, carry, answer;
printf("Enter two decimal numbers dec1 and dec2: ");
scanf("%d%d", &dec1, &dec2);
dectobin(dec1, bin1);
display(bin1);
dectobin(dec2, bin2);
display(bin2
carry = addition(bin1, bin2, result);
if(carry == 1) {
printf("Overflow");
}
else {
answer = bintodec(result);
printf("The sum is: %d", answer);
}
}
