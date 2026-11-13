extern void func_0010FB20(s32),func_0010CFD0(s32);
extern s32 func_00193B60(void),func_00191710(s32),func_001D5F70(void),func_001D5EB0(s32,s32,s32),func_00191FD0(s32,s32),func_0010FD10(s32),func_00196E10(void),func_00196800(s32,s32),func_0010DE50(s32,s32),func_00191C50(s32,s32),func_001919E8(s32),func_00194C40(void),func_00194738(s32);
extern void func_001D4040(s32*,char*);
extern void func_001E3EC0(s32,s32,s32),func_001E3D10(s32,s32,s32);
extern char D_00445DC0[],D_00445BF0[],D_00445C10[],D_00445C30[],D_00445DE0[],D_00445C50[],D_00445C70[],D_00445DF8[];
static inline s32 keyinit(s32*p,char*s){func_001D4040(p,s);return (s32)p;}
static inline s32 screen(s32 t){s32 r=53;if(!t)r=36;return r;}
s32 func_0010D978(s32 arg){
s32 key[4];s32 level=func_00191710(func_00193B60());s32 mode,r,result;
func_0010FB20(arg);++level;
{s32 ctx=func_001E4280();mode=func_001E3650(ctx,keyinit(key,D_00445DC0));}
r=func_001D5EB0(func_001D5F70(),1,10);
switch(mode){
case 0:if(level<5){if(r<4)func_00191FD0(func_00193B60(),2);else func_00191FD0(func_00193B60(),1);}
else{if(r<7)func_00191FD0(func_00193B60(),2);else func_00191FD0(func_00193B60(),1);}break;
case 1:if(level<4){if(r<3)func_00191FD0(func_00193B60(),1);else if(r<9)func_00191FD0(func_00193B60(),2);else func_00191FD0(func_00193B60(),3);}
else {if(r<=0)func_00191FD0(func_00193B60(),1);else if(r<8)func_00191FD0(func_00193B60(),2);else func_00191FD0(func_00193B60(),3);}break;
case 2:if(level<4){if(r<3)func_00191FD0(func_00193B60(),1);if(r<8)func_00191FD0(func_00193B60(),2);else func_00191FD0(func_00193B60(),3);}
else{if(r<=0)func_00191FD0(func_00193B60(),1);if(r<8)func_00191FD0(func_00193B60(),2);else func_00191FD0(func_00193B60(),3);}break;
}
if(level>=10){
s32 won,trophy;
{s32 ctx=func_001E4280();func_001E3EC0(ctx,keyinit(key,D_00445BF0),-1);}
{s32 ctx=func_001E4280();func_001E3EC0(ctx,keyinit(key,D_00445C10),-1);}
{s32 ctx=func_001E4280();func_001E3EC0(ctx,keyinit(key,D_00445C30),-1);}
won=func_0010FD10(arg);trophy=func_00196800(func_00196E10(),0);
func_0010CFD0(arg);func_0010DE50(arg,1);
{s32 ctx=func_001E4280();func_001E3D10(ctx,keyinit(key,D_00445DE0),0);}
if(won){
{s32 ctx=func_001E4280();func_001E3EC0(ctx,keyinit(key,D_00445C50),trophy);}
{s32 ctx=func_001E4280();func_001E3EC0(ctx,keyinit(key,D_00445C70),29);}
return 43;}return 29;
}

func_00191C50(func_00193B60(),level);
{s32 ctx=func_001E4280();func_001D4040(key,D_00445DF8);
func_001E3EC0(ctx,(s32)key,func_001919E8(func_00193B60()));}
func_0010DE50(arg,0);
return screen(func_00194738(func_00194C40()));
}
