
//a
int *number;
cout << number << endl;
// 错误：指针number并未只向任何地址   方法：将某个地址赋值给指针number

//b
double *realPtr;
long *integerPtr;
integerPtr =realPtr;
//错误： 两个指针类型不匹配，不能直接赋值

//c

int *x,y;
x=y;

//错误：x是一个指向整型的指针，y是一个整形变量，两者之间不能直接赋值， 方法:x=&y;


//d

char s[] ="this is a character array";
int count;
for (;*s !='0';++s)
    cout <<*s<< '';
//错误：S是一个数组名，而不是一个指针变量，++的操作发生错误

//e

short *numPtr,result;
void *generiPtr = numPtr;
result = *genericPtr+7;
//错误： 空类型的指针不能引用任何类型

//f
float x = 19.34;
float xPtr=&x;
cout << xPtr=&x;
//错误：*xPtr 不是一个指针，因此泵被赋予地址值&  方法：xPtr 声明为指针
