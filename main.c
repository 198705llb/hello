#include <stdio.h>
#include <string.h>

#define LONG 12 /*长度*/
#define  WITH 9 /*宽度*/

enum DAY{
    MON=1,TUE, WED, THU, FRI, SAT, SUN
};

/**
 * 数组长度计算(其实这种方法真鸡巴不准)
 * @param a
 * @return
 */
int length(int a[]){
    int i=0;
    while (a[i]!='\0'){
        i++;

    }
    return i;
}

/**
 * 打印枚举的所有值
 */
void testEnum(void){
    enum DAY day;
    for (day=MON ;day<=SUN;day++){
        printf("day:%d\n",day);
    }
}

/**
 * 打印字符数组
 */
void testStr(void){
    char str[100] = "xiaoxiao  xixix\n";
    printf(str);
}

void testStruct(){
    struct Book{
        char name[15];
        char author[50];
        char subject[100];
        char content[10000];
        long size;
    };
    struct Book book = {"chenggongxue","gaoxiaosong","zen me cui niu","jin tian kai shi wo men cui yi ge xing qi de mei guo",1000};
    printf(" name:%s \n author:%s \n subject:%s \n content:%s \n size:%d \n",book.name,book.author,book.subject,book.content,book.size);
}
void testUnion(){
    union Data{
        char str[20];
        int i;
        float f;

    };
    union Data data ;
    char strr[20] = "xxxxxxx...ff";
    data.str = strr;
    data.i=10;
    strcpy( data.str, "hi world !");
    printf("%s\n",data.str);
}


int main() {
    testUnion();
    testStruct();
    testEnum();
    testStr();
    static int x, i, j, k;
    static int h;
    register int g;
    printf("x:%d  , i: %d , j:%d , k:%d , h:%d , g:%d \n ", x, i, j, k, h, g);
    printf("Hello, World!\n");
    printf("long : %d  , with : %d\n", LONG, WITH);

    int arr[3] = {1, 2, 3};
    int *arrindex = arr;
    printf("adress of arr is %p\n",arrindex);
    printf("sizeof arr is %d\n", sizeof(arr));
    int arrLength = length(arr);
    int maxIndex = arrLength-1;
    for (int z = 0; z < maxIndex; ++z) {
        printf("arra[%d]:%d\n", z, arr[z]);
        arrindex = &arr[z];
        printf("adress of arr[%d] is %p\n",z,arrindex);
    }
    return 0;
}
