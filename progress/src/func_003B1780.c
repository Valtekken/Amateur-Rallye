extern s32 func_003A3910(s32);extern s32 func_003B30B0(s32,s32);extern s32 func_003B3118(s32,s32);s32 func_003B1780(register s32 a,register s32 b){s32 h=func_003A3910(func_003B3118(a,b));return func_003B30B0(a+0x24,h);}
s32 func_002CEFD8(s8*s1,s8*e1,s8*s2,s8*e2){s8 c1,c2;while(s1!=e1&&s2!=e2){c1=*s1;c2=*s2;if(c1<c2)return -1;if(c2<c1)return 1;s1++;s2++;}if(s2==e2)return s1!=e1;return -1;}
s32 func_002CA958(s8*s1,s8*e1,s8*s2,s8*e2){s8 c1,c2;while(s1!=e1&&s2!=e2){c1=*s1;c2=*s2;if(c1<c2)return -1;if(c2<c1)return 1;s1++;s2++;}if(s2==e2)return s1!=e1;return -1;}
s32 func_0026C628(s8*s1,s8*e1,s8*s2,s8*e2){s8 c1,c2;while(s1!=e1&&s2!=e2){c1=*s1;c2=*s2;if(c1<c2)return -1;if(c2<c1)return 1;s1++;s2++;}if(s2==e2)return s1!=e1;return -1;}
