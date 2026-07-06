impl Solution {
    pub fn str_str(haystack: String, needle: String) -> i32 {
        let haystack: Vec<char> = haystack.chars().collect();
        let needle:Vec<char> = needle.chars().collect();
        if needle.len() > haystack.len(){return -1;}
        for j in 0..haystack.len(){
            if haystack[j]== needle[0]{
                for i in 0..needle.len(){
                    if i+j >= haystack.len(){return -1;}
                    else if needle[i] != haystack[j+i]{break;}
                    else if i == (needle.len()-1){return j as i32;}
                }
            }
        }
        return -1;
    }
}