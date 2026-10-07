#include <iostream>
using namespace std;
#define A1 3//定义了一个宏常量，宏常量在编译时会被替换成对应的值，宏常量没有类型，宏常量的值可以是任意类型的表达式
int main(){
    const int A2=4;//定义了一个常量，常量在编译时会被替换成对应的值，常量有类型，常量的值必须是常量表达式
    cout<<sizeof(int)<<endl;
    char A3='a'; //定义了一个字符型，’‘中只能有一个字符
    cout<<A3<<endl;
   char str1[]="hello";  //定义了一个字符数组(C风格字符串)，字符串常量必须用双引号括起来
   string str2="helloooc";  //定义了一个字符串对象(C++风格)，字符串常量必须用双引号括起来
   cout<<str1<<endl;
   cout<<str2<<endl;
   bool flag=true;  //定义了一个布尔型，true和false是C++的关键字
   cout<<flag<<endl;//1
   flag=false;
   cout<<flag<<endl;//0
   int a=0;
   cout<<"请输入"<<endl;
   //cin>>a;//输入
   cout<<"您输入的值是："<<a<<endl;
   cout<<"123321"<<endl;
   float f=3.14f;  //定义了一个单精度浮点型,后面f表示是float类型
   double d=3.14;  //定义了一个双精度浮点型,后面没有f表示是double类型
   cout<<f<<endl;
   cout<<d<<endl;
   int c=10,b=20;
   ++c;  //自增运算符,前置递增，c=c+1//在计算中先让c加一，再进行后续计算
   cout<<c<<endl;
   b++;  //自增运算符,后置递增，b=b+1//在计算中先进行后续计算，再让b加一，也就是以原来b的值进行计算//递减同上b++，--b,b--
   cout<<b<<endl;
   if(b>0){
       cout<<"b大于0"<<endl;}
    if(c<0){
       cout<<"c小于0"<<endl;}
       else{
           cout<<"c大于等于0"<<endl;
       }
    switch (c) {//switch语句，c的值只能是整型或者字符型，不能是浮点型
        case 1://switch语句中，case后面只能是常量表达式，不能是变量表达式
            cout<<"c等于1"<<endl;
            break;
        case 2:
            cout<<"c等于2"<<endl;
            break;
        default:
            cout<<"c不等于1也不等于2"<<endl;
            break;
    }
    while(c>0){//while循环，先判断条件是否成立，再执行循环体
        cout<<"c大于0"<<endl;//while循环中定义的变量c可以在while循环中使用，出了while循环就不能使用了
        c--;
    }
    do{
        cout<<"123"<<endl;//先执行一次，再判断条件是否成立
        c--;}while(c>0);
    for(int i=0;i<10;i++){//for循环，i=0，i<10，i++//先判断条件是否成立，再执行循环体，再进行后续计算
        cout<<"i="<<i<<endl;//for循环中定义的变量i只能在for循环中使用，出了for循环就不能使用了
    }//for(起始表达式;条件表达式;循环体执行后表达式){循环语句;}
    
    int arr[5]={1,2,3,4,5};//定义了一个整型数组，数组的大小为5，数组的下标从0开始，数组的元素类型为int
    int arr1[5];//定义了一个整型数组，数组的大小为5，数组的下标从0开始，数组的元素类型为int
    arr1[0]=1;//给数组中元素赋值，数组的下标从0开始，数组的元素类型为int
    int arr2[]={1,2,3,4,5};//定义了一个整型数组，数组的大小为5，数组的下标从0开始，数组的元素类型为int
    cout<<arr<<endl;//输出数组的首地址类似于0x61fdd0
    cout<<arr1[0]<<endl;//输出数组元素的值
    cout<<arr2[0]<<endl;//输出数组元素的值

    int arr1[2] [2];//定义了一个二维整型数组，数组的大小为2*2，数组的下标从0开始，数组的元素类型为int
    int arr2[2] [2]={{1,2},{3,4}};//定义了一个整型数组，数组的大小为2，数组的下标从0开始，数组的元素类型为int
}
