#include <iostream>
#include <algorithm>
#include <vector>
#include "sumuse.h"
using namespace std;

/*
struct Student{
        string student_name;
        int score;
    };
    struct Teacher{
        string teacher_name;
        struct Student arr9[5];
    };



void allocateSpace(struct Teacher arr10[3]){
     string nsmeSeed="ABCDE";
    for(int i=0;i<3;i++){
    
       arr10[i].teacher_name="Teacher_";
       arr10[i].teacher_name+=nsmeSeed[i];
        for(int j=0;j<5;j++){
            arr10[i].arr9[j].student_name="Student_";
            arr10[i].arr9[j].student_name+=nsmeSeed[j];
            arr10[i].arr9[j].score=rand()%100+1;
    }
}
}
void printInfo(struct Teacher arr10[3],int len){
    for(int i=0;i<len;i++){
        cout<<arr10[i].teacher_name<<endl;
        for(int j=0;j<5;j++){
            cout<<arr10[i].arr9[j].student_name<<" "<<arr10[i].arr9[j].score<<endl;
        }
    }
}


int main() {
    double A=0, B=0,C=0;
    cout<<"请输入A,B,C的值"<<endl;
    cin>>A>>B>>C;
    if(A==B && B==C){
        cout<<"一样重"<<endl;
    }
    else if(A==B && B>C){
        cout<<"AB最重"<<endl;   
    }
    else if(A==B && B<C){
        cout<<"C最重"<<endl;
    }
    else if(A==C && C>B){
        cout<<"AC最重"<<endl;   
    }
    else if(A==C && C<B){
        cout<<"B最重"<<endl;
    }
    else if(B==C && C>A){
        cout<<"BC最重"<<endl;   
    }
    else if(B==C && C<A){
        cout<<"A最重"<<endl;
    }
    else if(A>B && A>C){
        cout<<"A最重"<<endl;   
    }
    else if(B>A && B>C){
        cout<<"B最重"<<endl;   
    }
    else if(C>A && C>B){
        cout<<"C最重"<<endl;   
    }
    return 0;
    int a=0;
    int n=50;
    cout<<"请输入"<<endl;
    cin>>a;//输入
    while(1){
        if(a>n){
        cout<<"a大了"<<endl;
        cout<<"请重新输入"<<endl;
        cin>>a;    
        }
        
        else if(a==n){
            cout<<"恭喜你猜对了"<<endl;
        break;
    }

        else if(a<n){
            cout<<"a小了"<<endl;
            cout<<"请重新输入"<<endl;
            cin>>a;
            

            
            
        }
        }
    int n=100;
    do{
    int ge=n%10,shi=(n/10)%10,bai=n/100;
    int sum=ge*ge*ge+shi*shi*shi+bai*bai*bai;
    if(sum==n){
        cout<<n<<endl;
    }
    n++;
    }while(n<1000)                      //输出100-999之间的水仙花数
    
    int n=0;                            //找7
    for(int i=1;i<=100;i++){            //输出1-100之间的7的倍数，个位数是7，十位数是7的数
    if(i%7==0 || i%10==7 || i/10==7){
        cout<<"遇到7了"<<endl;
        
    }
    else{
        cout<<i<<endl;
    }
    }
    int num=0;
    for(int i=1;i<=10;i++){//输出10行10列的*号
        for(int j=1;j<=10;j++){
            cout<<"* ";
        }
        cout<<endl;
    }                        
    for(int i=1;i<10;i++){//输出九九乘法表
        for(int j=1;j<=i;j++){//输出1-9行的乘法表
            cout<<i<<"*"<<j<<"="<<i*j<<"   ";
        }
        cout<<endl;

    }
   int arr[5]={1,2,3,4,5};//找出数组中的最大值
   int max=arr[0];//定义一个变量max，初始值为数组的第一个元素
   for(int i=0;i<5;i++){
    if(arr[i]>max){
        max=arr[i];
    }
   }
   cout<<"最大值是："<<max<<endl;


    int arr[5]={1,2,3,4,5};//找出数组中的最大值
    int max_val=*std::max_element(arr,arr+5);//使用std::max_element函数找出数组中的最大值,使用*取出最大值
    cout<<"最大值是："<<max_val<<endl;
   
    int arr[5]={1,2,3,4,5};//数组逆置
    int start=0;
    int end=sizeof(arr)/sizeof(arr[0])-1;//sizeof(arr)/sizeof(arr[0])计算数组的长度，减1是因为数组下标从0开始
    int temp=0;
    while(start<end){//使用while循环，start<end是因为数组逆置时，start和end相遇时就结束了
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout<<"数组反转后："<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int arr[5]={1,2,3,4,5};//数组逆置
    std::reverse(arr,arr+5);//使用std::reverse函数逆置数组
    cout<<"数组反转后："<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    vector<int> arr={1,2,3,4,5};//使用vector容器定义一个整型数组
    std::reverse(arr.begin(),arr.end());//使用std::reverse函数逆置数组
    cout<<"数组反转后："<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int arr[9]={4,2,3,6,5,6,1,7,9};//定义了一个整型数组，数组的大小为9，数组的下标从0开始，数组的元素类型为int
    for(int i=0;i<9-1;i++){//使用冒泡排序算法对数组进行排序，外层循环控制排序的趟数，内层循环控制每一趟排序的次数
        for(int j=0;j<9-1-i;j++){//内层循环控制每一趟排序的次数，9-1-i是因为每一趟排序后，最大的数会被放到最后，所以每一趟排序的次数会减少
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"排序后："<<endl;
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    int arr1[10]={4,2,3,10,5,6,1,7,9,8};
    std::sort(arr1,arr1+10);//使用std::sort函数对数组进行排序
    cout<<"排序后："<<endl;
    for(int num:arr1){//使用范围for循环遍历数组
        cout<<num<<" "<<endl;
    }
   int A=0,B=9;
   sumuse(A,B);//调用函数，函数的参数可以是任意类型的表达式，函数的参数个数可以是任意个数
   cout<<sumuse(A,B)<<endl;


   int a=10;
   int *p;//定义一个整型指针变量p
    p=&a;//将变量a的地址赋值给指针变量p
    cout<<"a的值为："<<a<<endl;
    cout<<"a的地址为："<<&a<<endl;//使用&运算符取出变量a的地址
    cout<<"a的地址为："<<p<<endl;//使用&运算符取出变量a的地址
    cout<<"p指向的值为："<<*p<<endl;//使用*运算符取出指针变量p指向的值
    cout<<"sizeof(int *)="<<sizeof(int *)<<endl;//使用sizeof运算符取出指针变量p的大小

    int arr[10]={4,2,3,10,5,6,1,7,9,8};
    int *p=arr;//定义一个整型指针变量p，并将数组arr的首地址赋值给指针变量p
    int len=sizeof(arr)/sizeof(arr[0]);//计算数组的长度
    for(int i=0;i<len-1;i++){//使用冒泡排序算法对数组进行排序，外层循环控制排序的趟数，内层循环控制每一趟排序的次数
        for(int j=0;j<len-1-i;j++){//内层循环控制每一趟排序的次数，len-1-i是因为每一趟排序后，最大的数会被放到最后，所以每一趟排序的次数会减少
            if(*(p+j)>*(p+j+1)){//使用指针变量p访问数组元素
                int temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
    cout<<"排序后："<<endl;
    for(int i=0;i<len;i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;
   
    struct Teacher arr10[3];
    allocateSpace(arr10);
    printInfo(arr10,3);

    struct Hero{
        string hero_name;
        int hero_age;
        string hero_sex;
    };
    struct Hero hero[5]={
        {"张三",29,"男"},
        {"李四",21,"女"},
        {"王五",22,"男"},
        {"赵六",18,"女"},
        {"孙七",24,"男"}
    };
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            if(hero[j].hero_age>hero[j+1].hero_age){
                struct Hero temp=hero[j];
                hero[j]=hero[j+1];
                hero[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<hero[i].hero_name<<" "<<hero[i].hero_age<<" "<<hero[i].hero_sex<<endl;
    }
}*/
