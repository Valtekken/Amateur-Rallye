s32 func_002BDF90(s32 *p,s32 key){s32 ret=0; s32 value=p[0];while(value){if(key==p[1]){ret=value;break;}p+=2;value=p[0];}return ret;}
