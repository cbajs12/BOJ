int power(int base, int exponent){
int temp = base;
for(int i=1; i<exponent; ++i)
temp *= base;
return temp;
}


int main(void){
input(base, exponent); //  각 데이터에 입력값 할당하는 임의의 함수
print(power(base, exponent));
}
