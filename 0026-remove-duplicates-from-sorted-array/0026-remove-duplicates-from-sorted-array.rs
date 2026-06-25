impl Solution {
    pub fn remove_duplicates(nums: &mut Vec<i32>) -> i32 {
        if nums.is_empty(){return 0;}
        let mut j:i32=0;
        for i in 1..nums.len(){
            if &nums[i]!=&nums[j as usize]{
                j+=1;
                 nums[j as usize]=nums[i];
            }
        }
    return j+1;
    }
}