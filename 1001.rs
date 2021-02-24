use std::io;

        // Main Functions
        fn main() {
            
            let mut input1 = String::new();
            io::stdin().read_line(&mut input1).expect("Failed to read
            line");
  
            
            let mut input2 = String::new();
            io::stdin().read_line(&mut input2).expect("Failed to read
            line");
  
            // Converting string to integer
            let aint: i32 = input1.trim().parse().ok().expect("Program
            only
            processes numbers, Enter number");
            let bint: i32 = input2.trim().parse().ok().expect("Program
            only
            processes numbers, Enter number");
  
            // Output of basic operations
            println!("X = {}", aint + bint);
            
          }