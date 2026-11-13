/* identical to func_00308840 (matched), with its names changed by decompdecomp */
extern char*func_00152B80(u32,s32*);extern char*D_0040E618[];
void*func_0038EEB0(u32 n){s32 count=20;char*chunk=func_00152B80(n,&count);char*cur,*next;s32 i;
if(count==1)return chunk;{D_0040E618[((n+7)>>3)-1]=next=chunk+n;for(i=1;;i++){cur=next;next=next+n;if(count-1==i){*(char**)cur=0;break;}*(char**)cur=next;}}return chunk;}
