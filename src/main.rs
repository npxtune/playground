fn read_input() -> String {
    let mut input = String::new();
    std::io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    input.trim().to_string()
}

fn convert_to_temp() {
    loop {
        println!("input degrees as number");
        let temperature: i32 = read_input().parse::<i32>().unwrap_or_default();
        println!("Do you want to convert to celsius or fahrenheit?");
        println!("celsius -> c | fahrenheit -> f");
        let to_temp = read_input();
        if to_temp.trim() == "c" {
            let result = ((temperature - 32) * 5) / 9;
            println!("{result}");
        } else if to_temp.trim() == "f" {
            let result = ((temperature * 9) / 5) + 32;
            println!("{result}");
        } else {
            println!("no valid input found");
        }
        drop(to_temp);
        drop(temperature);
    }
}

fn is_divisible_by_two() {
    println!("Is divisible by two?");
    loop {
        let number: i32 = read_input().parse::<i32>().unwrap_or_default();
        if number % 2 == 0 {
            println!("yes");
        } else {
            println!("no");
        }
        drop(number);
    }
}

fn main() {
    println!("Hello, world!");
    println!("de | di");
    match read_input().trim() {
        "de" => convert_to_temp(),
        "di" => is_divisible_by_two(),
        _ => println!("no valid input"),
    }
}
