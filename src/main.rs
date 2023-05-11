fn read_input() -> String {
    let mut input = String::new();
    std::io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");
    input.trim().to_string()
}

fn convert_to_temp(temperature: i32) {
    loop {
        println!("Do you want to convert to celsius or fahrenheit?");
        println!("celsius -> c | fahrenheit -> f");
        let to_temp = read_input();
        if to_temp.trim() == "c" {
            let result = ((temperature - 32) * 5) / 9;
            println!("{result}");
            drop(result);
            break;
        } else if to_temp.trim() == "f" {
            let result = ((temperature * 9) / 5) + 32;
            println!("{result}");
            drop(result);
            break;
        } else {
            println!("no valid input found");
            continue;
        }
    }
    drop(temperature);
}

fn main() {
    println!("Hello, world!");
    println!("Input your temperature as a number only");
    convert_to_temp(read_input().parse::<i32>().unwrap_or_default());
}
