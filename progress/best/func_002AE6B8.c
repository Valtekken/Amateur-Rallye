typedef union {s64 ll;struct{unsigned low;int high;}s;}DW;
s64 func_002AE6B8(s64 a,s64 b){DW u,v,w;u.ll=a;v.ll=b;w.ll=(u64)u.s.low*v.s.low;w.s.high+=(u.s.low*v.s.high)+(u.s.high*v.s.low);return w.ll;}
