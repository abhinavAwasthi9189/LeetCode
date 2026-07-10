impl Solution {
    pub fn get_sum(a: i32, b: i32) -> i32 {
        let mut AND = a & b;;let mut XOR= a ^ b;
        while AND!=0{
            AND = AND << 1;
            (XOR,AND) = (XOR ^ AND,XOR & AND);
        }
        return XOR;
    }
}