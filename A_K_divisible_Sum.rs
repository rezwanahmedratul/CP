use std::io::{self, Read};

fn solve(n: i64, mut k: i64) -> i64 {
    if k >= n {
        (k + n - 1) / n
    } else {
        while k < n {
            k += k;
        }
        (k + n - 1) / n
    }
}

fn main() {
    // Read all input at once
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();
    let mut iter = input.split_whitespace();

    let t: i64 = iter.next().unwrap().parse().unwrap();
    for _ in 0..t {
        let n: i64 = iter.next().unwrap().parse().unwrap();
        let k: i64 = iter.next().unwrap().parse().unwrap();
        println!("{}", solve(n, k));
    }
}
