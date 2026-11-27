typedef struct { int p[2]; int *data; int width,height; } A;
extern void func_001DCC78(void *,int,int,int);
int func_001DCE08(A *a,int x,int y,int w,int h,void *dst,int dx,int dy) {
 int right=x+w-1,bottom=y+h-1,i,j;
 if(x<0 || x>=a->width || right<0 || right>=a->width || y<0 || y>=a->height || bottom<0 || bottom>=a->height || !dst) return 0;
 for(j=0;j<h;j++) for(i=0;i<w;i++) func_001DCC78(dst,dx+i,dy+j,a->data[x+i+(y+j)*a->width]);
 return 1;
}
