
//a
int *number;
cout << number << endl;
// ����ָ��number��δֻ���κε�ַ   ��������ĳ����ַ��ֵ��ָ��number

//b
double *realPtr;
long *integerPtr;
integerPtr =realPtr;
//���� ����ָ�����Ͳ�ƥ�䣬����ֱ�Ӹ�ֵ

//c

int *x,y;
x=y;

//����x��һ��ָ�����͵�ָ�룬y��һ�����α���������֮�䲻��ֱ�Ӹ�ֵ�� ����:x=&y;


//d

char s[] ="this is a character array";
int count;
for (;*s !='0';++s)
    cout <<*s<< '';
//����S��һ����������������һ��ָ�������++�Ĳ�����������

//e

short *numPtr,result;
void *generiPtr = numPtr;
result = *genericPtr+7;
//���� �����͵�ָ�벻�������κ�����

//f
float x = 19.34;
float xPtr=&x;
cout << xPtr=&x;
//����*xPtr ����һ��ָ�룬��˱ñ������ֵַ&  ������xPtr ����Ϊָ��
