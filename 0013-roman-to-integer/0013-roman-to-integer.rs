

impl Solution {
    pub fn roman_to_int(s: String) -> i32 {
        let mut i:i32=1;
        let mut v:i32=5;
        let mut x:i32=10;
        let mut l:i32=50;
        let mut c:i32=100;
        let mut d:i32=500;
        let mut m:i32=1000;
        let mut r:i32=0;
        let mut s=s.into_bytes();
        s.reverse();
        for val in s{
            match val{
                b'I'=>{r+=i;}
                b'V'=>{r+=v;i=-1;}
                b'X'=>{r+=x;v=-5;i=-1;}
                b'L'=>{r+=l;x=-10;}
                b'C'=>{r+=c;l=-50;x=-10;}
                b'D'=>{r+=d;c=-100;}
                b'M'=>{r+=m;d=-500;c=-100;}
                _=>{}
            }
        }
    return r;}
} 