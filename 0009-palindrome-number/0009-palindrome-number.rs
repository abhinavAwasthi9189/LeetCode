impl Solution {
    pub fn is_palindrome(x: i32) -> bool {
        if x<0{return false;}
        else{
            let x = x.abs().to_string();
            let x= x.as_bytes();
            let mut i=0;
            let mut j=x.len()-1;
            loop{
            if i>=j{
                return true;
            }
            else{
                if &x[i]!=&x[j]{
                    return false;
                }
                else{
                    i+=1;j-=1;
                }
            }
        }}
    }
}