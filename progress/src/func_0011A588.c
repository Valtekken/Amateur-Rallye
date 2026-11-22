extern int func_00194D58(int,int),func_00196028(void),func_001965A8(int),func_00196E10(void),func_001D5EB0(int,int,int),func_001D5F70(void);
int func_0011A588(int unused,int flag){
 int n=0,mode=func_001965A8(func_00196E10());
 switch(mode){
 case 0:
 n=1; if(func_00194D58(func_00196028(),0)==1)n=1; else n=0;
 if(func_00194D58(func_00196028(),4)==1)n++;
 if(func_00194D58(func_00196028(),8)==1)n++;
 if(func_00194D58(func_00196028(),12)==1)n++;
 if(func_00194D58(func_00196028(),16)==1)n++;
 break;
 case 1:
 n=1; if(func_00194D58(func_00196028(),20)==1)n=1; else n=0;
 if(func_00194D58(func_00196028(),24)==1)n++;
 if(func_00194D58(func_00196028(),28)==1)n++;
 if(func_00194D58(func_00196028(),32)==1)n++;
 if(func_00194D58(func_00196028(),36)==1)n++;
 break;
 case 2:
 n=1; if(func_00194D58(func_00196028(),40)==1)n=1; else n=0;
 if(func_00194D58(func_00196028(),44)==1)n++;
 if(func_00194D58(func_00196028(),48)==1)n++;
 if(func_00194D58(func_00196028(),52)==1)n++;
 if(func_00194D58(func_00196028(),56)==1)n++;
 break;
 }
 if(flag && n==5)return func_001D5EB0(func_001D5F70(),2,5);
 return n;
}
