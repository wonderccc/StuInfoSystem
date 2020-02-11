#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class STU{
          public:
              int num;
              char name[10],sex[5],jiguan[10];
              float vc,eng,math;
              float sum,ave,xfjd;
          public:
              STU(){};
              STU(int num1,char name1[],char sex1[],char jiguan1[],float vc1,float eng1,float math1)
              {
                  num=num1;
                  strcpy(name,name1);
                  strcpy(sex,sex1);
                  strcpy(jiguan,jiguan1);
                  vc=vc1,
                  eng=eng1;
                  math=math1;
              }
              void get_total();
              void get_ave();
              void print();
};
int i=0;
STU s[100];
void menu();
void STU::get_total()
{
    sum=vc+eng+math;
    cout<<"总成绩为:"<<sum<<endl;
}
void STU::get_ave()
{
    ave=sum/3;
    cout<<"平均成绩为:"<<ave<<endl;
}
void input()
{
    int n;
    int num2;
    char name2[10],sex2[5],jiguan2[10];
    float vc2,eng2,math2;
    cout<<"请输入学生人数:"<<'\t';
    cin>>n;
    for(;i<n;i++){
    cout<<"请输入学号:"<<'\t';
    cin>>num2;
    cout<<"请输入姓名:"<<'\t';
    cin>>name2;
    cout<<"请输入性别:"<<'\t';
    cin>>sex2;
    cout<<"请输入籍贯:"<<'\t';
    cin>>jiguan2;
    cout<<"请输入VC++成绩:"<<'\t';
    cin>>vc2;
    cout<<"请输入英语成绩:"<<'\t';
    cin>>eng2;
    cout<<"请输入高数成绩:"<<'\t';
    cin>>math2;
    s[i]=STU(num2,name2,sex2,jiguan2,vc2,eng2,math2);
    s[i].get_total();
    s[i].get_ave();}
    int m;
    cout<<"返回主界面请按1"<<endl;
    cin>>m;
    if(m==1)menu();
}
void STU::print()
{
    cout<<"学号"<<setw(8)<<"姓名"<<setw(8)<<"性别"<<setw(8)<<"籍贯"<<setw(12)<<"VC成绩"<<setw(12)<<"英语成绩"<<setw(12)<<"高数成绩"<<setw(12)<<"总成绩"<<setw(12)<<"平均成绩"<<endl;
    cout<<num<<setw(10)<<name<<setw(10)<<sex<<setw(8)<<jiguan<<setw(10)<<vc<<setw(10)<<eng<<setw(10)<<math<<setw(16)<<sum<<setw(14)<<ave;
}
void search();
void sort();
void shanchu();
void xuefenjidian();
void scholarship();
void sanhao();
void max();
void exit();
void menu()
{
    int n;
    cout<<"\t\t# 输入学生基本信息请按1"<<endl;
    cout<<endl;
    cout<<"\t\t# 查询学生成绩请按2"<<endl;
    cout<<endl;
    cout<<"\t\t# 学生成绩排序请按3"<<endl;
    cout<<endl;
    cout<<"\t\t# 删除记录请按4"<<endl;
    cout<<endl;
    cout<<"\t\t# 计算学分绩点请按5"<<endl;
    cout<<endl;
    cout<<"\t\t# 评定奖学金请按6"<<endl;
    cout<<endl;
    cout<<"\t\t# 评定三好学生请按7"<<endl;
    cout<<endl;
    cout<<"\t\t# 查询最高分请按8"<<endl;
    cout<<endl;
    cout<<"\t\t# 退出系统请按9"<<endl;
    cout<<endl;
    cout<<"\t\t* 请选择您所需要的操作:"<<'\t';
    cin>>n;
    switch(n){
    case 1:input();break;
    case 2:search();break;
    case 3:sort();break;
    case 4:shanchu();break;
    case 5:xuefenjidian();break;
    case 6:scholarship();break;
    case 7:sanhao();break;
    case 8:max();break;
    case 9:exit();break;
    default:{cout<<"输入错误!请重新输入!"<<endl;menu();}}
}
void search()
{
    int n,m;
    int p=0;
    char Name[10];
    cout<<"按学号查询请按1，按姓名查询请按0"<<endl;
    cin>>n;
    if(n==1){cout<<"请输入学号:"<<endl;
             cin>>m;
             for(int k=0;k<i;k++)if(s[k].num==m){s[k].print();p=1;cout<<endl;}
                if(p==0)cout<<"查询无果!"<<endl;
             }
    else if(n==0){cout<<"请输入姓名:"<<endl;
                  cin>>Name;
                  for(int k=0;k<i;k++){int a=strcmp(s[k].name,Name);
                                       if(a==0){s[k].print();p=1;cout<<endl;}}
                  if(p==0)cout<<"查询无果!"<<endl;
                 }
                 else cout<<"输入错误!请重新输入!"<<endl;
    int a;
    cout<<"返回主界面请按1，继续查询请按0"<<endl;
    cin>>a;
    if(a==1)menu();
      else if(a==0)search();
             else cout<<"输入错误!请重新输入!"<<endl;
}
void sort()
{
    int n;
    int num3;
    float vc3,eng3,math3;
    char name3[10],sex3[5],jiguan3[10];
    cout<<"请先选择排序的标准!"<<endl;
    cout<<"学号请按1，VC++成绩请按2，英语成绩请按3，高数成绩请按4，总成绩请按5，平均成绩请按6"<<endl;
    cin>>n;
    switch(n){
    case 1:{for(int j=0;j<i;j++)
               for(int k=j+1;k<i;k++)
               if(s[j].num>s[k].num){num3=s[j].num;s[j].num=s[k].num;s[k].num=num3;
                                    strcpy(name3,s[j].name);strcpy(s[j].name,s[k].name);strcpy(s[k].name,name3);
                                    strcpy(sex3,s[j].sex);strcpy(s[j].sex,s[k].sex);strcpy(s[k].sex,sex3);
                                    strcpy(jiguan3,s[j].jiguan);strcpy(s[j].jiguan,s[k].jiguan);strcpy(s[k].jiguan,jiguan3);
                                    vc3=s[j].vc;s[j].vc=s[k].vc;s[k].vc=vc3;
                                    eng3=s[j].eng;s[j].eng=s[k].eng;s[k].eng=eng3;
                                    math3=s[j].math;s[j].math=s[k].math;s[k].math=math3;}
           };break;
    case 2:{for(int j=0;j<i;j++)
                for(int k=j+1;k<i;k++)
                if(s[j].vc>s[k].vc){num3=s[j].num;s[j].num=s[k].num;s[k].num=num3;
                                    strcpy(name3,s[j].name);strcpy(s[j].name,s[k].name);strcpy(s[k].name,name3);
                                    strcpy(sex3,s[j].sex);strcpy(s[j].sex,s[k].sex);strcpy(s[k].sex,sex3);
                                    strcpy(jiguan3,s[j].jiguan);strcpy(s[j].jiguan,s[k].jiguan);strcpy(s[k].jiguan,jiguan3);
                                    vc3=s[j].vc;s[j].vc=s[k].vc;s[k].vc=vc3;
                                    eng3=s[j].eng;s[j].eng=s[k].eng;s[k].eng=eng3;
                                    math3=s[j].math;s[j].math=s[k].math;s[k].math=math3;}
           };break;
    case 3:{for(int j=0;j<i;j++)
                for(int k=j+1;k<i;k++)
                if(s[j].eng>s[k].eng){num3=s[j].num;s[j].num=s[k].num;s[k].num=num3;
                                    strcpy(name3,s[j].name);strcpy(s[j].name,s[k].name);strcpy(s[k].name,name3);
                                    strcpy(sex3,s[j].sex);strcpy(s[j].sex,s[k].sex);strcpy(s[k].sex,sex3);
                                    strcpy(jiguan3,s[j].jiguan);strcpy(s[j].jiguan,s[k].jiguan);strcpy(s[k].jiguan,jiguan3);
                                    vc3=s[j].vc;s[j].vc=s[k].vc;s[k].vc=vc3;
                                    eng3=s[j].eng;s[j].eng=s[k].eng;s[k].eng=eng3;
                                    math3=s[j].math;s[j].math=s[k].math;s[k].math=math3;}
           };break;
    case 4:{for(int j=0;j<i;j++)
                for(int k=j+1;k<i;k++)
                if(s[j].math>s[k].math){num3=s[j].num;s[j].num=s[k].num;s[k].num=num3;
                                        strcpy(name3,s[j].name);strcpy(s[j].name,s[k].name);strcpy(s[k].name,name3);
                                        strcpy(sex3,s[j].sex);strcpy(s[j].sex,s[k].sex);strcpy(s[k].sex,sex3);
                                        strcpy(jiguan3,s[j].jiguan);strcpy(s[j].jiguan,s[k].jiguan);strcpy(s[k].jiguan,jiguan3);
                                        vc3=s[j].vc;s[j].vc=s[k].vc;s[k].vc=vc3;
                                        eng3=s[j].eng;s[j].eng=s[k].eng;s[k].eng=eng3;
                                        math3=s[j].math;s[j].math=s[k].math;s[k].math=math3;}
           };break;
    case 5:{for(int j=0;j<i;j++)
                for(int k=j+1;k<i;k++)
                if(s[j].sum>s[k].sum){num3=s[j].num;s[j].num=s[k].num;s[k].num=num3;
                                    strcpy(name3,s[j].name);strcpy(s[j].name,s[k].name);strcpy(s[k].name,name3);
                                    strcpy(sex3,s[j].sex);strcpy(s[j].sex,s[k].sex);strcpy(s[k].sex,sex3);
                                    strcpy(jiguan3,s[j].jiguan);strcpy(s[j].jiguan,s[k].jiguan);strcpy(s[k].jiguan,jiguan3);
                                    vc3=s[j].vc;s[j].vc=s[k].vc;s[k].vc=vc3;
                                    eng3=s[j].eng;s[j].eng=s[k].eng;s[k].eng=eng3;
                                    math3=s[j].math;s[j].math=s[k].math;s[k].math=math3;}
           };break;
    case 6:{for(int j=0;j<i;j++)
                for(int k=j+1;k<i;k++)
                if(s[j].ave>s[k].ave){num3=s[j].num;s[j].num=s[k].num;s[k].num=num3;
                                    strcpy(name3,s[j].name);strcpy(s[j].name,s[k].name);strcpy(s[k].name,name3);
                                    strcpy(sex3,s[j].sex);strcpy(s[j].sex,s[k].sex);strcpy(s[k].sex,sex3);
                                    strcpy(jiguan3,s[j].jiguan);strcpy(s[j].jiguan,s[k].jiguan);strcpy(s[k].jiguan,jiguan3);
                                    vc3=s[j].vc;s[j].vc=s[k].vc;s[k].vc=vc3;
                                    eng3=s[j].eng;s[j].eng=s[k].eng;s[k].eng=eng3;
                                    math3=s[j].math;s[j].math=s[k].math;s[k].math=math3;}
           };break;
    default:cout<<"输入错误!"<<endl;
    }
    cout<<"排序后的学生成绩如下:"<<endl;
    for(int j=0;j<i;j++)
        {s[j].print();cout<<endl;}
    cout<<endl;
    int m;
    cout<<"返回主界面请按1,继续操作请按0"<<endl;
    cin>>m;
    if(m==1)menu();
    if(m==0)sort();
}
void shanchu()
{
    int n,b,p;
    int a=0;
    char Name[10];
    cout<<"请先选择删除的依据"<<endl;
    cout<<"根据学号删除请按1，根据姓名删除请按0"<<endl;
    cin>>n;
    if(n==1){
             cout<<"请输入学号:"<<endl;
             cin>>b;
             for(int j=0;j<i;j++)
                 if(s[j].num==b)
                        {for(int k=j;k<i;k++)
                            s[k]=s[k+1];
                            a=1;
                            i--;
                        }
             if(a==0)cout<<"未找到记录!"<<endl;
            }
    else if(n==0){
                  cout<<"请输入姓名:"<<endl;
                  cin>>Name;
                  for(int j=0;j<i;j++){int m=strcmp(s[j].name,Name);
                                       if(m==0)
                                          {for(int k=j;k<i;k++)
                                               s[k]=s[k+1];
                                           a=1;
                                           i--;
                                          }
                                      }
                  if(a==0)cout<<"未找到记录!"<<endl;
                  }
         else cout<<"输入错误!请重新输入!"<<endl;
         cout<<"返回主界面请按1，继续操作请按0"<<endl;
         cin>>p;
         if(p==1)menu();
         if(p==0)shanchu();
}
void xuefenjidian()
{
    int n;
    for(int j=0;j<i;j++)
        s[j].xfjd=((s[j].vc/10-5)*5.5+(s[j].eng/10-5)*4+(s[j].math/10-5)*6)/15.5;
    for(int j=0;j<i;j++){
            float t;
         for(int k=i+1;k<i;k++)
             if(s[j].xfjd<s[k].xfjd){t=s[j].xfjd;
                                     s[j].xfjd=s[k].xfjd;
                                     s[k].xfjd=t;
                                    }
                        }
    cout<<"学分绩点从高到低排序为:"<<endl;
    cout<<"姓名"<<setw(8)<<"学号"<<setw(12)<<"学分绩点"<<endl;
    for(int j=0;j<i;j++)
        cout<<s[j].name<<setw(8)<<s[j].num<<setw(10)<<s[j].xfjd<<endl;
    cout<<"返回主界面请按1"<<endl;
    cin>>n;
    if(n==1)menu();
}
void scholarship()
{
    int n;
    cout<<"奖学金名单:"<<endl;
    cout<<setw(12)<<"姓名"<<setw(8)<<"学号"<<setw(12)<<"VC++成绩"<<setw(12)<<"英语成绩"<<setw(12)<<"高数成绩"<<endl;
    for(int j=0;j<i;j++)
       {if(s[j].xfjd>=4.0)
        cout<<"特等奖:"<<s[j].name<<setw(10)<<s[j].num<<setw(10)<<s[j].vc<<setw(10)<<s[j].eng<<setw(10)<<s[j].math<<endl;
        if(s[j].xfjd<4.0&&s[j].xfjd>=3.6)
        cout<<"一等奖:"<<s[j].name<<setw(10)<<s[j].num<<setw(10)<<s[j].vc<<setw(10)<<s[j].eng<<setw(10)<<s[j].math<<endl;
        if(s[j].xfjd<3.6&&s[j].xfjd>=3.2)
        cout<<"二等奖:"<<s[j].name<<setw(10)<<s[j].num<<setw(10)<<s[j].vc<<setw(10)<<s[j].eng<<setw(10)<<s[j].math<<endl;
        if(s[j].xfjd<3.2&&s[j].xfjd>=2.8)
        cout<<"三等奖:"<<s[j].name<<setw(10)<<s[j].num<<setw(10)<<s[j].vc<<setw(10)<<s[j].eng<<setw(10)<<s[j].math<<endl;
       }
       cout<<"返回主界面请按1"<<endl;
       cin>>n;
       if(n==1)menu();
}
void sanhao()
{
    int n;
    cout<<"三好学生名单:"<<endl;
    for(int j=0;j<i;j++)
        if(s[j].xfjd>3.0&&(s[j].vc>70||s[j].eng>70||s[j].math>70))
            cout<<s[j].name<<endl;
    cout<<"返回主界面请按1，否则请按0"<<endl;
    cin>>n;
    if(n==1)menu();
}
void max()
{
    int m;
    cout<<"查询总成绩最高分请按1，VC++最高分请按2，高数最高分请按3，英语最高分请按4"<<endl;
    cin>>m;
    float Max;
    int p=0;
    switch(m){
        case 1:{Max=s[0].sum;
                for(int j=1;j<i;j++)
                    if(Max<s[j].sum){Max=s[j].sum;p=j;}
                cout<<"总成绩最高分为:"<<endl;
                cout<<s[p].name<<'\t'<<s[p].sum;};break;
        case 2:{Max=s[0].vc;
                for(int j=1;j<i;j++)
                    if(Max<s[j].vc){Max=s[j].vc;p=j;}
                cout<<"VC++成绩最高分为:"<<endl;
                cout<<s[p].name<<'\t'<<s[p].vc;};break;
        case 3:{Max=s[0].math;
                for(int j=1;j<i;j++)
                    if(Max<s[j].math){Max=s[j].math;p=j;}
                cout<<"高数成绩最高分为:"<<endl;
                cout<<s[p].name<<'\t'<<s[p].math;};break;
        case 4:{Max=s[0].eng;
                for(int j=1;j<i;j++)
                    if(Max<s[j].eng){Max=s[j].eng;p=j;}
                cout<<"英语成绩最高分为:"<<endl;
                cout<<s[p].name<<'\t'<<s[p].eng;};break;
        default:cout<<"输入错误!"<<endl;}
        cout<<endl;
        int n;
        cout<<"返回主界面请按1,继续操作请按0"<<endl;
        cin>>n;
        if(n==1)menu();
        if(n==0)max();
}
void exit()
{
    cout<<"谢谢使用!"<<endl;
}
int main()
{
    cout<<endl;
    cout<<"\t\t\t\t****欢迎使用学生课程成绩管理系统****"<<endl;
    cout<<"\t\t\t\t____________________________________"<<endl;
    cout<<endl;
    menu();
}
