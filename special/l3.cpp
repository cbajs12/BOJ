Include <memory.h>
Define MAX 1000000;
Int checkSally(int arr[], int size){
Int max = 0;
Int min = MAX;
Int result = 0;
Int resultArry[size]
Memset(resultArry, 0, size)
for(int i=0; i<size; ++i){
if(arr[i] > max){
max = arr[i];
resultArry[i]++;
}
}
for(int i=size-1; i>=0; --i){
If(arr[i] < min){
min = arr[i];
resultArry[i]++;
}
}
For(int i=0; i<size; ++i){
If(resultArry[i] == 0)
result++;
}
return result;
}


Int main(void){
Int size;
Cin>>size;


Int arr[size];
Int result;


Input(arr) // 배열에 값을 할당하는 임의의 함수
result = checkSally(arr, size);


If(result > 0)
Printf(“Sally exist”);
else
Printf(“Sally do not exist”);
}


