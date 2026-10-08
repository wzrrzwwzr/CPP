#include <iostream>
#include <string>
using namespace std;
#define A1 3//定义了一个宏常量，宏常量在编译时会被替换成对应的值，宏常量没有类型，宏常量的值可以是任意类型的表达式

int add(int a,int b){//定义了一个函数，函数的返回值类型为int，函数的参数类型为int，函数的参数个数为2,定义须在main函数之前，函数的参数可以是任意类型的表达式，函数的参数个数可以是任意个数
        int sum=a+b;
        return sum;//return语句，返回函数的值
}


int main(){
    add(1,2);//调用函数，函数的参数可以是任意类型的表达式，函数的参数个数可以是任意个数
    cout<<add(1,2)<<endl;

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

    int arr7[2][2];//定义了一个二维整型数组，数组的大小为2*2，数组的下标从0开始，数组的元素类型为int
    int arr8[2][2]={{1,2},{3,4}};//定义了一个整型数组，数组的大小为2，数组的下标从0开始，数组的元素类型为int

    int e=10;
   int *p;//定义一个整型指针变量p
    p=&e;//将变量e的地址赋值给指针变量p
    cout<<"e的值为："<<e<<endl;
    cout<<"e的地址为："<<&e<<endl;//使用&运算符取出变量e的地址
    cout<<"e的地址为："<<p<<endl;//使用&运算符取出变量e的地址
    cout<<"p指向的值为："<<*p<<endl;//使用*运算符取出指针变量p指向的值
    cout<<"sizeof(int *)="<<sizeof(int *)<<endl;//使用sizeof运算符取出指针变量p的大小

    //空指针用于指针初始化，防止野指针的出现，空指针不能被解引用
    int *p2=NULL;//定义一个整型指针变量p2，并将其初始化为NULL，NULL是一个宏常量，表示空指针
    //空指针无法被解引用，不能访问其指向的内存空间，否则会导致程序崩溃
    //0~255之间的内存地址是系统保留的，不能被程序使用，否则会导致程序崩溃，不可访问
    //cout<<"p2指向的值为："<<*p2<<endl;//这样会引发程序崩溃

    //野指针是指向一块已经被释放的内存空间的指针，野指针无法被解引用，不能访问其指向的内存空间，否则会导致程序崩溃
    int *p3=(int *)0x12345678;//定义一个整型指针变量p3，并将其初始化为一个随机的内存地址，随机的内存地址是系统保留的，不能被程序使用，否则会导致程序崩溃，不可访问
    //cout<<"p3指向的值为："<<*p3<<endl;//这样会引发程序崩溃

    int Q1=10;
    int Q2=20;
    int *p4=&Q1;//定义一个整型指针变量p4，并将其初始化为变量Q1的地址
    //常量指针
    const int *p41=&Q1;//定义一个整型指针变量p41，并将其初始化为变量Q1的地址，指针的指向可以改，指针指向的值不能被修改
    //指针常量
    int *const p42=&Q1;//定义一个整型指针变量p42，并将其初始化为变量Q1的地址，指针的指向不能改，指针指向的值可以被修改
    //常量指针常量
    const int *const p43=&Q1;//定义一个整型指针变量p43，并将其初始化为变量Q1的地址，指针的指向和指向的值都不能改
    
    //指针和数组的
    int arr3[6]={1,2,3,4,5,6};//定义了一个整型数组，数组的大小为5，数组的下标从0开始，数组的元素类型为int
    int *p5=arr3;//定义一个整型指针变量p5，并将其初始化为数组arr3的首地址，数组名就是数组的首地址
    cout<<"arr3的首地址为："<<arr3<<endl;//输出数组的首地址
    cout<<"p5的值为："<<p5<<endl;//输出指针变量p5的值
    cout<<"arr3[0]的值为："<<arr3[0]<<endl;//输出数组的第一个元素的值
    cout<<"*p5的值为："<<*p5<<endl;//输出指针变量p5指向的值
    cout<<"arr3[1]的值为："<<arr3[1]<<endl;//输出数组的第二个元素的值
    cout<<"*(p5+1)的值为："<<*(p5+1)<<endl;//输出指针变量p5指向的下一个元素的值
    
    //指针和函数
    //地址传递,可以通过指针修改实参的值
    //值传递，不能通过指针修改实参的值

    //结构体:创建自定义的数据类型，结构体是由不同类型的数据组成的集合，结构体可以包含基本数据类型，也可以包含数组、指针、函数等
    //语法： struct 结构体名{数据类型 成员变量名;数据类型 成员变量名;...};
    struct Student{
        string name;//定义了一个字符串类型的成员变量name
        int age;//定义了一个整型类型的成员变量age
        float score;//定义了一个浮点型类型的成员变量score
    };
    struct Student stu1;//定义了一个结构体类型的变量stu1
    stu1.name="张三";//给结构体变量stu1的成员变量name赋值,必须有.
    stu1.age=18;//给结构体变量stu1的成员变量age赋值
    stu1.score=90.5;//给结构体变量stu1的成员变量score赋值
    cout<<"姓名："<<stu1.name<<"年龄:"<<stu1.age<<"成绩:"<<stu1.score<<endl;//输出结构体变量stu1的成员变量name、age、score的值
    struct Student stu2={"李四",19,80.5};//定义了一个结构体类型的变量stu2，并给结构体变量stu2的成员变量name、age、score赋值
    cout<<"姓名："<<stu2.name<<"年龄:"<<stu2.age<<"成绩:"<<stu2.score<<endl;//输出结构体变量stu2的成员变量name、age、score的值

    struct Student arr4[2]={{"王五",20,70.5},{"赵六",21,60.5}};//定义了一个结构体类型的数组arr4，数组的大小为2，数组的下标从0开始，数组的元素类型为struct Student
    for(int i=0;i<2;i++){//使用for循环遍历结构体
        cout<<"姓名:"<<arr4[i].name
            <<"年龄:"<<arr4[i].age
            <<"成绩:"<<arr4[i].score
            <<endl;//输出结构体数组arr4的第i个元素的成员变量name、age、score的值
    }
    //结构体指针
    struct Student1{
        string name;
        int age;
        float score;
    };
    struct Student1 stu3={"孙七",22,50.5};
    struct Student1 *p6=&stu3;//定义了一个结构体类型的指针变量p6，并将其初始化为结构体变量stu3的地址
    cout<<"姓名:"<<p6->name
        <<"年龄:"<<p6->age
        <<"成绩:"<<p6->score
        <<endl;//输出结构体指针变量p6指向的结构体变量stu3的成员变量name、age、score的值 
    
    //结构体嵌套结构体
    struct Student2{
        string name;
        int age;
        float score;
        struct Address{
            string province;
            string city;
            string district;
        } address;
    };
    struct Student2 stu4={"周八",23,40.5,{"江苏省","南京市","玄武区"}};
    cout<<"姓名:"<<stu4.name
        <<"年龄:"<<stu4.age
        <<"成绩:"<<stu4.score
        <<"省份:"<<stu4.address.province
        <<"城市:"<<stu4.address.city
        <<"区县:"<<stu4.address.district
        <<endl;//输出结构体变量stu4的成员变量name、age、score、province、city、district的值

    //结构体中应用const，结构体中应用const可以防止结构体成员变量被修改
    struct Student3{
        string name;
        int age;
        float score;
        const string school;//定义了一个常量成员变量school，常量成员变量必须在结构体定义时初始化，不能在结构体定义后赋值
    };
    



    
    
}
