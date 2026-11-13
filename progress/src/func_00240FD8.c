s32 func_00240FD8(void *arg0,s32 arg1){s32 *begin=*(s32**)arg0;s32 n=(*(s32*)((u8*)arg0+4)-(s32)begin)>>2;s32 i=0;int z=0;if(n>z){s32 *p=begin;do{i++;if(*p==arg1)return 1;p++;}while(i<n);}return 0;}
