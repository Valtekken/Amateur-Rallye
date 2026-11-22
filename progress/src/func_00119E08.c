extern int func_0011A588(int,int),func_00194B18(int),func_00194C40(void),func_00195788(int,int),func_001959D0(int,int),func_00196028(void),func_001965A8(int),func_00196E10(void);
extern void func_00195700(int,int,int),func_00195948(int,int,int),func_001D4040(void*,const char*),func_001E3EC0(int,void*,int);
extern char D_00445BF0[],D_00445C10[],D_00445C30[];
#define MSG(str,val) {int k=func_001E4280();func_001D4040(buf,str);func_001E3EC0(k,buf,val);}
#define CAR(i,v) if(!func_00195788(func_00196028(),i)){MSG(D_00445BF0,v);}
#define MODE(i,v,s) if(!func_001959D0(func_00196028(),i)){MSG(s,v);}
void func_00119E08(int a){int buf[4],t;
if(func_00194B18(func_00194C40())==5){CAR(13,24);func_00195700(func_00196028(),13,1);}
else if(func_0011A588(a,0)>=5){switch(func_001965A8(func_00196E10())){
case 0:MODE(0,6,D_00445C10);MODE(2,8,D_00445C30);func_00195948(func_00196028(),0,1);func_00195948(func_00196028(),2,1);break;
case 1:MODE(1,7,D_00445C10);MODE(3,9,D_00445C30);func_00195948(func_00196028(),1,1);func_00195948(func_00196028(),3,1);break;
case 2:MODE(5,11,D_00445C10);MODE(4,10,D_00445C30);func_00195948(func_00196028(),5,1);func_00195948(func_00196028(),4,1);break;}}
else if(func_0011A588(a,0)>=4){t=func_001965A8(func_00196E10());switch(t){case 0:CAR(2,5);break;case 1:CAR(5,13);break;case 2:CAR(8,21);break;}func_00195700(func_00196028(),t*3+2,1);}
else if(func_0011A588(a,0)>=3){t=func_001965A8(func_00196E10());switch(t){case 0:CAR(1,4);break;case 1:CAR(4,12);break;case 2:CAR(7,20);break;}func_00195700(func_00196028(),t*3+1,1);}
else if(func_0011A588(a,0)>=2){t=func_001965A8(func_00196E10());switch(t){case 0:CAR(0,3);break;case 1:CAR(3,11);break;case 2:CAR(6,19);break;}func_00195700(func_00196028(),t*3,1);}}
