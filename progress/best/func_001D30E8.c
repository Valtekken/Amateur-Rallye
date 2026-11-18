u32 func_001D30E8(u32*p,s8*s){u32 h=0,t;u8 c=(u8)*s;if(*s){do{h=(h<<4)+(s8)c;t=h&0xf0000000;s++;if(t){h^=t>>24;h^=t;}c=(u8)*s;}while(*s);}return h%*p;}
