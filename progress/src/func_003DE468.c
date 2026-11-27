extern void func_003D7D68(void *);
extern int *func_003F73E0(void);
extern int func_004035A0(const char *, int, int);
void *func_003DE468(char *p, const char *path, char *mode) {
 int flags=0, access, state, fd; char c;
 if (*(int *)(p+0x38)>=0) return 0;
 c=*mode++;
 switch(c) {
 case 'r': access=0; state=8; break;
 case 'w': access=1; flags=0x600; state=4; break;
 case 'a': access=1; flags=0x208; state=0x1004; break;
 default: *func_003F73E0()=22; return 0;
 }
 if (*mode=='+' || (*mode=='b' && mode[1]=='+')) {access=2; state &= 0x1000;}
 access |= flags;
 fd=func_004035A0(path,access,0x1b6);
 if(fd<0) return 0;
 *(int *)(p+0x38)=fd;
 *(int *)p=(*(int *)p & ~0x100c)|state;
 if ((state & 0x1000) && (*(int (**)(void *,int,int,int))(*(char **)(p+0x50)+0x44))(p,0,2,3)==-1 && *func_003F73E0()!=29) return 0;
 func_003D7D68(p); return p;
}
