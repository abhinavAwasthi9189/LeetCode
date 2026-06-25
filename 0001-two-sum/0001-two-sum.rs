impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let length = nums.len();
        for i in 0..length{
            for j in 1..length{
                if i==j{continue;}
                if &nums[i]+&nums[j]==target{
                    let ret:Vec<i32> = vec![i as i32, j as i32];
                    return ret;
                }
            }
        }
        vec![] 
    }
}