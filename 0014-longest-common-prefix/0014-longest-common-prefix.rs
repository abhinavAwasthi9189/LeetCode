impl Solution {
    pub fn longest_common_prefix(strs: Vec<String>) -> String {
        let length = strs.len();
        if length==1 {
            let v = strs[0].clone(); return  v;}
        let mut V:Vec<Vec<u8>>= Vec::new();
        for i in strs{
                let v=i.into_bytes();
                V.push(v);
        }
        let mut res = String::new();
        'outer: for j in 0..V[0].len(){
            let ch = V[0][j];
            for i in 1..length{
                if j>=V[i].len(){
                    break 'outer;
                }
                else if ch != V[i][j]{
                    break 'outer;
                }
            }
            res.push(ch as char);
        }
        return res;
    }
}