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

/*fn stuff() {
    println!("Match statement: {}", match_expression());
    let x = {
        let y = 5;
        let z = 6;
        y + z
    };
    println!("detailed variable declaration: {x}");

    println!("Conversion to i32: {}", output_number());

    fn output_number() -> i32 {
        loop {
            println!("Please type in a valid number");
            let output: i32 = match read_input().trim().parse::<i32>() {
                Ok(output) => output,
                Err(_) => continue,
            };
            return output;
        }
    }

    fn match_expression() -> i32 {
        let y = 100;
        match y {
            32 => 6,
            100 => 5,
            _ => 0,
        }
    }
}*/

fn main() {
    println!("Hello, world!");
    println!("Input your temperature as a number only");
    convert_to_temp(read_input().parse::<i32>().unwrap_or_default());
}
