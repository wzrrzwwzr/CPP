#include <iostream>
#include <string>
using namespace std;
void showMenu(){
    cout<<"|——————————————————————————|"<<endl;
    cout<<"|**************************|"<<endl;
    cout<<"|**************************|"<<endl;
    cout<<"|***** 1. 添加联系人 ******|"<<endl;
    cout<<"|***** 2. 显示联系人 ******|"<<endl;
    cout<<"|***** 3. 删除联系人 ******|"<<endl;
    cout<<"|***** 4. 查找联系人 ******|"<<endl;
    cout<<"|***** 5. 修改联系人 ******|"<<endl;
    cout<<"|***** 6. 清空联系人 ******|"<<endl;
    cout<<"|***** 0. 退出通讯录 ******|"<<endl;
    cout<<"|**************************|"<<endl;
    cout<<"|**************************|"<<endl;
    cout<<"|——————————————————————————|"<<endl;
}
//联系人结构体
struct Person{
    string m_Name; //姓名
    int m_Sex; //性别  1代表男，2代表女
    int m_Age; //年龄
    string m_Phone; //电话
    string m_Addr; //住址
};
//通讯录结构体
#define Max 1000 //通讯录最大人数
struct Addressbooks{
    Person personArray[Max]; //通讯录中保存的联系人数组
    int m_Size; //通讯录中人员的个数
};
//添加联系人函数
void addPerson(Addressbooks* abs1){
    if(abs1->m_Size==Max){
        cout<<"通讯录已满"<<endl;
        return;
    }else{
        string name;
        cout<<"请输入姓名："<<endl;
        cin>>name;
        abs1->personArray[abs1->m_Size].m_Name=name;
        
        
        int Sex=0;
        cout<<"请输入性别："<<endl;
        cout<<"1——男，2——女"<<endl;
        while(true){
            cin>>Sex;
        if(Sex==1||Sex==2){
            abs1->personArray[abs1->m_Size].m_Sex=Sex;
            break;
        }else{
            cout<<"请重新输入"<<endl;
            continue;
        }
    }
        int age=0;
        cout<<"请输入年龄："<<endl;
        cin>>age;
        abs1->personArray[abs1->m_Size].m_Age=age;

        string Phone;
        cout<<"请输入电话："<<endl;
            while(true){
            cin>>Phone;
            if(Phone.length()==11){//直接判断字符串的长度等不等于11，而不是用sizeof()
                abs1->personArray[abs1->m_Size].m_Phone=Phone;
                break;
            }else{
                cout<<"请输入十一位电话号"<<endl;
                 continue;
            }
        }

        string Addr;
        cout<<"请输入住址："<<endl;
        cin>>Addr;
        abs1->personArray[abs1->m_Size].m_Addr=Addr;

        abs1->m_Size++;//更新通讯录人数
        cout<<"录入成功！"<<endl;
        cout<<"已存入"<<abs1->m_Size<<"个人"<<endl;
        system("pause");//请按任意键继续
        system("cls");//清屏操作

    }
}



int main(){
    Addressbooks abs;
    abs.m_Size=0;
    while(true){
    showMenu();//菜单调用
    int select = 0;
    cin>>select;
    switch(select){//选择菜单
        case 1:
            cout<<"添加联系人"<<endl;
            addPerson(&abs);//调用添加联系人函数,利用地址传递通讯录
            break;
        case 2:
            cout<<"显示联系人"<<endl;
            break;
        case 3:
            cout<<"删除联系人"<<endl;
            break;
        case 4:
            cout<<"查找联系人"<<endl;
            break;
        case 5:
            cout<<"修改联系人"<<endl;
            break;
        case 6:
            cout<<"清空联系人"<<endl;
            break;
        case 0:
            cout<<"欢迎下次使用"<<endl;
            system("pause");
            return 0;
            break;
        default:
            cout<<"输入有误，请重新输入！"<<endl;
    }
}
     


    system("pause");
    return 0;
}