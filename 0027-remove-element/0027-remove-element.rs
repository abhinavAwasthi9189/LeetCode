impl Solution {
    pub fn remove_element(nums: &mut Vec<i32>, val: i32) -> i32 {
        if nums.len()==0{return 0;}
        else if nums.len()==1{if nums[0]==val{return 0;}else{return 1;}}
        else{
            let mut i=0;let mut  j=(nums.len()-1);
            loop{
                if i >=j {break;}
                else if nums[j]!=val&&nums[i]== val{nums[i]=nums[j];nums[j]=val;}
                else if nums[i]!= val{i+=1;}
                else if nums[j]==val{j-=1;}
            }
            if i==j && nums[i]!=val{return (i+1) as i32;}
            else{return i as i32;}
        }
    }
}