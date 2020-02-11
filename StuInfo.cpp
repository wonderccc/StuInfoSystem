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
    cout<<"�ܳɼ�Ϊ:"<<sum<<endl;
}
void STU::get_ave()
{
    ave=sum/3;
    cout<<"ƽ���ɼ�Ϊ:"<<ave<<endl;
}
void input()
{
    int n;
    int num2;
    char name2[10],sex2[5],jiguan2[10];
    float vc2,eng2,math2;
    cout<<"������ѧ������:"<<'\t';
    cin>>n;
    for(;i<n;i++){
    cout<<"������ѧ��:"<<'\t';
    cin>>num2;
    cout<<"����������:"<<'\t';
    cin>>name2;
    cout<<"�������Ա�:"<<'\t';
    cin>>sex2;
    cout<<"�����뼮��:"<<'\t';
    cin>>jiguan2;
    cout<<"������VC++�ɼ�:"<<'\t';
    cin>>vc2;
    cout<<"������Ӣ��ɼ�:"<<'\t';
    cin>>eng2;
    cout<<"����������ɼ�:"<<'\t';
    cin>>math2;
    s[i]=STU(num2,name2,sex2,jiguan2,vc2,eng2,math2);
    s[i].get_total();
    s[i].get_ave();}
    int m;
    cout<<"�����������밴1"<<endl;
    cin>>m;
    if(m==1)menu();
}
void STU::print()
{
    cout<<"ѧ��"<<setw(8)<<"����"<<setw(8)<<"�Ա�"<<setw(8)<<"����"<<setw(12)<<"VC�ɼ�"<<setw(12)<<"Ӣ��ɼ�"<<setw(12)<<"�����ɼ�"<<setw(12)<<"�ܳɼ�"<<setw(12)<<"ƽ���ɼ�"<<endl;
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
    cout<<"\t\t# ����ѧ��������Ϣ�밴1"<<endl;
    cout<<endl;
    cout<<"\t\t# ��ѯѧ���ɼ��밴2"<<endl;
    cout<<endl;
    cout<<"\t\t# ѧ���ɼ������밴3"<<endl;
    cout<<endl;
    cout<<"\t\t# ɾ����¼�밴4"<<endl;
    cout<<endl;
    cout<<"\t\t# ����ѧ�ּ����밴5"<<endl;
    cout<<endl;
    cout<<"\t\t# ������ѧ���밴6"<<endl;
    cout<<endl;
    cout<<"\t\t# ��������ѧ���밴7"<<endl;
    cout<<endl;
    cout<<"\t\t# ��ѯ��߷��밴8"<<endl;
    cout<<endl;
    cout<<"\t\t# �˳�ϵͳ�밴9"<<endl;
    cout<<endl;
    cout<<"\t\t* ��ѡ��������Ҫ�Ĳ���:"<<'\t';
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
    default:{cout<<"�������!����������!"<<endl;menu();}}
}
void search()
{
    int n,m;
    int p=0;
    char Name[10];
    cout<<"��ѧ�Ų�ѯ�밴1����������ѯ�밴0"<<endl;
    cin>>n;
    if(n==1){cout<<"������ѧ��:"<<endl;
             cin>>m;
             for(int k=0;k<i;k++)if(s[k].num==m){s[k].print();p=1;cout<<endl;}
                if(p==0)cout<<"��ѯ�޹�!"<<endl;
             }
    else if(n==0){cout<<"����������:"<<endl;
                  cin>>Name;
                  for(int k=0;k<i;k++){int a=strcmp(s[k].name,Name);
                                       if(a==0){s[k].print();p=1;cout<<endl;}}
                  if(p==0)cout<<"��ѯ�޹�!"<<endl;
                 }
                 else cout<<"�������!����������!"<<endl;
    int a;
    cout<<"�����������밴1��������ѯ�밴0"<<endl;
    cin>>a;
    if(a==1)menu();
      else if(a==0)search();
             else cout<<"�������!����������!"<<endl;
}
void sort()
{
    int n;
    int num3;
    float vc3,eng3,math3;
    char name3[10],sex3[5],jiguan3[10];
    cout<<"����ѡ������ı�׼!"<<endl;
    cout<<"ѧ���밴1��VC++�ɼ��밴2��Ӣ��ɼ��밴3�������ɼ��밴4���ܳɼ��밴5��ƽ���ɼ��밴6"<<endl;
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
    default:cout<<"�������!"<<endl;
    }
    cout<<"������ѧ���ɼ�����:"<<endl;
    for(int j=0;j<i;j++)
        {s[j].print();cout<<endl;}
    cout<<endl;
    int m;
    cout<<"�����������밴1,���������밴0"<<endl;
    cin>>m;
    if(m==1)menu();
    if(m==0)sort();
}
void shanchu()
{
    int n,b,p;
    int a=0;
    char Name[10];
    cout<<"����ѡ��ɾ��������"<<endl;
    cout<<"����ѧ��ɾ���밴1����������ɾ���밴0"<<endl;
    cin>>n;
    if(n==1){
             cout<<"������ѧ��:"<<endl;
             cin>>b;
             for(int j=0;j<i;j++)
                 if(s[j].num==b)
                        {for(int k=j;k<i;k++)
                            s[k]=s[k+1];
                            a=1;
                            i--;
                        }
             if(a==0)cout<<"δ�ҵ���¼!"<<endl;
            }
    else if(n==0){
                  cout<<"����������:"<<endl;
                  cin>>Name;
                  for(int j=0;j<i;j++){int m=strcmp(s[j].name,Name);
                                       if(m==0)
                                          {for(int k=j;k<i;k++)
                                               s[k]=s[k+1];
                                           a=1;
                                           i--;
                                          }
                                      }
                  if(a==0)cout<<"δ�ҵ���¼!"<<endl;
                  }
         else cout<<"�������!����������!"<<endl;
         cout<<"�����������밴1�����������밴0"<<endl;
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
    cout<<"ѧ�ּ���Ӹߵ�������Ϊ:"<<endl;
    cout<<"����"<<setw(8)<<"ѧ��"<<setw(12)<<"ѧ�ּ���"<<endl;
    for(int j=0;j<i;j++)
        cout<<s[j].name<<setw(8)<<s[j].num<<setw(10)<<s[j].xfjd<<endl;
    cout<<"�����������밴1"<<endl;
    cin>>n;
    if(n==1)menu();
}
void scholarship()
{
    int n;
    cout<<"��ѧ������:"<<endl;
    cout<<setw(12)<<"����"<<setw(8)<<"ѧ��"<<setw(12)<<"VC++�ɼ�"<<setw(12)<<"Ӣ��ɼ�"<<setw(12)<<"�����ɼ�"<<endl;
    for(int j=0;j<i;j++)
       {if(s[j].xfjd>=4.0)
        cout<<"�صȽ�:"<<s[j].name<<setw(10)<<s[j].num<<setw(10)<<s[j].vc<<setw(10)<<s[j].eng<<setw(10)<<s[j].math<<endl;
        if(s[j].xfjd<4.0&&s[j].xfjd>=3.6)
        cout<<"һ�Ƚ�:"<<s[j].name<<setw(10)<<s[j].num<<setw(10)<<s[j].vc<<setw(10)<<s[j].eng<<setw(10)<<s[j].math<<endl;
        if(s[j].xfjd<3.6&&s[j].xfjd>=3.2)
        cout<<"���Ƚ�:"<<s[j].name<<setw(10)<<s[j].num<<setw(10)<<s[j].vc<<setw(10)<<s[j].eng<<setw(10)<<s[j].math<<endl;
        if(s[j].xfjd<3.2&&s[j].xfjd>=2.8)
        cout<<"���Ƚ�:"<<s[j].name<<setw(10)<<s[j].num<<setw(10)<<s[j].vc<<setw(10)<<s[j].eng<<setw(10)<<s[j].math<<endl;
       }
       cout<<"�����������밴1"<<endl;
       cin>>n;
       if(n==1)menu();
}
void sanhao()
{
    int n;
    cout<<"����ѧ������:"<<endl;
    for(int j=0;j<i;j++)
        if(s[j].xfjd>3.0&&(s[j].vc>70||s[j].eng>70||s[j].math>70))
            cout<<s[j].name<<endl;
    cout<<"�����������밴1�������밴0"<<endl;
    cin>>n;
    if(n==1)menu();
}
void max()
{
    int m;
    cout<<"��ѯ�ܳɼ���߷��밴1��VC++��߷��밴2��������߷��밴3��Ӣ����߷��밴4"<<endl;
    cin>>m;
    float Max;
    int p=0;
    switch(m){
        case 1:{Max=s[0].sum;
                for(int j=1;j<i;j++)
                    if(Max<s[j].sum){Max=s[j].sum;p=j;}
                cout<<"�ܳɼ���߷�Ϊ:"<<endl;
                cout<<s[p].name<<'\t'<<s[p].sum;};break;
        case 2:{Max=s[0].vc;
                for(int j=1;j<i;j++)
                    if(Max<s[j].vc){Max=s[j].vc;p=j;}
                cout<<"VC++�ɼ���߷�Ϊ:"<<endl;
                cout<<s[p].name<<'\t'<<s[p].vc;};break;
        case 3:{Max=s[0].math;
                for(int j=1;j<i;j++)
                    if(Max<s[j].math){Max=s[j].math;p=j;}
                cout<<"�����ɼ���߷�Ϊ:"<<endl;
                cout<<s[p].name<<'\t'<<s[p].math;};break;
        case 4:{Max=s[0].eng;
                for(int j=1;j<i;j++)
                    if(Max<s[j].eng){Max=s[j].eng;p=j;}
                cout<<"Ӣ��ɼ���߷�Ϊ:"<<endl;
                cout<<s[p].name<<'\t'<<s[p].eng;};break;
        default:cout<<"�������!"<<endl;}
        cout<<endl;
        int n;
        cout<<"�����������밴1,���������밴0"<<endl;
        cin>>n;
        if(n==1)menu();
        if(n==0)max();
}
void exit()
{
    cout<<"ллʹ��!"<<endl;
}
int main()
{
    cout<<endl;
    cout<<"\t\t\t\t****��ӭʹ��ѧ���γ̳ɼ�����ϵͳ****"<<endl;
    cout<<"\t\t\t\t____________________________________"<<endl;
    cout<<endl;
    menu();
}
